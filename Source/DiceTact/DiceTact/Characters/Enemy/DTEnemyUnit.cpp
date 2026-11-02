// Fill out your copyright notice in the Description page of Project Settings.


#include "DTEnemyUnit.h"

#include <string>

#include "AbilitySystemComponent.h"
#include "DTEnemyDefinition.h"
#include "Components/CapsuleComponent.h"
#include "DiceTact/Abilities/Enemies/DTEnemyAttackAbility.h"
#include "DiceTact/Dice/DTActorDiceCollisionData.h"
#include "DiceTact/Dice/DTDiceCollisionData.h"
#include "DiceTact/Medaillon/DTDamageModifierAttributes.h"
#include "DiceTact/Projectiles/DTBounceComponent.h"
#include "DiceTact/subsystem/DTCombatBridgeSubsystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values
ADTEnemyUnit::ADTEnemyUnit()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	HealthComp = CreateDefaultSubobject<UDTHealthComponent>("HealthComponent");
	
	DamageModifierAttributeSet = CreateDefaultSubobject<UDTDamageModifierAttributes>(TEXT("DamageModifierAttributeSet"));
	PhysicalReaction = CreateDefaultSubobject<UPhysicalReactionComponent>(TEXT("PhysicalReaction"));
}

// Called when the game starts or when spawned
void ADTEnemyUnit::BeginPlay()
{
	Super::BeginPlay();

	DefaultMeshRelativeLocation = GetMesh()->GetRelativeLocation();
	DefaultMeshRelativeRotation = GetMesh()->GetRelativeRotation();

	HealthComp->SetMaxValue(GetEnemyCombatData().Hitpoints);
	HealthComp->SetStartingValue(GetEnemyCombatData().Hitpoints, true);
	
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
	AttackHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(GetEnemyCombatData().AttackAbility.LoadSynchronous(), 1, INDEX_NONE, this));

	PhysicalReaction->OnImpactReceived.AddDynamic(this, &ADTEnemyUnit::HandleImpactReceived);
}

// Called every frame
void ADTEnemyUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRagdolling)
	{
		TickRagdoll(DeltaTime);
	}

	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		CachedVelocity = Capsule->GetPhysicsLinearVelocity();
	}
}

bool ADTEnemyUnit::PushToward_Implementation(const FPushData& PushData)
{

	//Do not push Enemies if it the instigator was an enemy.
	//faut que les enemie se pousse entre et et j'utilise deja cette methode donc faut trouver un autre moyen pour les attqie enemie
	// if (PushData.Instigator->GetClass() == GetClass())
	// {
	// 	return false;
	// }
	FVector DirectionBetween = (GetActorLocation() - PushData.Instigator->GetActorLocation()).GetSafeNormal();
	
	FVector PushVelocity = PushData.Direction * PushData.Strength;
	
	float PusherVelocity = FVector::DotProduct(PushVelocity, DirectionBetween);
	PusherVelocity = FMath::Max(PusherVelocity, 0.f); 
	float Intensity = FMath::Clamp(PusherVelocity / CollisionData->MaxSpeed, 0.f, 1.f);
	FString Message = FString::Printf(TEXT("Speed collision = %f"), PusherVelocity);
	UJUEDevelopmentStatics::ReportDebugMessage(Message);
	switch (CollisionData->ImpulseCurve)
	{
	case EImpulseCurve::Exponential:
		Intensity = FMath::Pow(Intensity, CollisionData->CurveExponent);
		break;

	case EImpulseCurve::Custom:
		if (CollisionData->IntensityCurve)
		{
			Intensity = FMath::Clamp(CollisionData->IntensityCurve->GetFloatValue(Intensity), 0.f, 1.f);
		}
		break;

	case EImpulseCurve::Linear:
	default:
		break;
	}
	
	float ImpulseStrength = FMath::Lerp(CollisionData->MinDiceImpulseSpeed, CollisionData->MaxDiceImpulseSpeed, Intensity);

	FVector LaunchVelocity = PushData.Direction * ImpulseStrength;
	LaunchVelocity.Z += CollisionData->UpwardImpulseStrength;

	// if (pushingActor != nullptr)
	// {
	// 	if (CanProcessHit(pushingActor))
	// 	{
	// 		LaunchCharacter(LaunchVelocity, false, false);
	// 		UJUEDevelopmentStatics::ReportDebugMessage("meowmeow");
	// 	}
	// }
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);

	if (UDTBounceComponent* ExistingComponent = FindComponentByClass<UDTBounceComponent>())
	{
		ExistingComponent->DestroyComponent();
	}

	UDTBounceComponent* Component = NewObject<UDTBounceComponent>(this);
	AddInstanceComponent(Component);
	Component->RegisterComponent();
	Component->InitializeBounceComponent(BounceData);
	
	BeginRagdoll(LaunchVelocity, Torque * CollisionData->Torque);
	return true;
}

