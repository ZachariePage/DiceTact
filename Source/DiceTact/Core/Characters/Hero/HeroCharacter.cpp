// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacter.h"

#include "DTHeroDefinition.h"
#include "Core/Characters/DTPlayerController_Combat.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Core/Abilities/HeroPower/HeroPowerAbility.h"
#include "Core/Abilities/HeroPower/DTHeroPowerDefinition.h"
#include "Core/Abilities/Throws/GA_ThrowDice.h"
#include "Core/Attributes/PartyMovementAttributeSet.h"
#include "Core/Dice/ActorDiceCollision.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values
AHeroCharacter::AHeroCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
 
	MovementAttributeSet = CreateDefaultSubobject<UPartyMovementAttributeSet>(TEXT("MovementAttributeSet"));

	Cam = FindComponentByClass<UCameraComponent>();
}

UAbilitySystemComponent* AHeroCharacter::GetAbilitySystemComponent() const
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

UAbilitySystemComponent* AHeroCharacter::GetDiceCasterAbilitySystemComponent_Implementation() const
{
	return GetAbilitySystemComponent();
}

void AHeroCharacter::OnCastedAbilityFinished_Implementation()
{
	bHasMoved = true;
}


//to change
int AHeroCharacter::AmountOfAvailibleMana_Implementation()
{
	return 0;
}

bool AHeroCharacter::TryThrowDice_Implementation(UDTDiceItemInstance* DiceItemInstance)
{
	// if (IDiceAbilityCaster::TryThrowDice_Implementation(DiceItemInstance) == false)
	// 	return false;
	
	FGameplayAbilitySpec* GASpec = AbilitySystemComponent->FindAbilitySpecFromHandle(ThrowSpecHandle);

	if (GASpec == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("GA Spec is invalid! Couldn't throw dice", this);	
		return false;
	}

	UGA_ThrowDice* ThrowAbility = Cast<UGA_ThrowDice>(GASpec->GetPrimaryInstance());
	ThrowAbility->SetDiceItemInstance(DiceItemInstance);
	
	AbilitySystemComponent->TryActivateAbility(ThrowSpecHandle);
	++DiceAmountThrown;
	return true;
}

int AHeroCharacter::GetAmountOfThrownDice_Implementation() const
{
	return DiceAmountThrown;
}

int32 AHeroCharacter::GetMaxThrowDice_Implementation() const
{
	return MaxThrows;
}

void AHeroCharacter::MoveToMouse()
{
	if (CanTravel() == false)
	{
		return;
	}
	
	AbilitySystemComponent->TryActivateAbility(MoveHandle);
	bHasMoved = true; //Probably bad implementation, should check if Movement Budget is exhausted instead
	//fine for now cuz can only move once per turn
}

// Called when the game starts or when spawned
void AHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	Cam = FindComponentByClass<UCameraComponent>();

	if (IsValid(AbilitySystemComponent) == false)
	{
		return;
	}
	
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
	GrantDefaultAbilities();

	DefaultMeshRelativeLocation = GetMesh()->GetRelativeLocation();
	DefaultMeshRelativeRotation = GetMesh()->GetRelativeRotation();
}

void AHeroCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (bRagdolling)
	{
		TickRagdoll(DeltaSeconds);
	}
}

void AHeroCharacter::PushBackHero(FVector direction)
{
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);
	
	BeginRagdoll(direction, Torque * CollisionData->Torque);
}

void AHeroCharacter::BeginRagdoll(FVector LaunchVelocity, FVector Torque)
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

void AHeroCharacter::TickRagdoll(float DeltaTime)
{
	RagdollTimer += DeltaTime;

	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (!Capsule) return;

	float CurrentSpeed = GetMesh()->GetPhysicsLinearVelocity().Size();

	if (RagdollTimer >= CollisionData->RagdollMinDuration && CurrentSpeed <= CollisionData->RagdollSettleSpeedThreshold)
	{
		EndRagdoll();
	}
}

