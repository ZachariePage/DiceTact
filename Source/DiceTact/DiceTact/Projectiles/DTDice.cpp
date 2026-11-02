// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDice.h"
#include "../Characters/DTDiceCamera.h"
#include "AbilitySystemComponent.h"
//#include "Core/Characters/DiceTactPlayerController.h"
#include "DTBounceComponent.h"
#include "DiceTact/Abilities/DTPendingAbility.h"
#include "DiceTact/Abilities/ResolveAbilities/DTResolveGameplayAbility.h"
#include "DiceTact/Abilities/Throws/DTThrowTypeData.h"
#include "DiceTact/Dice/DTDiceCollisionData.h"
#include "DiceTact/Dice/Definitions/DTDiceResolveDefinition.h"
#include "DiceTact/subsystem/DTCombatBridgeSubsystem.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "DiceTact/Utilities/DTCombatStatics.h"


// Sets default values
ADTDice::ADTDice()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	DiceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DiceMesh"));
	
	DiceMesh->SetSimulatePhysics(true);

	//ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
}

// Called when the game starts or when spawned
void ADTDice::BeginPlay()
{
	Super::BeginPlay();

	GetComponents<UDTDicePointCalculationComp>(DiceFaces);
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
	// FDTPendingAbility newPendingAbility;
	// newPendingAbility.Caster = nullptr;
	// newPendingAbility.AbilityHandle = AbilityHandle;
	// newPendingAbility.DiceActor = this;
	// GS->PendingAbilities.Add(newPendingAbility);

	if (IsValid(GetInstigator()))
	{
		AbilitySystemComponent->SetAvatarActor(GetInstigator());
	}
	else
	{
		AbilitySystemComponent->SetAvatarActor(this);
	}
	
	DiceMesh->OnComponentHit.AddDynamic(
		this,
		&ADTDice::OnHit
	);

	if (BounceData)
	{
		UDTBounceComponent* Component = NewObject<UDTBounceComponent>(this);
		AddInstanceComponent(Component);
		Component->RegisterComponent();
		Component->InitializeBounceComponent(BounceData);
	}
}


// Called every frame
void ADTDice::Tick(float DeltaTime)
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

void ADTDice::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (!bDiceRemoved)
	{
		bDiceRemoved = true;
		OnDiceRemoved.Broadcast();
	}

	Super::EndPlay(EndPlayReason);
}

void ADTDice::InitializeDice(const UDTDiceElementDefinition* ElementDefinition, const UDTDiceResolveDefinition* _ResolveDefinition)
{
	if (_ResolveDefinition)
	{
		ResolveDefinition = _ResolveDefinition; 
	}

	if (ElementDefinition)
	{
		//Give the ref to ElementComponent
	}

	OnInitializationFinished();
}

void ADTDice::InitializeDiceCamera()
{
	if (DiceCameraToSpawn)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		DiceCamera = GetWorld()->SpawnActor<ADTDiceCamera>(
			DiceCameraToSpawn,
			GetActorLocation(),
			GetActorRotation(),
			SpawnParams
		);

		DiceCamera->SetDice(this);
	}
}

void ADTDice::ThrowDice(FVector Direction, const UDTThrowTypeData* data, float additionalStrength, float AdditionalTorgue)
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

	//randomizing spawn rotation
	const FQuat RandomRot = FQuat(
	   FMath::FRandRange(-1.f, 1.f),
	   FMath::FRandRange(-1.f, 1.f),
	   FMath::FRandRange(-1.f, 1.f),
	   FMath::FRandRange(-1.f, 1.f)
	).GetNormalized();

	DiceMesh->SetWorldRotation(RandomRot, false, nullptr, ETeleportType::TeleportPhysics);

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

	const float TorgueStrength = data->Torque + AdditionalTorgue;
	DiceMesh->AddTorqueInRadians(
	   Torque * TorgueStrength,
	   NAME_None,
	   true
	);
}

