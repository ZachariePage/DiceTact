// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroCharacter.h"

#include "DTHeroDefinition.h"
#include "DiceTact/Characters/DTCombatPlayerController.h"
#include "Camera/CameraComponent.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h"
#include "Components/CapsuleComponent.h"
#include "DiceTact/Abilities/HeroPower/DTHeroPowerAbility.h"
#include "DiceTact/Abilities/HeroPower/DTHeroPowerDefinition.h"
#include "DiceTact/Abilities/Throws/DTDiceThrowAbility.h"
#include "DiceTact/Attributes/DTPartyMovementAttributes.h"
#include "DiceTact/Dice/DTActorDiceCollisionData.h"
#include "DiceTact/Medaillon/DTMedaillonDefinition.h"
#include "DiceTact/Physics/PhysicalReactionComponent.h"
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"

namespace
{
	constexpr float AbilityJumpGroundTraceDistance = 1000.f;
	constexpr float AbilityJumpCheckInterval = 0.03f;
	constexpr float AbilityJumpCollisionSweepInset = 2.f;
}

// Sets default values
ADTHeroCharacter::ADTHeroCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
 
	MovementAttributeSet = CreateDefaultSubobject<UDTPartyMovementAttributes>(TEXT("MovementAttributeSet"));

	Cam = FindComponentByClass<UCameraComponent>();
	PhysicalReaction = CreateDefaultSubobject<UPhysicalReactionComponent>(TEXT("PhysicalReaction"));
}

UAbilitySystemComponent* ADTHeroCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


/*
bool AHeroCharacter::IsPartyUnit_Implementation() const
{
	return true;
}

UAbilitySystemComponent* AHeroCharacter::GetPartyAbilitySystemComponent_Implementation() const
{
	return GetAbilitySystemComponent();
}

void AHeroCharacter::TakeControlOfUnit_Implementation()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
 
	GrantDefaultAbilities();
	ResetMovementBudgetForNewTurn();
}

void AHeroCharacter::LeaveControlOfUnit_Implementation()
{
	SetAiming(false);
}
*/

UAbilitySystemComponent* ADTHeroCharacter::GetDiceCasterAbilitySystemComponent_Implementation() const
{
	return GetAbilitySystemComponent();
}

void ADTHeroCharacter::OnCastedAbilityFinished_Implementation()
{
	
}


//to change
int ADTHeroCharacter::AmountOfAvailibleMana_Implementation()
{
	return 0;
}

bool ADTHeroCharacter::TryThrowDice_Implementation(UDTDiceItemInstance* DiceItemInstance)
{
	if (Execute_CanCastSpell(this) == false)
	{
		return false;
	}
	
	FGameplayAbilitySpec* GASpec = AbilitySystemComponent->FindAbilitySpecFromHandle(ThrowSpecHandle);

	if (GASpec == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("GA Spec is invalid! Couldn't throw dice", this);	
		return false;
	}

	UDTDiceThrowAbility* ThrowAbility = Cast<UDTDiceThrowAbility>(GASpec->GetPrimaryInstance());
	ThrowAbility->SetDiceItemInstance(DiceItemInstance);
	
	if (AbilitySystemComponent->TryActivateAbility(ThrowSpecHandle))
	{
		++DiceAmountThrown;
		return true;
	}
	return false;
}

int ADTHeroCharacter::GetAmountOfThrownDice_Implementation() const
{
	return DiceAmountThrown;
}

int32 ADTHeroCharacter::GetMaxThrowDice_Implementation() const
{
	return MaxThrows;
}

void ADTHeroCharacter::TryMoveToMouse()
{
	if (CanTravel() == false)
	{
		return;
	}
	
	AbilitySystemComponent->TryActivateAbility(MoveHandle);
	//Probably bad implementation, should check if Movement Budget is exhausted instead
	//fine for now cuz can only move once per turn
}

// Called when the game starts or when spawned
void ADTHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	Cam = FindComponentByClass<UCameraComponent>();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	GrantDefaultAbilities();
	GrantDefaultMedaillonAbilities();

	DefaultMeshRelativeLocation = GetMesh()->GetRelativeLocation();
	DefaultMeshRelativeRotation = GetMesh()->GetRelativeRotation();

	PhysicalReaction->OnImpactReceived.AddDynamic(this, &ADTHeroCharacter::HandleImpactReceived);
}