void AHeroCharacter::EndRagdoll()
{
	UJUEDevelopmentStatics::ReportDebugMessage("end ragdoll");
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

void AHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	
	ResetMovementBudgetForNewTurn();
}

void AHeroCharacter::ResetMovementBudgetForNewTurn()
{
	if (MovementAttributeSet)
	{
		MovementAttributeSet->SetMaxMovementBudget(MaxMovementBudget);
		MovementAttributeSet->SetMovementBudget(MaxMovementBudget);
	}
	bHasMoved = false;
}

void AHeroCharacter::ResetTurn()
{
	ResetMovementBudgetForNewTurn();
	DiceAmountThrown = 0;
}

void AHeroCharacter::GrantDefaultAbilities()
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	MoveHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(DefaultMoveAbility, 1, INDEX_NONE, this));
	
	ThrowSpecHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(DefaultThrowAbility, 1, INDEX_NONE, this));
	
	if (TSubclassOf<UHeroPowerAbility> PowerAbility = GetHeroPowerAbility())
	{
		HeroPowerHandle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PowerAbility,1,INDEX_NONE,this));
	}

	AbilitySystemComponent->OnAbilityEnded.AddUObject(this, &AHeroCharacter::OnGameplayAbilityEnded);
}

// Called to bind functionality to input
void AHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

UPartyMovementAttributeSet* AHeroCharacter::GetMovementAttributeSet() const
{
	return MovementAttributeSet;
}

TSubclassOf<UGameplayAbility> AHeroCharacter::GetDefaultMoveAbility() const
{
	return DefaultMoveAbility;
}

TSubclassOf<UHeroPowerAbility> AHeroCharacter::GetHeroPowerAbility() const
{
	if (UDTHeroPowerDefinition* PowerDef = GetHeroPowerDefinition())
	{
		return PowerDef->GetHeroPower();	
	}
	return nullptr;
}

UDTHeroPowerDefinition* AHeroCharacter::GetHeroPowerDefinition() const
{
	if (IsNetStartupActor())
	{
		if (DebugHeroPowerDefinition)
		{
			return DebugHeroPowerDefinition;
		}
	}

	if (HeroDefinition)
	{
		return HeroDefinition->GetHeroAbilityDefinition();
	}

	return nullptr;
}

void AHeroCharacter::SetAiming(bool bAiming)
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

bool AHeroCharacter::CanReceiveTurn() const
{
	return CanCastSpell() && bHasMoved == false;
}

//Should be based on exhaustion of Movement
bool AHeroCharacter::CanTravel() const
{
	return !bHasMoved;
}


const UThrowType* AHeroCharacter::GetThrowTypeData() const
{
	if (IsNetStartupActor())
	{
		if (DebugThrowTypeData)
		{
			return DebugThrowTypeData;
		}
	}

	if (HeroDefinition)
	{
		if (HeroDefinition->GetHeroThrowType())
		{
			return HeroDefinition->GetHeroThrowType();
		}
	}
	return nullptr;
}

bool AHeroCharacter::TryThrowAbility()
{
	FGameplayAbilitySpec* GASpec = AbilitySystemComponent->FindAbilitySpecFromHandle(HeroPowerHandle);

	if (GASpec == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no ga", this);
		return false;
	}
		
	ADTPlayerController_Combat* PC = Cast<ADTPlayerController_Combat>(GetWorld()->GetFirstPlayerController());
	if (PC == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no pc", this);
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
		
	if (DebugHeroPowerDefinition == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no hero power def", this);
		return false;
	}

	UDTTargetingStrategy* Strategy = DebugHeroPowerDefinition->GetTargetingStrategy();
	if (Strategy == nullptr)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no target strat", this);
		return false;
	}

	const TArray<AActor*> PossibleTargets = Strategy->GetPossibleTargets(this);
	

	if (!PossibleTargets.Contains(HoveredActor))
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no good target under cursor", this);
		return false;
	}

	AbilitySystemComponent->TryActivateAbility(HeroPowerHandle);
	return true;
}

