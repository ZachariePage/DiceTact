// Copyright Epic Games, Inc. All Rights Reserved.

#include "DTPlayerController_Combat.h"

#include "AbilitySystemGlobals.h"
#include "CameraPawn.h"
#include "Core/System/DTGameState_Combat.h"
#include "Core/Abilities/HeroPower/DTHeroPowerDefinition.h"
#include "Core/Abilities/Throws/ThrowType.h"
#include "Core/Interface/RangeBaseAbility.h"
#include "Core/Inventory/DTCombatDeckComponent.h"
#include "Core/Inventory/DTDiceItemInstance.h"
#include "Core/Projectiles/Components/DiceMovementComponent.h"
#include "Core/TurnBaseSystem/TurnBaseComponent.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/KismetMathLibrary.h"

ADTPlayerController_Combat::ADTPlayerController_Combat()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	DeckComponent = CreateDefaultSubobject<UDTCombatDeckComponent>("Combat Deck Component");
}

void ADTPlayerController_Combat::SelectDice(UDTDiceItemInstance* DiceItemInstance)
{
	CurrentDice = DiceItemInstance;
}

//should make this crash safe. 
void ADTPlayerController_Combat::SelectAbility(TSubclassOf<UGameplayAbility> AbilityClass)
{
	if (HasUnitSelected() == false) return;
	CurrentlySelectedAbility = AbilityClass;
    AbilitySelectionState = EAbilitySelectionState::Targeting;

    if (!AbilityClass)
    {
        return;
    }

    UAbilitySystemComponent* ASC = BoundASC; 

    if (!ASC)
    {
        return;
    }

    const FGameplayAbilitySpec* Spec = ASC->FindAbilitySpecFromClass(AbilityClass);
    if (!Spec)
    {
        return;
    }

    UGameplayAbility* AbilityInstance = Spec->GetPrimaryInstance();
    if (!AbilityInstance)
    {
        AbilityInstance = Spec->Ability;
    }

    if (AbilityInstance->Implements<URangeBaseAbility>())
    {
        const IRangeBaseAbility* RangeAbility = Cast<IRangeBaseAbility>(AbilityInstance);
        //const float Range = RangeAbility->GetAbilityMaxRange(AbilityInstance->GetAvatarActorFromActorInfo());
        //ShowAbilityRange(Range);
    }
    else
    {
        HideAbilityRange();
    }
}

void ADTPlayerController_Combat::BeginPlay()
{
	ADTGameState_Combat* GS = Cast<ADTGameState_Combat>(GetWorld()->GetGameState());
	if (GS)
	{
		TurnManager = GS->GetTurnManager();
		if (TurnManager)
		{
			//TurnManager->OnUnitTurnStarted.AddDynamic(this, &ADTPlayerController_Combat::HandleUnitTurnStarted);
			//TurnManager->OnUnitTurnEnded.AddDynamic(this, &ADTPlayerController_Combat::HandleUnitTurnEnded);
		}
		else
		{
			UJUEDevelopmentStatics::ReportErrorMessage("No turn manager is available", this);

			/*
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(
					-1,
					15.0f,
					FColor::Yellow,
					FString::Printf(TEXT("No turn manager"))
					);
			}
			*/
		}
	}
	
	Super::BeginPlay();
}

void ADTPlayerController_Combat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (AbilitySelectionState == EAbilitySelectionState::Targeting)
	{
		if (bShowDebugRay)
		{
			DrawTargetingRay();
		}
		
		if (HasDiceSelected())
		{
			PredictTrajectory(cachedStrength, PossessedUnit->GetThrowTypeData());
		}
	} 
}

void ADTPlayerController_Combat::DrawTargetingRay()
{
	FHitResult Hit;

	if (GetHitResultUnderCursor(ECC_Visibility, true, Hit))
	{
		FVector Start = PossessedUnit->GetActorLocation();
		
		Start.Z += 50.f;

		FVector End = Hit.Location;

		FVector Direction = End - Start;
		Direction.Z = 0.f;

		FRotator CurrentRotation = PossessedUnit->GetActorRotation();
		FRotator TargetRotation = Direction.Rotation();

		FRotator NewRotation = FMath::RInterpTo(
			CurrentRotation,
			TargetRotation,
			GetWorld()->GetDeltaSeconds(),
			1.f
		);

		PossessedUnit->SetActorRotation(NewRotation);

		DrawDebugLine(
			GetWorld(),
			Start,
			End,
			FColor::Red,
			false,
			0.f,
			0,
			4.f
		);

		DrawDebugSphere(
			GetWorld(),
			End,
			12.f,
			16,
			FColor::Green,
			false,
			0.f
		);
	}
}