// Stop callbacks before restoring movement during world teardown
void ADTHeroCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	AbilityJumpCompletion.Clear();
	CancelAbilityJump();
	Super::EndPlay(EndPlayReason);
}

// Keep normal ragdoll recovery from interrupting a controlled jump
void ADTHeroCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (bRagdolling && !bAbilityJumpPhysicsActive)
	{
		TickRagdoll(DeltaSeconds);
	}
}

bool ADTHeroCharacter::PushTowardBlackHole_Implementation(const FPushData& PushData)
{
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);
	
	BeginRagdoll(PushData.Direction * PushData.Strength, Torque * CollisionData->Torque);
	return true;
}

bool ADTHeroCharacter::PushToward_Implementation(const FPushData& PushData)
{
	if (PushData.Instigator->GetClass() == GetClass())
	{
		return false;
	}
	FVector DirectionBetween = (GetActorLocation() - PushData.Instigator->GetActorLocation()).GetSafeNormal();
	
	FVector PushVelocity = PushData.Direction * PushData.Strength;
	
	float PusherVelocity = FVector::DotProduct(PushVelocity, DirectionBetween);
	PusherVelocity = FMath::Max(PusherVelocity, 0.f); 
	float Intensity = FMath::Clamp(PusherVelocity / CollisionData->MaxSpeed, 0.f, 1.f);
	float ImpulseStrength = FMath::Lerp(CollisionData->MinDiceImpulseSpeed, CollisionData->MaxDiceImpulseSpeed, Intensity);

	FVector LaunchVelocity = PushData.Direction * ImpulseStrength;
	LaunchVelocity.Z += CollisionData->UpwardImpulseStrength;
	
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);
	BeginRagdoll(LaunchVelocity, Torque * CollisionData->Torque);
	return true;
}

void ADTHeroCharacter::BeginRagdoll(FVector LaunchVelocity, FVector Torque)
{
	UCapsuleComponent* Capsule = GetCapsuleComponent();

	bRagdolling = true;
	RagdollTimer = 0.f;

	GetCharacterMovement()->SetMovementMode(MOVE_None);
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->DisableMovement();
	
	//Capsule->SetCollisionProfileName(TEXT("Ragdoll"));
	Capsule->SetSimulatePhysics(true);
	Capsule->WakeAllRigidBodies();

	Capsule->SetAllPhysicsLinearVelocity(LaunchVelocity);
	Capsule->SetAllPhysicsAngularVelocityInDegrees(Torque);
}

void ADTHeroCharacter::TickRagdoll(float DeltaTime)
{
	RagdollTimer += DeltaTime;

	float CurrentSpeed = GetMesh()->GetPhysicsLinearVelocity().Size();

	if (RagdollTimer >= CollisionData->RagdollMinDuration && CurrentSpeed <= CollisionData->RagdollSettleSpeedThreshold)
	{
		EndRagdoll();
	}
}

