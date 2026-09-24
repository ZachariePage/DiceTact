// Fill out your copyright notice in the Description page of Project Settings.


#include "Dice.h"
#include "../Characters/DiceCamera.h"
#include "AbilitySystemComponent.h"
//#include "Core/Characters/DiceTactPlayerController.h"
#include "Core/System/DTGameState_Combat.h"
#include "Core/Abilities/ResolveAbilities/ResolveGameplayAbility.h"
#include "Core/Abilities/Throws/ThrowType.h"
#include "Core/Dice/DiceCollision.h"
#include "Core/Dice/Definitions/DTDiceResolveDefinition.h"
#include "Core/subsystem/ActorFactorySubSystem.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
ADice::ADice()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	DiceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DiceMesh"));
	
	DiceMesh->SetSimulatePhysics(true);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
}

// Called when the game starts or when spawned
void ADice::BeginPlay()
{
	Super::BeginPlay();

	GetComponents<UDicePointCalculation>(DiceFaces);
	numberOfSide = DiceFaces.Num();

	if (DiceReadingDirection == EDiceReadingDirection::Top)
	{
		ReadingDirection = FVector::UpVector;
	}
	else
	{
		ReadingDirection = FVector::DownVector;
	}
	
	// AbilityHandle = AbilitySystemComponent->GiveAbility(ResolveAbility);
	// ADTGameState_Combat* GS = Cast<ADTGameState_Combat>(GetWorld()->GetGameState());
	// FPendingAbility newPendingAbility;
	// newPendingAbility.Caster = nullptr;
	// newPendingAbility.AbilityHandle = AbilityHandle;
	// newPendingAbility.DiceActor = this;
	// GS->PendingAbilities.Add(newPendingAbility);
	AbilitySystemComponent->SetAvatarActor(GetInstigator());
	
	DiceMesh->OnComponentHit.AddDynamic(
		this,
		&ADice::OnHit
	);
}


// Called every frame
void ADice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsImmobile())
	{
		lastSettledTimer = GetWorld()->GetTimeSeconds();

		if (!HasSettled())
		{
			SetSettled(true);
		}
	}

	if (DiceMesh)
	{
		CachedVelocity = DiceMesh->GetPhysicsLinearVelocity();
	}
}

void ADice::InitializeDice(const UDTDiceElementDefinition* ElementDefinition, const UDTDiceResolveDefinition* _ResolveDefinition)
{
	if (_ResolveDefinition)
	{
		ResolveDefinition = _ResolveDefinition; 
	}

	if (ElementDefinition)
	{
		//Give the ref to ElementComponent
	}
}

void ADice::InitializeDiceCamera()
{
	if (DiceCameraToSpawn)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		DiceCamera = GetWorld()->SpawnActor<ADiceCamera>(
			DiceCameraToSpawn,
			GetActorLocation(),
			GetActorRotation(),
			SpawnParams
		);

		DiceCamera->SetDice(this);
	}
}

void ADice::ThrowDice(FVector Direction, const UThrowType* data, float additionalStrength)
{
	if (!DiceMesh->IsSimulatingPhysics())
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no physc");
	}
	if (!DiceMesh->RigidBodyIsAwake())
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no rb");
	}
	ThrowData = data;
	if (!ThrowData)
	{
		if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("NO DATA ON DICE SILENT FAIL!"));    
		return;
	}

	Direction.Normalize();

	const FVector Impulse = Direction * (data->Speed + additionalStrength);

	DiceMesh->AddImpulse(
	   Impulse,
	   NAME_None,
	   true
	);

	FVector Torque(
	   FMath::RandRange(-data->RandomTorqueX, data->RandomTorqueX),
	   FMath::RandRange(-data->RandomTorqueY, data->RandomTorqueY),
	   FMath::RandRange(-data->RandomTorqueZ, data->RandomTorqueZ)
	);

	DiceMesh->AddTorqueInRadians(
	   Torque * data->Torque,
	   NAME_None,
	   true
	);
}