void ADTPlayerController_Combat::TrySelectActor(AActor* Actor)
{
	//Deselect our currently selected unit
	if (!Actor
		|| Actor == GetPossessedUnit())
	{
		DeselectUnit();
		return;
	}
	
	if (AHeroCharacter* Unit = Cast<AHeroCharacter>(Actor))
	{
		TryPossess(Unit);
		return;
	}
	
	DeselectUnit();
}

void ADTPlayerController_Combat::HandlePrimaryAction(float strength)
{
	//when we get the handle from the item we will be able to use const bool bTriggered = ASC->TriggerAbilityFromGameplayEvent(Pending.AbilityHandleASC->AbilityActorInfo.Get(),EventData.EventTag,&EventData,*ASC);
	cachedStrength = strength;
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("Strength value: %f"), cachedStrength), this);
	
	bool bSuccess = false;

	if (HasDiceSelected())
	{
		bSuccess = PossessedUnit->Execute_TryThrowDice(PossessedUnit, GetSelectedDice());
		if (bSuccess)
		{
			DeckComponent->TryUseDice(GetSelectedDice());
			SelectDice(nullptr);
		}
	}
	else if (HasPowerSelected())
	{
		bSuccess = PossessedUnit->TryThrowAbility();
		if (bSuccess)
		{
			CurrentPower = nullptr;
		}
	}
	else
	{
		//Tell him to move to point
		PossessedUnit->MoveToMouse();
		bSuccess = true;
	}
    //const bool bActivated = ASC->TryActivateAbilityByClass(GetSelectedAbility());

    if (!bSuccess)
    {
		UJUEDevelopmentStatics::ReportErrorMessage("Ability failed to activate!", this);	
    }
}

void ADTPlayerController_Combat::TryTriggerAbility(float strength)
{
	if (HasUnitSelected() == false || bWaitingForAbilityToEnd)
	{
		return;
	}

	HandlePrimaryAction(strength);
}

void ADTPlayerController_Combat::TryPossess(AHeroCharacter* Unit)
{
	if (!Unit || !CanPossessUnit(Unit))
	{
		return;
	}
 
	//Possess(Unit);
	//OnUnitPossessed(Unit);
	if (PossessedUnit != Unit)
	{
		DeselectUnit();
	}

	
	UJUEDevelopmentStatics::ReportDebugMessage("Turn try possess unit", this);
	
	PossessedUnit = Unit;
	//PossessedUnit->TakeControlOfUnit_Implementation();
	BindAbilitySystemToController(Unit);
	SelectAbility(Unit->GetDefaultMoveAbility());
	OnUnitSelected.Broadcast(Unit);
}

void ADTPlayerController_Combat::DeselectUnit()
{
	if (PossessedUnit)
	{
		//PossessedUnit->LeaveControlOfUnit_Implementation();
		OnUnitDeselected.Broadcast(PossessedUnit);
		CurrentlySelectedAbility = nullptr;
		AbilitySelectionState = EAbilitySelectionState::None;
		PossessedUnit = nullptr;
	}
}

void ADTPlayerController_Combat::BindAbilitySystemToController(AHeroCharacter* InPawn)
{
	if (BoundASC)
	{
		BoundASC->AbilityActivatedCallbacks.RemoveAll(this);
		BoundASC->AbilityEndedCallbacks.RemoveAll(this);
	}
	BoundASC = nullptr;

	if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(InPawn))
	{
		ASC->AbilityActivatedCallbacks.AddUObject(this, &ADTPlayerController_Combat::OnPlayerAbilityStart);
		ASC->AbilityEndedCallbacks.AddUObject(this, &ADTPlayerController_Combat::OnPlayerAbilityEnd);
		BoundASC = ASC;
	}
}

void ADTPlayerController_Combat::OnPlayerAbilityStart(UGameplayAbility* Ability)
{
	if (!Ability || !HasAbilitySelected())
	{
		return;
	}
	
	if (Ability->GetClass() == CurrentlySelectedAbility)
	{
		CurrentlySelectedAbility = nullptr;
		AbilitySelectionState = EAbilitySelectionState::None;
		HideAbilityRange();
	}

	bWaitingForAbilityToEnd = true;
}

void ADTPlayerController_Combat::OnPlayerAbilityEnd(UGameplayAbility* Ability)
{
	if (!Ability)
	{
		return;
	}

	if (bWaitingForAbilityToEnd)
	{
		bWaitingForAbilityToEnd = false;
	}
}

void ADTPlayerController_Combat::ResetDefaultAbilityOfUnit(AHeroCharacter* character)
{
	//SelectAbility(character->GetDefaultAbility());
	ResetCameraPawn(character);
}

void ADTPlayerController_Combat::SetCachedStrength(float value)
{
	cachedStrength = value;
}