void ADTHeroCharacter::EndRagdoll()
{
	UJUEDevelopmentStatics::ReportDebugMessage("end ragdoll");
	UCapsuleComponent* Capsule = GetCapsuleComponent();

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

// Ability jumps: shared movement for Smash and other abilities.
// Find walkable ground below the target and calculate an arc for the capsule center
bool ADTHeroCharacter::PrepareAbilityJump(FVector TargetLocation, float ArcParam, AActor* IgnoredActor,
	FVector& OutLaunchVelocity, FVector& OutGroundLocation) const
{
	if (bAbilityJumpActive || bRagdolling)
	{
		return false;
	}

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(IgnoredActor);
	
	const FVector TraceEnd = TargetLocation - FVector::UpVector * AbilityJumpGroundTraceDistance;

	FHitResult GroundHit;
	
	const bool bFoundGround = GetWorld()->LineTraceSingleByChannel(GroundHit, TargetLocation, TraceEnd, ECC_Visibility, QueryParams);
	
	if (!bFoundGround || !GetCharacterMovement()->IsWalkable(GroundHit))
	{
		return false;
	}

	OutGroundLocation = GroundHit.ImpactPoint;
	
	const FVector CapsuleDestination = OutGroundLocation + FVector::UpVector * GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	
	const bool bArcCalculated = UGameplayStatics::SuggestProjectileVelocity_CustomArc(this, OutLaunchVelocity,
		GetActorLocation(), CapsuleDestination, 0.f, FMath::Clamp(ArcParam, 0.05f, 0.95f));

	return bArcCalculated && !OutLaunchVelocity.ContainsNaN();
}

// Keep the landing timer on the hero so any ability can use the same jump lifecycle
bool ADTHeroCharacter::BeginAbilityJump(FVector LaunchVelocity, float MaxDuration, float CollisionLookAheadTime,
	AActor* IgnoredActor, FOnAbilityJumpFinished Completion)
{
	if (bAbilityJumpActive || bRagdolling || !IsValid(CollisionData) || IsActorBeingDestroyed())
	{
		return false;
	}

	bAbilityJumpActive = true;
	bAbilityJumpCancelRequested = false;
	AbilityJumpCompletion = MoveTemp(Completion);
	AbilityJumpIgnoredActor = IgnoredActor;
	AbilityJumpMaxDuration = FMath::Max(0.1f, MaxDuration);
	AbilityJumpCollisionLookAheadTime = CollisionLookAheadTime;

	// Remove damping so the physics jump follows the calculated arc
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	AbilityJumpPreviousLinearDamping = Capsule->GetLinearDamping();
	Capsule->SetLinearDamping(0.f);
	bAbilityJumpPhysicsActive = true;

	// Start the jump using the arc we calculated in PrepareAbilityJump
	bStartingAbilityJump = true;
	BeginRagdoll(LaunchVelocity, FVector::ZeroVector);
	bStartingAbilityJump = false;

	// Checks if something happened to prompt a jump cancel
	if (bAbilityJumpCancelRequested)
	{
		CancelAbilityJump();
		return false;
	}
    //delegate that checks when hero lands call OnAbilityJumpLanded
	LandedDelegate.AddUniqueDynamic(this, &ADTHeroCharacter::OnAbilityJumpLanded);
	AbilityJumpStartTime = GetWorld()->GetTimeSeconds();
	
	//Call check ability in set timer to check once every 0.03 seconds
	GetWorld()->GetTimerManager().SetTimer(AbilityJumpTimerHandle, this,
		&ADTHeroCharacter::CheckAbilityJump, AbilityJumpCheckInterval, true);
	return true;
}

// Recover before physics contact, then keep waiting for character movement to land
void ADTHeroCharacter::CheckAbilityJump()
{
	if (!bAbilityJumpActive)
	{
		return;
	}

	const float JumpDuration = GetWorld()->GetTimeSeconds() - AbilityJumpStartTime;
	
	if (JumpDuration >= AbilityJumpMaxDuration)
	{
		UE_LOG(LogTemp, Warning, TEXT("Ability jump cancelled because the hero did not land in time"));
		CancelAbilityJump();
		return;
	}

	// Recovery does not finish the jump, Landed or the timeout does
	if (!bRagdolling)
	{
		return;
	}

	// Predict the players movement so we can stop the ragdoll before collision
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	const float LookAheadTime = FMath::Max(AbilityJumpCollisionLookAheadTime,GetWorld()->GetDeltaSeconds() + AbilityJumpCheckInterval);
	const FVector Start = Capsule->GetComponentLocation();
	const FVector PredictedMovement = Capsule->GetPhysicsLinearVelocity() * LookAheadTime + FVector(0.f, 0.f, 0.5f * GetWorld()->GetGravityZ() * FMath::Square(LookAheadTime));

	FCollisionQueryParams QueryParams;
	FCollisionResponseParams ResponseParams;
	Capsule->InitSweepCollisionParams(QueryParams, ResponseParams);
	QueryParams.AddIgnoredActor(this);
	QueryParams.AddIgnoredActor(AbilityJumpIgnoredActor.Get());

	// Shrink slightly so the launch floor does not count as an incoming collision
	FHitResult IncomingHit;
	
	const bool bHitSurface = GetWorld()->SweepSingleByChannel(IncomingHit, Start, Start + PredictedMovement,
		Capsule->GetComponentQuat(), Capsule->GetCollisionObjectType(),
		Capsule->GetCollisionShape(-AbilityJumpCollisionSweepInset), QueryParams, ResponseParams);
	
	if (bHitSurface && FVector::DotProduct(PredictedMovement, IncomingHit.ImpactNormal) < 0.f)
	{
		RecoverAbilityJump();
	}
}

// A cancelled jump restores the hero without reporting a successful impact
void ADTHeroCharacter::CancelAbilityJump()
{
	if (bStartingAbilityJump)
	{
		bAbilityJumpCancelRequested = true;
		return;
	}

	FinishAbilityJump(FHitResult(), true);
}

void ADTHeroCharacter::CalculateImpactIntensity(const FPhysicalImpactInfo& Info, float& Intensity)
{
	Intensity = FMath::Clamp(Info.ImpactSpeed / FMath::Max(CollisionData->MaxSpeed, KINDA_SMALL_NUMBER) * CollisionData->GetMassMultiplier(Info.OtherMass),0.f, 1.f);
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
}

void ADTHeroCharacter::HandleImpactReceived(UPhysicalReactionComponent* Comp, const FPhysicalImpactInfo& Info)
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

	float Intensity;
	CalculateImpactIntensity(Info, Intensity);

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

void ADTHeroCharacter::ApplyImpulse_Implementation(const FPushData& Info)
{
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);
	
	BeginRagdoll(Info.Direction * Info.Strength, Torque * CollisionData->Torque);
}