bool ADTEnemyUnit::PushTowardBlackHole_Implementation(const FPushData& PushData)
{
	if (UDTBounceComponent* ExistingComponent = FindComponentByClass<UDTBounceComponent>())
	{
		ExistingComponent->DestroyComponent();
	}

	UDTBounceComponent* Component = NewObject<UDTBounceComponent>(this);
	AddInstanceComponent(Component);
	Component->RegisterComponent();
	Component->InitializeBounceComponent(BounceData);
	
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);
	
	BeginRagdoll(PushData.Strength * PushData.Direction, Torque * CollisionData->Torque);
	return true;
}

void ADTEnemyUnit::ApplyImpulse_Implementation(const FPushData& Info)
{
	if (UDTBounceComponent* ExistingComponent = FindComponentByClass<UDTBounceComponent>())
	{
		ExistingComponent->DestroyComponent();
	}

	UDTBounceComponent* Component = NewObject<UDTBounceComponent>(this);
	AddInstanceComponent(Component);
	Component->RegisterComponent();
	Component->InitializeBounceComponent(BounceData);
	
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);
	
	BeginRagdoll(Info.Direction * Info.Strength, Torque * CollisionData->Torque);
}

FDamageInfo ADTEnemyUnit::TakeDamage_Implementation(AActor* Dealer, int Damage)
{
	if (Dealer->GetClass() == GetClass())
	{
		return FDamageInfo(Dealer, this, 0, false); 
	}

	const float DamageTakenBonus =
	DamageModifierAttributeSet->GetDamageTakenBonus();

	const float FinalDamage = FMath::Max(0.f, Damage + DamageTakenBonus);
	return IDTDamageable::TakeDamage_Implementation(Dealer, FinalDamage);
}

void ADTEnemyUnit::FellOutOfWorld(const class UDamageType& dmgType)
{
	//UnregisterFromGame();
	PlayDeathAnim();
	Super::FellOutOfWorld(dmgType);
}

void ADTEnemyUnit::UnregisterFromGame()
{
	UDTCombatBridgeSubsystem* BridgeSubsystem = GetWorld()->GetSubsystem<UDTCombatBridgeSubsystem>();
	if (IsValid(BridgeSubsystem) == false)
	{
		return;
	}

	if (GetController()->Implements<UDTTurnReceiver>())
	{
		BridgeSubsystem->UnregisterTurnReceiverFromCombat(TScriptInterface<IDTTurnReceiver>(GetController()), ECombatUnitType::Enemy);
	}

	BridgeSubsystem->UnregisterUnitFromCombat(this, ECombatUnitType::Enemy);
}

/*
bool AEnemyUnit::PushTowardVelocity_Implementation(FVector direction, AActor* pushingActor)
{
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);

	BeginRagdoll(direction, Torque * CollisionData->Torque);
	return true;
}*/

void ADTEnemyUnit::GetHealthComponent(UDTHealthComponent*& HealthComponent)
{
	HealthComponent = HealthComp;
}

const UDTEnemyDefinition* ADTEnemyUnit::GetEnemyDefinition() const
{
	return EnemyDefinition;
}

FVector ADTEnemyUnit::GetCachedVelocity() const
{
	return CachedVelocity;
}

void ADTEnemyUnit::TryAttack()
{
	AbilitySystemComponent->TryActivateAbility(AttackHandle);
}

const FEnemyCombatData& ADTEnemyUnit::GetEnemyCombatData() const
{
	return EnemyDefinition->GetEnemyCombatData();
}