void ADice::ResolveDice()
{
	if (IsValid(ResolveDefinition) == false)
	{
		return;
	}
		
	AbilitySystemComponent->AbilityEndedCallbacks.AddUObject(this, &ADice::OnResolveFinished);
	FGameplayAbilitySpec ResolveAbility = AbilitySystemComponent->BuildAbilitySpecFromClass(ResolveDefinition->GetResolveAbility(), CalculateDiceSide());
	//AbilitySystemComponent->GiveAbilityAndActivateOnce(ResolveAbility);
	
	FGameplayAbilitySpecHandle Handle =
	AbilitySystemComponent->GiveAbility(ResolveAbility);

	if (!Handle.IsValid())
	{
		UJUEDevelopmentStatics::ReportDebugMessage("Failed to give resolve ability");
		return;
	}

	UJUEDevelopmentStatics::ReportDebugMessage("Resolve ability given");

	if (!AbilitySystemComponent->TryActivateAbility(Handle))
	{
		UJUEDevelopmentStatics::ReportDebugMessage("Resolve ability was given but activation failed");
	}
}

int ADice::CalculateDiceSide() const
{
	UDicePointCalculation* TopFace = nullptr;
	float HighestDot = -1.0f;

	for (UDicePointCalculation* Face : DiceFaces)
	{
		if (!Face) continue;

		const float Dot = FVector::DotProduct(Face->GetForwardVector(),ReadingDirection);

		if (Dot > HighestDot)
		{
			HighestDot = Dot;
			TopFace = Face;
		}
	}

	if (!IsValid(TopFace))
	{
		return 0;
	}
	return TopFace->sideValue;
}

int ADice::GetNumberOfSide() const
{
	return numberOfSide;
}

void ADice::DisablePhysic()
{
	if (ProjectileMovement)
	{
		ProjectileMovement->StopMovementImmediately();
		ProjectileMovement->Deactivate();
	}

	if (DiceMesh)
	{
		DiceMesh->SetSimulatePhysics(false);
	}
}

void ADice::EnablePhysic(FVector InitialVelocity)
{
	if (DiceMesh)
	{
		DiceMesh->SetSimulatePhysics(true);
		if (!InitialVelocity.IsNearlyZero())
		{
			DiceMesh->SetPhysicsLinearVelocity(InitialVelocity);
		}
	}

	if (ProjectileMovement)
	{
		ProjectileMovement->Activate();
		ProjectileMovement->Velocity = InitialVelocity;
	}
}

bool ADice::IsImmobile() const
{
	return DiceMesh->GetPhysicsLinearVelocity().Length() <= 0.5f;
}

bool ADice::HasSettled() const
{
	return bSettled;
}

void ADice::SetSettled(bool _bSettled)
{
	if (_bSettled == HasSettled())
	{
		return;
	}

	if (_bSettled)
	{
		OnDiceSettled();
		OnDiceSettle.Broadcast();
		if (!bSentAbility)
		{
			if (ADTGameState_Combat* GameState = GetWorld()->GetGameState<ADTGameState_Combat>())
			{
				GameState->AddDiceToResolve(this);
				bSentAbility = true;
			}
		}
	}

	bSettled = _bSettled;
}

ADiceCamera* ADice::GetDiceCamera() const
{
	return DiceCamera;
}

UPrimitiveComponent* ADice::GetDicePhysicalComponent() const
{
	return DiceMesh;
}