// Use the engine landing result only after capsule physics has ended
void ADTHeroCharacter::OnAbilityJumpLanded(const FHitResult& Hit)
{
	if (bRagdolling || GetCapsuleComponent()->IsSimulatingPhysics())
	{
		return;
	}

	FinishAbilityJump(Hit, false);
}

// Clear ownership first so the completion callback can end its ability safely
void ADTHeroCharacter::FinishAbilityJump(const FHitResult& Hit, bool bCancelled)
{
	if (!bAbilityJumpActive)
	{
		return;
	}

	bAbilityJumpActive = false;
	bAbilityJumpCancelRequested = false;
	
	LandedDelegate.RemoveDynamic(this, &ADTHeroCharacter::OnAbilityJumpLanded);
	
	GetWorld()->GetTimerManager().ClearTimer(AbilityJumpTimerHandle);

	const FOnAbilityJumpFinished Completion = AbilityJumpCompletion;
	
	AbilityJumpCompletion.Clear();
	AbilityJumpIgnoredActor.Reset();
	RecoverAbilityJump();
	
	Completion.Broadcast(Hit, bCancelled);
}

// Restore damping, EndRagdoll and keep the remaining velocity when leaving capsule physics
void ADTHeroCharacter::RecoverAbilityJump()
{
	if (!bAbilityJumpPhysicsActive)
	{
		return;
	}

	bAbilityJumpPhysicsActive = false;
	UCapsuleComponent* Capsule = GetCapsuleComponent();

	Capsule->SetLinearDamping(AbilityJumpPreviousLinearDamping);
	
	if (bRagdolling)
	{
		const FVector RemainingVelocity = Capsule->GetPhysicsLinearVelocity();
		EndRagdoll();
		GetCharacterMovement()->Velocity = RemainingVelocity;
	}
}

// End of ability jump movement.

/*
bool AHeroCharacter::NoMoreDiceLeft()
{
	return DiceAmountThrown >= MaxThrows;
}
*/

void ADTHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	ResetMovementBudget();
}

void ADTHeroCharacter::ResetMovementBudget()
{
	MovementAttributeSet->SetMaxMovementBudget(HeroDefinition->GetHeroBaseMovementBudget());
	MovementAttributeSet->SetMovementBudget(HeroDefinition->GetHeroBaseMovementBudget());
}

void ADTHeroCharacter::ResetTurn()
{
	ResetMovementBudget();
	DiceAmountThrown = 0;
	bUsedPower = false;
}