void ADTEnemyUnit::HandleImpactReceived(UPhysicalReactionComponent* Comp, const FPhysicalImpactInfo& Info)
{
	if (bRagdolling || !CollisionData) return;
 
	AActor* Source = Info.Source.Get();
	if (!Source) return;

	FVector Direction = (GetActorLocation() - Source->GetActorLocation()).GetSafeNormal();
	Direction.Z = 0.f;
	Direction.Normalize();
	if (Info.ImpactSpeed < CollisionData->MinimumSpeed) return;
	
	const float PusherSpeed = Info.ImpactSpeed + CollisionData->BaseStrengthBonus;
 
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("Speed collision = %f (raw %f)"), PusherSpeed, Info.ImpactSpeed));
 
	float Intensity = FMath::Clamp(Info.ImpactSpeed / FMath::Max(CollisionData->MaxSpeed, KINDA_SMALL_NUMBER) * CollisionData->GetMassMultiplier(Info.OtherMass),0.f, 1.f);
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("intensity (raw %f)"), Intensity));
	switch (CollisionData->ImpulseCurve)
	{
	case EImpulseCurve::Exponential:
		Intensity = FMath::Pow(Intensity, CollisionData->CurveExponent);
		break;
 
	case EImpulseCurve::Custom:
		if (CollisionData->IntensityCurve)
		{
			Intensity = FMath::Clamp(CollisionData->IntensityCurve->GetFloatValue(Intensity), 0.f, 1.f);
		}
		break;
 
	case EImpulseCurve::Linear:
	default:
		break;
	}
 
	const float ImpulseStrength = FMath::Lerp(CollisionData->MinDiceImpulseSpeed, CollisionData->MaxDiceImpulseSpeed, Intensity);
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("Speed end = %f"), ImpulseStrength));
	if (ImpulseStrength <= 0)return;
	
	FVector LaunchVelocity = Direction * ImpulseStrength;
	LaunchVelocity.Z += CollisionData->UpwardImpulseStrength;
	
	
	//torgue
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);

	float TorqueImpulse = CollisionData->Torque * Intensity;
	//to replace torgue with the one inside data asset
	BeginRagdoll(LaunchVelocity, TorqueImpulse * Torque);
}

bool ADTEnemyUnit::CanProcessHit(AActor* OtherDice)
{
	float Now = GetWorld()->GetTimeSeconds();
	if (float* LastTime = RecentHitTimestamps.Find(OtherDice))
	{
		if (Now - *LastTime < HitCooldown)
		{
			return false;
		}
	}
	RecentHitTimestamps.Add(OtherDice, Now);
	return true;
}

void ADTEnemyUnit::BeginRagdoll(FVector LaunchVelocity, FVector Torque)
{
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (!Capsule) return;

	bRagdolling = true;
	RagdollTimer = 0.f;

	GetCharacterMovement()->SetMovementMode(MOVE_None);
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->DisableMovement();
	
	//Capsule->SetCollisionProfileName(TEXT("Ragdoll"));
	Capsule->SetSimulatePhysics(true);
	Capsule->WakeAllRigidBodies();

	if (CollisionData->bUseMass)
	{
		Capsule->AddImpulse(LaunchVelocity, NAME_None, false);
		Capsule->AddAngularImpulseInDegrees(Torque, NAME_None, false);
	}
	else
	{
		Capsule->SetAllPhysicsLinearVelocity(LaunchVelocity);
		Capsule->SetAllPhysicsAngularVelocityInDegrees(Torque);
	}
	
}

void ADTEnemyUnit::TickRagdoll(float DeltaTime)
{
	RagdollTimer += DeltaTime;

	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (!Capsule) return;

	float CurrentSpeed = Capsule->GetPhysicsLinearVelocity().Size();

	if (RagdollTimer >= CollisionData->RagdollMinDuration && CurrentSpeed <= CollisionData->RagdollSettleSpeedThreshold)
	{
		EndRagdoll();
	}
}

void ADTEnemyUnit::EndRagdoll()
{
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (!Capsule) return;

	Capsule->SetSimulatePhysics(false);
	Capsule->SetCollisionProfileName(TEXT("Pawn"));
	
	FRotator UprightRotation = GetActorRotation();
	UprightRotation.Pitch = 0.f;
	UprightRotation.Roll = 0.f;
	SetActorRotation(UprightRotation, ETeleportType::TeleportPhysics);
	
	GetMesh()->SetRelativeLocationAndRotation(DefaultMeshRelativeLocation, DefaultMeshRelativeRotation);

	GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	bRagdolling = false;
}