void ADice::OnDiceHit(ADice* OtherDice, const FHitResult& Hit)
{
    bool otherDiceIsDivisible = false;
    int divisionAmount = 0;

    if (OtherDice->GetNumberOfSide() % numberOfSide == 0 &&
       !OtherDice->bDivisionPending &&
       OtherDice->GetNumberOfSide() != GetNumberOfSide())
    {
       otherDiceIsDivisible = true;
       divisionAmount = OtherDice->GetNumberOfSide() / numberOfSide;
       OtherDice->bDivisionPending = true;
    }

    if (otherDiceIsDivisible && divisionAmount > 0)
    {
    	FVector HitDiceVelocity = DiceMesh->GetPhysicsLinearVelocity();
    	if (DiceCollisionData->UsePreviousFrameVelocity)
    	{
    		HitDiceVelocity = CachedVelocity;
    	}
       
    	
		FVector SpreadAxis = FVector::CrossProduct(HitDiceVelocity.GetSafeNormal(), FVector::UpVector);
		if (SpreadAxis.IsNearlyZero())
		{
		   SpreadAxis = FVector::RightVector;
		}
		SpreadAxis.Normalize();

	       for (int i = 0; i < divisionAmount; ++i)
	       {
	          UActorFactorySubSystem* ActorFactorySubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UActorFactorySubSystem>();

	          FActorSpawnParameters SpawnParameters;
	          SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	          SpawnParameters.Owner = GetInstigator();
	          SpawnParameters.Instigator = GetInstigator();

       		  int sign = 1;
	          if (i % 2 != 0)
	          {
		          sign = -1;
	          }
	       		const float SideOffsetDistance = DiceCollisionData->SideOffsetDistance + (i / 2) * DiceCollisionData->SpacingBetweenDice;

	       		const FVector SideOffset = SpreadAxis * SideOffsetDistance;
       		
	          const FTransform SpawnTransform = UKismetMathLibrary::Conv_VectorToTransform(
	             OtherDice->GetActorLocation() + (SideOffset * sign));
       		
	          ADice* SpawnedDice = ActorFactorySubsystem->SpawnDiceFromType(
	             GetWorld(),
	             EDiceType::four,
	             ResolveDefinition,
	             SpawnTransform,
	             SpawnParameters,
	             false
	          );

	          if (SpawnedDice)
	          {
	             if (SpawnedDice->DiceMesh)
	             {
	             	FVector SpawnVelocity = HitDiceVelocity;
	             	SpawnVelocity.Z += DiceCollisionData->AdditionalUpwardImpulse;
	             	SpawnedDice->DiceMesh->SetPhysicsLinearVelocity(SpawnVelocity);
             		FVector Torque(
					DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueX, DiceCollisionData->RandomTorqueX),
					DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueY, DiceCollisionData->RandomTorqueY),
					DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueZ, DiceCollisionData->RandomTorqueZ)
					);
             		SpawnedDice->DiceMesh->AddTorqueInRadians(Torque * DiceCollisionData->Torque, NAME_None, true);
	             }
	          	CanProcessHit(SpawnedDice);
	          }
	          else
	          {
	             UJUEDevelopmentStatics::ReportDebugMessage("failed to spawn dice");
	          }
	       }

	       OtherDice->DestroyDice();
	    }
	    else
	    {
	       FVector RelativeVelocity = DiceMesh->GetPhysicsLinearVelocity() - OtherDice->DiceMesh->GetPhysicsLinearVelocity();
	       float ClosingSpeed = FVector::DotProduct(RelativeVelocity, Hit.ImpactNormal);

	       ApplyImpulseToDice(OtherDice, Hit, ClosingSpeed);
	    }
}