bool ADTPlayerController_Combat::HasAbilitySelected() const
{
	return IsValid(CurrentlySelectedAbility);
}

TSubclassOf<UGameplayAbility> ADTPlayerController_Combat::GetSelectedAbility() const
{
	return CurrentlySelectedAbility;
}

bool ADTPlayerController_Combat::HasDiceSelected() const
{
	return IsValid(CurrentDice);
}

UDTDiceItemInstance* ADTPlayerController_Combat::GetSelectedDice() const
{
	return CurrentDice;
}

bool ADTPlayerController_Combat::HasPowerSelected() const
{
	return IsValid(CurrentPower);
}

UDTHeroPowerDefinition* ADTPlayerController_Combat::GetSelectedPower() const
{
	return CurrentPower;
}

void ADTPlayerController_Combat::SelectUnitPower(UDTHeroPowerDefinition* power)
{
	CurrentPower = power;
}

bool ADTPlayerController_Combat::HasUnitSelected() const
{
	return IsValid(PossessedUnit);
}

//whole camera system need reword
void ADTPlayerController_Combat::ResetCameraPawn(AHeroCharacter* character)
{
	if (character)
	{
		character->SetAiming(false);
	}
	ResetCamera();
}

AHeroCharacter* ADTPlayerController_Combat::GetPossessedUnit() const
{
	return PossessedUnit;
}

FOnTurnFinished& ADTPlayerController_Combat::GetFinishedTurnDelegate()
{
	return OnTurnFinished;
}

void ADTPlayerController_Combat::ReceiveTurn_Implementation()
{
	IDTTurnReceiver::ReceiveTurn_Implementation();
	DeckComponent->ResetDeck();
}

void ADTPlayerController_Combat::FinishTurn()
{
	OnTurnFinished.Broadcast();
}

void ADTPlayerController_Combat::ResetCamera()
{
	ACameraPawn* CamPawn = Cast<ACameraPawn>(GetPawn());

	if (CamPawn)
	{
		CamPawn->SetCameraActive(true);
		SetViewTargetWithBlend(
			CamPawn,
			CameraBlendTime,  
			VTBlend_Cubic,
			0.f,
			false
		);
	}
}

FVector ADTPlayerController_Combat::GetCachedDestination()
{
	return CachedDestination;
}

void ADTPlayerController_Combat::SetCachedDestination(FVector vector)
{
	CachedDestination = vector;
}

//slop to rework
void ADTPlayerController_Combat::ShowAbilityRange(float Range)
{
	if (GEngine)
	{

		GEngine->AddOnScreenDebugMessage(
			-1,
			15.0f,
			FColor::Yellow,
			FString::Printf(TEXT("range of decal! Float: %.2f"), Range)
		);
	}
	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn || Range <= 0.f)
	{
		HideAbilityRange();
		return;
	}

	if (!AbilityRangeDecalComponent)
	{
		if (!AbilityRangeDecalMaterial)
		{
			if(GEngine)
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("no decal!"));
			return;
		}

		AbilityRangeDecalComponent = NewObject<UDecalComponent>(ControlledPawn);
		AbilityRangeDecalComponent->SetDecalMaterial(AbilityRangeDecalMaterial);
		AbilityRangeDecalComponent->SetupAttachment(ControlledPawn->GetRootComponent());
		AbilityRangeDecalComponent->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f)); 
		AbilityRangeDecalComponent->RegisterComponent();
		if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("work ig!"));
	}
	else if (AbilityRangeDecalComponent->GetAttachParent() != ControlledPawn->GetRootComponent())
	{
		AbilityRangeDecalComponent->AttachToComponent(
			ControlledPawn->GetRootComponent(),
			FAttachmentTransformRules::KeepRelativeTransform);
	}


	float DecalDepth = 200.f;
	AbilityRangeDecalComponent->DecalSize = FVector(DecalDepth, Range, Range);
	AbilityRangeDecalComponent->SetRelativeLocation(FVector(0.f, 0.f, 50.f));
	AbilityRangeDecalComponent->SetVisibility(true);
}

void ADTPlayerController_Combat::HideAbilityRange()
{
	if (AbilityRangeDecalComponent)
	{
		AbilityRangeDecalComponent->SetVisibility(false);
		
	}
}