void ADTDice::ResolveDice()
{
	if (IsValid(ResolveDefinition) == false)
	{
		return;
	}
		
	AbilitySystemComponent->AbilityEndedCallbacks.AddUObject(this, &ADTDice::Internal_OnResolutionFinished);
	FGameplayAbilitySpec ResolveAbility = AbilitySystemComponent->BuildAbilitySpecFromClass(ResolveDefinition->GetResolveAbility().Get(), CalculateDiceSide());
	
	ResolveHandle =	AbilitySystemComponent->GiveAbility(ResolveAbility);

	if (!ResolveHandle.IsValid())
	{
		UJUEDevelopmentStatics::ReportDebugMessage("Failed to give resolve ability");
		Internal_OnResolutionFinished(nullptr);
		return;
	}

	UJUEDevelopmentStatics::ReportDebugMessage("Resolve ability given");

	if (AbilitySystemComponent->TryActivateAbility(ResolveHandle) == false)
	{
		UJUEDevelopmentStatics::ReportWarningMessage("Resolve ability was given but activation failed");
		Internal_OnResolutionFinished(nullptr);
	}

	OnResolutionStarted();
}

int ADTDice::CalculateDiceSide() const
{
	UDTDicePointCalculationComp* TopFace = nullptr;
	float HighestDot = -1.0f;

	for (UDTDicePointCalculationComp* Face : DiceFaces)
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

int ADTDice::GetNumberOfSide() const
{
	return numberOfSide;
}

void ADTDice::DisablePhysic()
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

void ADTDice::EnablePhysic(FVector InitialVelocity)
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

bool ADTDice::IsImmobile() const
{
	return DiceMesh->GetPhysicsLinearVelocity().Length() <= 0.5f;
}

bool ADTDice::HasSettled() const
{
	return bSettled;
}

void ADTDice::SetSettled(bool _bSettled)
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
			UDTCombatBridgeSubsystem* CombatBridgeSubsystem = GetWorld()->GetSubsystemChecked<UDTCombatBridgeSubsystem>();
			if (CombatBridgeSubsystem)
			{
				CombatBridgeSubsystem->AddPendingAbility(FDTPendingAbility(this, GetInstigator()));
				bSentAbility = true;
			}
		}
	}

	bSettled = _bSettled;
}

ADTDiceCamera* ADTDice::GetDiceCamera() const
{
	return DiceCamera;
}

UPrimitiveComponent* ADTDice::GetDicePhysicalComponent() const
{
	return DiceMesh;
}

const UDTDiceResolveDefinition* ADTDice::GetDiceResolveDefinition() const
{
	return ResolveDefinition.Get();
}

void ADTDice::OnDiceHit(ADTDice* OtherDice, const FHitResult& Hit)
{
	bool otherDiceIsDivisible = false;
	int divisionAmount = 0;

	int OtherSides = OtherDice->GetNumberOfSide();
	int MySides = GetNumberOfSide();
	// if (OtherDice->GetNumberOfSide() % numberOfSide == 0 &&
	//    !OtherDice->bDivisionPending &&
	//    OtherDice->GetNumberOfSide() != GetNumberOfSide())
	// {
	//    otherDiceIsDivisible = true;
	//    divisionAmount = OtherDice->GetNumberOfSide() / numberOfSide;
	//    OtherDice->bDivisionPending = true;
	// }

	if (OtherSides > MySides && !OtherDice->bDivisionPending)
	{
	    FractureDice(OtherDice);
    }
    else
    {
       FVector RelativeVelocity = DiceMesh->GetPhysicsLinearVelocity() - OtherDice->DiceMesh->GetPhysicsLinearVelocity();
       float ClosingSpeed = FVector::DotProduct(RelativeVelocity, Hit.ImpactNormal);

       ApplyImpulseToDice(OtherDice, Hit, ClosingSpeed);
    }
}