void ADice::ApplyImpulseToDice(ADice* OtherDice, const FHitResult& Hit, float ClosingSpeed)
{
    if (this > OtherDice) return;
    if (!CanProcessHit(OtherDice)) return;

    float Intensity = FMath::Clamp(ClosingSpeed / DiceCollisionData->MaxSpeed, 0.f, 1.f);
    float ImpulseStrength = FMath::Lerp(DiceCollisionData->MinDiceImpulseSpeed, DiceCollisionData->MaxDiceImpulseSpeed, Intensity);
	
    FVector DeltaXY = OtherDice->GetActorLocation() - GetActorLocation();
    DeltaXY.Z = 0.f;
    FVector PushDir = DeltaXY.GetSafeNormal();
    if (PushDir.IsNearlyZero())
    {
        PushDir = FVector::ForwardVector; 
    }
	
    FVector MyVelXY = DiceMesh->GetPhysicsLinearVelocity();
    FVector OtherVelXY = OtherDice->DiceMesh->GetPhysicsLinearVelocity();
    MyVelXY.Z = 0.f;
    OtherVelXY.Z = 0.f;

    float MySpeedAlongPush = FVector::DotProduct(MyVelXY,    PushDir);
    float OtherSpeedAlongPush = FVector::DotProduct(OtherVelXY, -PushDir); 

    float MaxAllowedSpeed = FMath::Max(FMath::Abs(MySpeedAlongPush) + FMath::Abs(OtherSpeedAlongPush), KINDA_SMALL_NUMBER);
    float MyShare = FMath::Abs(MySpeedAlongPush) / MaxAllowedSpeed;
    float OtherShare = FMath::Abs(OtherSpeedAlongPush) / MaxAllowedSpeed;

    OtherDice->DiceMesh->AddImpulse( PushDir * ImpulseStrength * MyShare, NAME_None, true);
    DiceMesh->AddImpulse(-PushDir * ImpulseStrength * OtherShare, NAME_None, true);

	float myShareUp = FMath::Min(0.5, MyShare);
	float otherShareUP = FMath::Min(0.5, OtherShare);
    OtherDice->DiceMesh->AddImpulse(FVector::UpVector * DiceCollisionData->UpwardImpulseStrength * myShareUp,    NAME_None, true);
    DiceMesh->AddImpulse(FVector::UpVector * DiceCollisionData->UpwardImpulseStrength * otherShareUP, NAME_None, true);

	FVector Torque(
	DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueX, DiceCollisionData->RandomTorqueX),
	DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueY, DiceCollisionData->RandomTorqueY),
	DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueZ, DiceCollisionData->RandomTorqueZ)
	);

    OtherDice->DiceMesh->AddTorqueInRadians(Torque * DiceCollisionData->Torque, NAME_None, true);

	FVector SelfTorque(
	DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueX, DiceCollisionData->RandomTorqueX),
	DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueY, DiceCollisionData->RandomTorqueY),
	DiceCollisionData->RandomSignedRange(DiceCollisionData->MinimumRandomTorqueZ, DiceCollisionData->RandomTorqueZ)
	);
    DiceMesh->AddTorqueInRadians(SelfTorque * DiceCollisionData->Torque, NAME_None, true);
}

void ADice::OnCollisionWithDice(ADice* otherDice)
{
	
}

bool ADice::CanProcessHit(ADice* OtherDice)
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
	OtherDice->RecentHitTimestamps.Add(this, Now);
	return true;
}

void ADice::SetPlayerUnit(AHeroCharacter* playerUnit)
{
	CasterUnit = playerUnit;
}

void ADice::DestroyDice()
{
	if (GetWorldTimerManager().IsTimerActive(CleanupTimerHandle))
	{
		return;
	}
	DiceMesh->SetSimulatePhysics(false);
	DiceMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	DiceMesh->SetVisibility(false);

	if (ADTGameState_Combat* GameState = GetWorld()->GetGameState<ADTGameState_Combat>())
	{
		GameState->RemoveDiceToResolve(this);
		bSentAbility = true;
	}

	OnBeforeDiceDestroyed();

	//@TODO: Implement dice camera in blueprint
	GetWorldTimerManager().SetTimer(
		CleanupTimerHandle,
		this,
		&ADice::FinishDestroy_Internal,
		CameraBlendTime,
		false
	);
	FinishDestroy_Internal();
}

void ADice::OnResolveFinished(UGameplayAbility* Ability)
{
	DestroyDice();
}

void ADice::FinishDestroy_Internal()
{
	if (IsValid(DiceCamera))
	{
		DiceCamera->Destroy();
		DiceCamera = nullptr;
	}

	Destroy();
}

void ADice::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	if (!bFirstCollisionHappened)
	{
		OnFirstCollision.Broadcast();
	}
	bFirstCollisionHappened = true;
}

UStaticMeshComponent* ADice::GetStaticMeshComponent() const
{
	return DiceMesh;
}

UDiceCollision* ADice::GetDiceCollision() const
{
	return DiceCollisionData;
}