void ADTHeroCharacter::GrantDefaultAbilities()
{
	MoveHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(DefaultMoveAbility, 1, INDEX_NONE, this));
	
	ThrowSpecHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(DefaultThrowAbility, 1, INDEX_NONE, this));
	
	if (TSubclassOf<UDTHeroPowerAbility> PowerAbility = GetHeroPowerAbility())
	{
		HeroPowerHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PowerAbility,1,INDEX_NONE,this));
	}

	AbilitySystemComponent->OnAbilityEnded.AddUObject(this, &ADTHeroCharacter::OnGameplayAbilityEnded);
}

void ADTHeroCharacter::GrantDefaultMedaillonAbilities()
{
	if (!IsValid(HeroDefinition))
	{
		return;
	}

	if (UDTMedaillonDefinition* Medaillon =
		HeroDefinition->GetMedaillonAbility())
	{
		Medaillon->GrantAbilityTo(AbilitySystemComponent);
	}

	for (UDTMedaillonDefinition* Medaillon : DebugMedaillon)
	{
		if (IsValid(Medaillon))
		{
			Medaillon->GrantAbilityTo(AbilitySystemComponent);
		}
	}
}

// Called to bind functionality to input
void ADTHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

UDTPartyMovementAttributes* ADTHeroCharacter::GetMovementAttributeSet() const
{
	return MovementAttributeSet;
}

TSubclassOf<UGameplayAbility> ADTHeroCharacter::GetDefaultMoveAbility() const
{
	return DefaultMoveAbility;
}

TSubclassOf<UDTHeroPowerAbility> ADTHeroCharacter::GetHeroPowerAbility() const
{
	if (UDTHeroPowerDefinition* PowerDef = GetHeroPowerDefinition())
	{
		return PowerDef->GetHeroPower();	
	}
	return nullptr;
}

UDTHeroPowerDefinition* ADTHeroCharacter::GetHeroPowerDefinition() const
{
	if (IsNetStartupActor() && DebugHeroPowerDefinition)
	{
		return DebugHeroPowerDefinition;
	}

	if (HeroDefinition)
	{
		return HeroDefinition->GetHeroAbilityDefinition();
	}

	return nullptr;
}

void ADTHeroCharacter::SetAiming(bool bAiming)
{
	if (!Cam)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			15.0f,
			FColor::Yellow,
			FString::Printf(TEXT("no cam ded"))
		);
		return;
	}
	Cam->SetActive(bAiming);
}

bool ADTHeroCharacter::CanReceiveTurn() const
{
	return CanCastSpell() && CanTravel();
}

bool ADTHeroCharacter::CanTravel() const
{
	return MovementAttributeSet->GetMovementBudget() > 0;
}

bool ADTHeroCharacter::CanUsePower() const
{
	return !bUsedPower;
}


const UDTThrowTypeData* ADTHeroCharacter::GetThrowTypeData() const
{
	if (IsNetStartupActor() && DebugThrowTypeData)
	{
		return DebugThrowTypeData;
	}

	if (HeroDefinition)
	{
		return HeroDefinition->GetHeroThrowType();
	}
	return nullptr;
}

bool ADTHeroCharacter::TryActivateHeroPower()
{

	if (CanUsePower() == false)
	{
		return false;
	}
	
	FGameplayAbilitySpec* GASpec = AbilitySystemComponent->FindAbilitySpecFromHandle(HeroPowerHandle);
	ADTCombatPlayerController* PC = Cast<ADTCombatPlayerController>(GetWorld()->GetFirstPlayerController());

	if (GASpec == nullptr || PC == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Hero power needs an ability and a combat player controller", this);
		return false;
	}

	FHitResult CursorHit;
	PC->GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);

	AActor* HoveredActor = CursorHit.GetActor();
	if (HoveredActor == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no hovered actor", this);
		return false;
	}

	const UDTTargetingStrategy* Strategy = GetHeroPowerDefinition()->GetTargetingStrategy();
	if (IsValid(Strategy) && !Strategy->GetPossibleTargets(this).Contains(HoveredActor))
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no good target under cursor", this);
		return false;
	}

	if (AbilitySystemComponent->TryActivateAbility(HeroPowerHandle))
	{
		bUsedPower = true;
		return true;
	}
	return false;
}

