// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyUnit.h"

#include "AbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "Core/Abilities/Enemies/EnemybaseAttack.h"
#include "Core/Dice/ActorDiceCollision.h"
#include "Core/Dice/DiceCollision.h"
#include "Core/Projectiles/BounceComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values
AEnemyUnit::AEnemyUnit()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

// Called when the game starts or when spawned
void AEnemyUnit::BeginPlay()
{
	Super::BeginPlay();

	DefaultMeshRelativeLocation = GetMesh()->GetRelativeLocation();
	DefaultMeshRelativeRotation = GetMesh()->GetRelativeRotation();

	HealthComp = FindComponentByClass<UHealthComponent>();
	
	AttackHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(BaseAttack, 1, INDEX_NONE, this));
}

// Called every frame
void AEnemyUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRagdolling)
	{
		TickRagdoll(DeltaTime);
	}
}

// Called to bind functionality to input
void AEnemyUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

bool AEnemyUnit::PushToward_Implementation(FVector direction, float strength, AActor* pushingActor)
{
	return true;
}

bool AEnemyUnit::PushTowardWithAdditionalZVelocity_Implementation(FVector direction, float strength,float additionalZVelocity, AActor* pushingActor)
{
	FVector DirectionBetween = (GetActorLocation() - pushingActor->GetActorLocation()).GetSafeNormal();
	
	FVector PushVelocity = direction * strength;
	
	float PusherVelocity = FVector::DotProduct(PushVelocity, DirectionBetween);
	PusherVelocity = FMath::Max(PusherVelocity, 0.f); 
	float Intensity = FMath::Clamp(PusherVelocity / CollisionData->MaxSpeed, 0.f, 1.f);
	float ImpulseStrength = FMath::Lerp(CollisionData->MinDiceImpulseSpeed, CollisionData->MaxDiceImpulseSpeed, Intensity);

	FVector LaunchVelocity = direction * ImpulseStrength;
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

	UBounceComponent* Component = NewObject<UBounceComponent>(this);
	AddInstanceComponent(Component);
	Component->RegisterComponent();
	Component->InitializeBounceComponent(BounceData);
	
	BeginRagdoll(LaunchVelocity, Torque * CollisionData->Torque);
	return true;
}

bool AEnemyUnit::PushTowardVelocity_Implementation(FVector direction, AActor* pushingActor)
{
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);

	BeginRagdoll(direction, Torque * CollisionData->Torque);
	return true;
}

FDamageInfo AEnemyUnit::TakeDamage_Implementation(AActor* Dealer, int Damage)
{
	FDamageInfo result = HealthComp->TakeDamage(Dealer, Damage);
	if (result.killedTarget)
	{
		Destroy();
	}
	return IIDamageable::TakeDamage_Implementation(Dealer, Damage);
}

const UDTEnemyDefinition* AEnemyUnit::GetEnemyDefinition() const
{
	return EnemyDefinition;
}

void AEnemyUnit::Attack(AHeroCharacter* heros)
{
	AbilitySystemComponent->TryActivateAbility(AttackHandle);
}

bool AEnemyUnit::CanProcessHit(AActor* OtherDice)
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

void AEnemyUnit::BeginRagdoll(FVector LaunchVelocity, FVector Torque)
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

	Capsule->SetAllPhysicsLinearVelocity(LaunchVelocity);
	Capsule->SetAllPhysicsAngularVelocityInDegrees(Torque);
}

void AEnemyUnit::TickRagdoll(float DeltaTime)
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

void AEnemyUnit::EndRagdoll()
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