void ADTDice::FractureDice(ADTDice* OtherDice)
{
	int OtherSides = OtherDice->GetNumberOfSide();
	int MySides = GetNumberOfSide();
	int Quotient  = OtherSides / MySides;
	int Leftover = OtherSides % MySides;

	TArray<EDiceType> DiceToSpawn;

	for (int i = 0; i < Quotient; ++i)
	{
		EDiceType MyType;
		if (UDTCombatStatics::TryGetDiceTypeFromSides(MySides, MyType))
		{
			DiceToSpawn.Add(MyType);
		}
	}

	if (Leftover > 0)
	{
		EDiceType LeftoverType;
		if (UDTCombatStatics::TryGetDiceTypeFromSides(Leftover, LeftoverType))
		{
			DiceToSpawn.Add(LeftoverType);
		}
	}

	FVector HitDiceVelocity = DiceCollisionData->UsePreviousFrameVelocity ? CachedVelocity : DiceMesh->GetPhysicsLinearVelocity();

	FVector SpreadAxis = FVector::CrossProduct(HitDiceVelocity.GetSafeNormal(), FVector::UpVector);
	if (SpreadAxis.IsNearlyZero())
	{
		SpreadAxis = FVector::RightVector;
	}
	SpreadAxis.Normalize();

	UDTActorFactorySubSystem* ActorFactorySubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UDTActorFactorySubSystem>();

	for (int i = 0; i < DiceToSpawn.Num(); ++i)
    {
        FActorSpawnParameters SpawnParameters;
        SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
        SpawnParameters.Owner = GetInstigator();
        SpawnParameters.Instigator = GetInstigator();

		int sign = 1;
		if (i % 2 != 0)
		{
			sign = -1;
		}
        float SideOffsetDistance = DiceCollisionData->SideOffsetDistance + (i / 2) * DiceCollisionData->SpacingBetweenDice;
		FVector SideOffset = SpreadAxis * SideOffsetDistance;

		FTransform SpawnTransform = UKismetMathLibrary::Conv_VectorToTransform(
            OtherDice->GetActorLocation() + (SideOffset * sign));

        ADTDice* SpawnedDice = ActorFactorySubsystem->SpawnDiceFromType(
            GetWorld(),
            DiceToSpawn[i],
            OtherDice->GetDiceResolveDefinition(),
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
    EDiceType MyTypeSide;
    if (UDTCombatStatics::TryGetDiceTypeFromSides(MySides, MyTypeSide))
    {
      OnDiceFractured(MyTypeSide, DiceToSpawn);  		
    }
	
    OtherDice->DestroyDice();

}

void ADTDice::ApplyImpulseToDice(ADTDice* OtherDice, const FHitResult& Hit, float ClosingSpeed)
{
    if (this > OtherDice) return;
    if (!CanProcessHit(OtherDice)) return;

    float Intensity = FMath::Clamp(ClosingSpeed / DiceCollisionData->MaxSpeed, 0.f, 1.f);
	
	switch (DiceCollisionData->ImpulseCurve)
	{
	case EImpulseCurve::Exponential:
		Intensity = FMath::Pow(Intensity, DiceCollisionData->CurveExponent);
		break;

	case EImpulseCurve::Custom:
		if (DiceCollisionData->IntensityCurve)
		{
			Intensity = FMath::Clamp(DiceCollisionData->IntensityCurve->GetFloatValue(Intensity), 0.f, 1.f);
		}
		break;

	case EImpulseCurve::Linear:
	default:
		break;
	}
	
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

    // float MaxAllowedSpeed = FMath::Max(FMath::Abs(MySpeedAlongPush) + FMath::Abs(OtherSpeedAlongPush), KINDA_SMALL_NUMBER);
    // float MyShare = FMath::Abs(MySpeedAlongPush) / MaxAllowedSpeed;
    // float OtherShare = FMath::Abs(OtherSpeedAlongPush) / MaxAllowedSpeed;
    //
    // OtherDice->DiceMesh->AddImpulse( PushDir * ImpulseStrength * MyShare, NAME_None, true);
    // DiceMesh->AddImpulse(-PushDir * ImpulseStrength * OtherShare, NAME_None, true);

	float MaxAllowedSpeed = FMath::Max(FMath::Abs(MySpeedAlongPush) + FMath::Abs(OtherSpeedAlongPush), KINDA_SMALL_NUMBER);
	float MyShare = FMath::Abs(MySpeedAlongPush) / MaxAllowedSpeed;
	float OtherShare = FMath::Abs(OtherSpeedAlongPush) / MaxAllowedSpeed;
	
	const float MyMultiplier = FMath::Lerp(DiceCollisionData->SlowDiceImpulseMultiplier, DiceCollisionData->FastDiceImpulseMultiplier, MyShare);
	const float OtherMultiplier = FMath::Lerp(DiceCollisionData->SlowDiceImpulseMultiplier, DiceCollisionData->FastDiceImpulseMultiplier, OtherShare);
	
	OtherDice->DiceMesh->AddImpulse( PushDir * ImpulseStrength * MyShare * OtherMultiplier, NAME_None, true);
	DiceMesh->AddImpulse(-PushDir * ImpulseStrength * OtherShare * MyMultiplier, NAME_None, true);

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

void ADTDice::OnCollisionWithDice(ADTDice* otherDice)
{
	
}

bool ADTDice::CanProcessHit(ADTDice* OtherDice)
{
	if (!IsValid(OtherDice) || !DiceCollisionData)
	{
		return false;
	}

	const float Now = GetWorld()->GetTimeSeconds();
	
	if (DiceCollisionData->bUseGlobalCooldown)
	{
		const float LastHit = FMath::Max(latestHit, OtherDice->latestHit);
		if (Now - LastHit < DiceCollisionData->GlobalCooldown)
		{
			return false;
		}
	}
	
	PruneHitTimestamps(Now);

	if (const float* LastTime = RecentHitTimestamps.Find(OtherDice))
	{
		if (Now - *LastTime < HitCooldown)
		{
			return false;
		}
	}
	
	RecentHitTimestamps.Add(OtherDice, Now);
	OtherDice->RecentHitTimestamps.Add(this, Now);
	latestHit = Now;
	OtherDice->latestHit = Now;
	return true;
}

void ADTDice::SetAvatarOwner(AActor* AvatarOwner) const
{
	AbilitySystemComponent->SetAvatarActor(AvatarOwner);
}


void ADTDice::DestroyDice()
{
	if (bDiceRemoved)
	{
		return;
	}
	bDiceRemoved = true;
	// Removed dice must not settle or enter resolution during delayed visual cleanup.
	SetActorTickEnabled(false);
	OnDiceRemoved.Broadcast();
	if (IsActorBeingDestroyed())
	{
		return;
	}
	DiceMesh->SetSimulatePhysics(false);
	DiceMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	DiceMesh->SetVisibility(false);

	/*
	if (ADTGameState_Combat* GameState = GetWorld()->GetGameState<ADTGameState_Combat>())
	{
		GameState->RemoveDiceToResolve(this);
		bSentAbility = true;
	}
	*/

	OnBeforeDiceDestroyed();

	//@TODO: Implement dice camera in blueprint
	GetWorldTimerManager().SetTimer(
		CleanupTimerHandle,
		this,
		&ADTDice::FinishDestroy_Internal,
		CameraBlendTime,
		false
	);
	//FinishDestroy_Internal();
	RecentHitTimestamps.Empty();
}

void ADTDice::Internal_OnResolutionFinished(UGameplayAbility* Ability)
{
	OnDiceResolveEnded.Broadcast();
	OnResolutionFinished();
	DestroyDice();
}

FVector ADTDice::GetCachedVelocity() const
{
	return CachedVelocity;
}

void ADTDice::FinishDestroy_Internal()
{
	if (IsValid(DiceCamera))
	{
		DiceCamera->Destroy();
		DiceCamera = nullptr;
	}

	Destroy();
}

void ADTDice::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	if (!bFirstCollisionHappened)
	{
		OnFirstCollision.Broadcast();
	}
	bFirstCollisionHappened = true;

	if (!HasSettled() && OtherActor && OtherActor->ActorHasTag(GroundTag))
	{
		if (NormalImpulse.Size() > MinBounceImpulseToRecord)
		{
			 bool bFarEnough = BouncePoints.Num() == 0 || FVector::DistSquared(BouncePoints.Last(), Hit.ImpactPoint) > FMath::Square(MinDistanceBetweenBouncePoints);

			if (bFarEnough)
			{
				BouncePoints.Add(Hit.ImpactPoint);
				OnBounceGround(Hit.ImpactPoint);
			}
		}
	}
}

UStaticMeshComponent* ADTDice::GetStaticMeshComponent() const
{
	return DiceMesh;
}

UDTDiceCollisionData* ADTDice::GetDiceCollision() const
{
	return DiceCollisionData;
}

void ADTDice::PruneHitTimestamps(float Now)
{
	for (auto It = RecentHitTimestamps.CreateIterator(); It; ++It)
	{
		const bool bStale   = !It.Key().IsValid();
		const bool bExpired = (Now - It.Value()) >= HitCooldown;
		if (bStale || bExpired)
		{
			It.RemoveCurrent();
		}
	}
}