TArray<FVector> ADTPlayerController_Combat::PredictTrajectory(
    float AdditionalStrength, const UThrowType* ThrowTypeData,
    float TimeStep, float MaxSimulationTime, float DrawInterval, bool bDrawDebug)
{
    TArray<FVector> Points;
    if (!ThrowTypeData || !PossessedUnit)
    {
        return Points;
    }

    FHitResult CursorHit;
    if (!GetHitResultUnderCursor(ECC_Visibility, true, CursorHit))
    {
        return Points;
    }
	
    const FVector AvatarLocation = PossessedUnit->GetActorLocation();
    const FVector TargetLocation = CursorHit.Location;

    const FVector SpawnDirection = UKismetMathLibrary::GetDirectionUnitVector(AvatarLocation, TargetLocation);
    FVector Direction = ThrowTypeData->CalculateThrowDirection(AvatarLocation, TargetLocation);
    Direction.Normalize();

	//need match offset with throwdice ability. Need a way to get the ability, for now magic number yeeeeeeeeeeeee
    const FVector DiceSpawnLocation = AvatarLocation + (SpawnDirection * FVector(100.f, 100.f, 0)); 

    const TSubclassOf<UDiceMovementComponent> MovementCompClass = ThrowTypeData->GetMovementComponentSubclass();
	const UDiceMovementComponent* MovementCDO = nullptr;
	if (MovementCompClass)
	{
		MovementCDO = MovementCompClass->GetDefaultObject<UDiceMovementComponent>();
	}

    FVector Velocity = Direction * (ThrowTypeData->Speed + (AdditionalStrength * ThrowTypeData->AdditionalSpeedMultipliedByThrowStrength));
    if (MovementCDO)
    {
        Velocity += MovementCDO->PredictInitialVelocityOffset(ThrowTypeData);
    }

    FVector Position = DiceSpawnLocation;
    Points.Add(Position);

	//once we can get the actual dice we can use dice size and physic properties for more accurate result
    const float GravityZ = GetWorld()->GetGravityZ();
    const float LinearDamping = 0.01f;
    const float SweepRadius = 20.f;

    FCollisionShape SweepShape = FCollisionShape::MakeSphere(SweepRadius);
    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(DiceTrajectoryPreview), false, PossessedUnit);

    float ElapsedTime = 0.f;
    float TimeSinceLastDraw = 0.f;

    while (ElapsedTime < MaxSimulationTime)
    {
        FVector Acceleration(0.f, 0.f, GravityZ);
        if (MovementCDO)
        {
            Acceleration += MovementCDO->PredictAcceleration(ElapsedTime, Position, Velocity, ThrowTypeData);
        }

    	if (ElapsedTime = 0.f)
    	{
    		Velocity += Acceleration;
    	}
	    else
	    {
	    	Velocity += Acceleration * TimeStep;
	    }
        
        Velocity *= FMath::Exp(-LinearDamping * TimeStep);

        const FVector NewPosition = Position + Velocity * TimeStep;

        FHitResult Hit;
        const bool bHit = GetWorld()->SweepSingleByChannel(
            Hit, Position, NewPosition, FQuat::Identity,
            ECC_WorldStatic, SweepShape, QueryParams);

        if (bHit)
        {
            Points.Add(Hit.Location);
            if (bDrawDebug)
            {
                DrawDebugSphere(GetWorld(), Hit.Location, SweepRadius, 12, FColor::Red, false, 0);
            }
            break;
        }

        Position = NewPosition;
        ElapsedTime += TimeStep;
        TimeSinceLastDraw += TimeStep;

        if (TimeSinceLastDraw >= DrawInterval)
        {
            Points.Add(Position);
            if (bDrawDebug)
            {
                DrawDebugSphere(GetWorld(), Position, SweepRadius * 0.5f, 8, FColor::Yellow, false, 0);
            }
            TimeSinceLastDraw = 0.f;
        }
    }

    return Points;
}

UTurnBaseComponent* ADTPlayerController_Combat::GetTurnManager()
{
	return TurnManager;
}

void ADTPlayerController_Combat::LoadDeck(const TArray<UDTDiceItemInstance*>& Deck)
{
	for (const auto& DeckCard: Deck)
	{
		//We duplicate it because
		if (UDTDiceItemInstance* DuplicatedDice = DuplicateObject(DeckCard, this))
		{
			DeckComponent->AddDiceToDeck(DuplicatedDice);
		}
	}
}

void ADTPlayerController_Combat::HandleUnitTurnStarted(ATurnBaseUnit* Unit)
{
	if (GEngine)
	{
		float MyFloat = 12.5f;

		UJUEDevelopmentStatics::ReportDebugMessage("Handle unit turn started", this);

		/*
		GEngine->AddOnScreenDebugMessage(
			-1,
			15.0f,
			FColor::Yellow,
			FString::Printf(TEXT("Handle unit turn started pc"))
		);
		*/
	}
	if (AHeroCharacter* PlayerUnit = Cast<AHeroCharacter>(Unit))
	{
		TryPossess(PlayerUnit);
	}
	else
	{
		DeselectUnit();
	}
}

void ADTPlayerController_Combat::HandleUnitTurnEnded(ATurnBaseUnit* Unit)
{
	if (PossessedUnit == Unit)
	{
		DeselectUnit();
	}
}

