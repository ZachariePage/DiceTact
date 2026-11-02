// Copyright Epic Games, Inc. All Rights Reserved.

#include "DTCombatPlayerController.h"

#include "AbilitySystemGlobals.h"
#include "DTCameraPawn.h"
#include "DTCombatInputConfig.h"
#include "CommonInputSubsystem.h"
#include "Input/CommonUIActionRouterBase.h"
#include "Engine/LocalPlayer.h"
#include "EngineUtils.h"
#include "DiceTact/Abilities/Throws/DTDiceThrowAbility.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "DiceTact/Abilities/HeroPower/DTHeroPowerDefinition.h"
#include "DiceTact/Abilities/HeroPower/DTHeroPowerAbility.h"
#include "DiceTact/Abilities/Strategies/DTTargetingStrategy.h"
#include "DiceTact/Abilities/Throws/DTThrowTypeData.h"
#include "DiceTact/Interface/DTDiceAbilityCaster.h"
#include "DiceTact/Interface/DTInteractable.h"
#include "DiceTact/Interface/DTRangeBaseAbilityInterface.h"
#include "DiceTact/Inventory/DTCombatDeckComponent.h"
#include "DiceTact/Inventory/DTDiceItemInstance.h"
#include "DiceTact/Projectiles/Components/DTDiceMovementComponent.h"
#include "DiceTact/subsystem/DTCombatBridgeSubsystem.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnBaseComponent.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Shows the mouse cursor and creates the component that stores the combat dice.
ADTCombatPlayerController::ADTCombatPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	DeckComponent = CreateDefaultSubobject<UDTCombatDeckComponent>("Combat Deck Component");
}

// Selects an available die, or clears the selection when given nullptr.
// Cancels throw preparation and tells the camera, Blueprint and selection listeners about the change.
void ADTCombatPlayerController::SelectDice(UDTDiceItemInstance* DiceItemInstance)
{
	if (DiceItemInstance)
	{
		if (!CanAcceptCombatInput() || bWaitingForAbilityToEnd || !DeckComponent->IsDiceAvailable(DiceItemInstance))
		{
			return;
		}
	}
	const bool bDiceChanged = CurrentDice != DiceItemInstance;
	CancelCombatInput();
	CurrentDice = DiceItemInstance;
	
	if (IsValid(DiceItemInstance))
	{
		CurrentPower = nullptr;
		OnDiceSelected(DiceItemInstance);
	}
	else
	{
		OnDiceDeselected();
	}
	
	AbilitySelectionState = EAbilitySelectionState::None;
	if (HasHeroSelected())
	{
		AbilitySelectionState = EAbilitySelectionState::Targeting;
	}
	RefreshCameraSelection();
	if (bDiceChanged)
	{
		OnDiceSelectionChanged.Broadcast(CurrentDice);
	}
}

//should make this crash safe. 
// Stores the selected hero ability and enters targeting mode. Looks up its ability instance for range handling.
void ADTCombatPlayerController::SelectAbility(TSubclassOf<UGameplayAbility> AbilityClass)
{
	if (HasHeroSelected() == false)
	{
		return;
	}
	
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

    if (AbilityInstance->Implements<UDTRangeBaseAbilityInterface>())
    {
        const IDTRangeBaseAbilityInterface* RangeAbility = Cast<IDTRangeBaseAbilityInterface>(AbilityInstance);
        //const float Range = RangeAbility->GetAbilityMaxRange(AbilityInstance->GetAvatarActorFromActorInfo());
        //ShowAbilityRange(Range);
    }
    else
    {
        HideAbilityRange();
    }
}

// Finds the input, menu and camera objects, then registers this controller for hero turns and combat-end events.
void ADTCombatPlayerController::BeginPlay()
{
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		CommonInputSubsystem = LocalPlayer->GetSubsystem<UCommonInputSubsystem>();
		UIActionRouter = LocalPlayer->GetSubsystem<UCommonUIActionRouterBase>();
		if (UIActionRouter)
		{
			UIActionRouter->OnActiveInputConfigChanged().AddUObject(this, &ADTCombatPlayerController::OnUIInputConfigChanged);
		}
	}
	CombatCamera = Cast<ADTCameraPawn>(GetPawn());
	UDTCombatBridgeSubsystem* CombatSub = GetWorld()->GetSubsystem<UDTCombatBridgeSubsystem>();
	if (CombatSub)
	{
		CombatSub->RegisterTurnReceiverToCombat(this, ECombatUnitType::Hero);
		CombatSub->OnCombatEnded.AddUniqueDynamic(this, &ADTCombatPlayerController::OnCombatEnded);
	}
	Super::BeginPlay();
	RefreshCameraSelection();
}

// Updates the aim point and increases throw strength while charging, or cancels preparation when input is blocked.
// Then runs Blueprint Tick with the updated target and draws targeting debug shapes when enabled.
void ADTCombatPlayerController::Tick(float DeltaTime)
{
	if (CombatInputConfig)
	{
		if (!CanAcceptCombatInput() || bWaitingForAbilityToEnd)
		{
			CancelCombatInput();
		}
		else
		{
			UpdateAimTarget();
			if (bPreparingThrow && bChargingThrow)
			{
				const float ChargeDuration = FMath::Max(CombatInputConfig->ThrowChargeDuration, UE_SMALL_NUMBER);
				const float ChargeRate = CombatInputConfig->MaximumThrowStrength / ChargeDuration;
				CachedStrength = FMath::Clamp(CachedStrength + DeltaTime * ChargeRate,
					0.f, CombatInputConfig->MaximumThrowStrength);
			}
		}
	}
	// Blueprint draws or clears the trajectory using this frame's target.
	Super::Tick(DeltaTime);
	if (AbilitySelectionState == EAbilitySelectionState::Targeting)
	{
		if (bShowDebugRay)
		{
			DrawTargetingRay();
		}

		/*
		if (HasDiceSelected() && HasHeroSelected())
		{
			PredictTrajectory(CachedStrength, PossessedHero->GetThrowTypeData());
		}
		*/
	} 
}

// Turns the selected hero toward the saved aim point and draws a debug line and target marker.
void ADTCombatPlayerController::DrawTargetingRay()
{
	if (HasHeroSelected() && bHasValidAimTarget)
	{
		FVector Start = PossessedHero->GetActorLocation();
		
		Start.Z += 50.f;

		const FVector End = CachedDestination;

		FVector Direction = End - Start;
		Direction.Z = 0.f;

		FRotator CurrentRotation = PossessedHero->GetActorRotation();
		FRotator TargetRotation = Direction.Rotation();

		FRotator NewRotation = FMath::RInterpTo(
			CurrentRotation,
			TargetRotation,
			GetWorld()->GetDeltaSeconds(),
			1.f
		);

		PossessedHero->SetActorRotation(NewRotation);

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

// Selects a clicked hero, returns from Overview to the already selected hero, or clears the current selection.
void ADTCombatPlayerController::TrySelectActor(AActor* Actor)
{
	if (!CanAcceptCombatInput() || bWaitingForAbilityToEnd)
	{
		return;
	}
	if (Actor && Actor == GetSelectedHero() && CombatCamera
		&& CombatCamera->GetCameraMode() == EDTCameraMode::Overview)
	{
		CombatCamera->ToggleOverview();
		return;
	}
	//Deselect our currently selected unit
	if (!Actor
		|| Actor == GetSelectedHero())
	{
		DeselectUnit();
		return;
	}
	
	if (ADTHeroCharacter* Unit = Cast<ADTHeroCharacter>(Actor))
	{
		TrySelectHero(Unit);
		return;
	}
	
	DeselectUnit();
}

// Tries the action chosen for the hero: throw the selected die, use the selected power, or move.
// A successful throw spends the die and clears its selection.
void ADTCombatPlayerController::HandlePrimaryAction(float strength)
{
	//when we get the handle from the item we will be able to use const bool bTriggered = ASC->TriggerAbilityFromGameplayEvent(Pending.AbilityHandleASC->AbilityActorInfo.Get(),EventData.EventTag,&EventData,*ASC);
	CachedStrength = strength;
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("Strength value: %f"), CachedStrength), this, FColor::Emerald, 6);
	
	bool bSuccess = false;

	if (HasDiceSelected())
	{
		if (!DeckComponent->IsDiceAvailable(GetSelectedDice()))
		{
			SelectDice(nullptr);
			return;
		}
		if (IDTDiceAbilityCaster::Execute_CanCastSpell(PossessedHero))
		{
			bSuccess = PossessedHero->Execute_TryThrowDice(PossessedHero, GetSelectedDice());
			if (bSuccess)
			{
				DeckComponent->TryUseDice(GetSelectedDice());
				SelectDice(nullptr);
			}
		}
		else
		{
			//UJUEDevelopmentStatics::ReportErrorMessage("Ability NoMoreDiceLeft", this);
			OnUnitExhaustedThrows(PossessedHero);
			
		}
	}
	else if (HasPowerSelected())
	{
		bSuccess = TryActivateHeroPower();
	}
	else
	{
		//Tell him to move to point
		PossessedHero->TryMoveToMouse();
		bSuccess = true;
	}
    //const bool bActivated = ASC->TryActivateAbilityByClass(GetSelectedAbility());

    if (!bSuccess)
    {
		UJUEDevelopmentStatics::ReportErrorMessage("Ability failed to activate!", this);	
    }
}

// Runs the selected action only when a hero is selected, it is the player turn, and no ability is blocking input.
void ADTCombatPlayerController::TryTriggerAbility(float strength)
{
	if (HasHeroSelected() == false || bWaitingForAbilityToEnd || HasTurn() == false)
	{
		return;
	}

	HandlePrimaryAction(strength);
}

// Selects an allowed hero, connects its ability events, picks its move ability, and updates the camera and selection events.
void ADTCombatPlayerController::TrySelectHero(ADTHeroCharacter* Unit)
{
	if (!IsValid(Unit) || !CanPossessUnit(Unit) || bWaitingForAbilityToEnd)
	{
		return;
	}
	
	if (HasHeroSelected() &&
		GetSelectedHero() != Unit)
	{
		DeselectUnit();
	}

	
	//UJUEDevelopmentStatics::ReportDebugMessage("Turn try possess unit", this);
	
	PossessedHero = Unit;
	CancelCombatInput();
	//PossessedHero->TakeControlOfUnit_Implementation();
	BindAbilitySystemToController(Unit);
	SelectAbility(Unit->GetDefaultMoveAbility());
	
	IDTInteractable::Execute_TryCommitInteraction(PossessedHero, FInteractionQuery(this, this));
	OnUnitSelected.Broadcast(Unit);
	OnHeroSelected(Unit);
	RefreshCameraSelection();
	if (IDTDiceAbilityCaster::Execute_CanCastSpell(PossessedHero) == false)
	{
		//UJUEDevelopmentStatics::ReportErrorMessage("Ability NoMoreDiceLeft", this);
		OnUnitExhaustedThrows(PossessedHero);
	}
}

// Cancels aiming, ends the hero interaction, clears the hero and action selections, and updates the camera.
void ADTCombatPlayerController::DeselectUnit()
{
	CancelCombatInput();
	if (GetSelectedHero() == nullptr)
	{
		return;
	}
	
	//PossessedHero->LeaveControlOfUnit_Implementation();
	IDTInteractable::Execute_CancelInteractionCommit(PossessedHero, FInteractionQuery(this, this));
	OnUnitDeselected.Broadcast(PossessedHero);
	OnHeroDeselected(PossessedHero);
	SelectDice(nullptr);
	SelectAbility(nullptr);
	SelectHeroPower(nullptr);
	AbilitySelectionState = EAbilitySelectionState::None;
	PossessedHero = nullptr;
	SelectedThrowDefaults = nullptr;
	RefreshCameraSelection();
	//CurrentDice = nullptr;
	//need a way to deselect dice
}

// Cancels aiming, clears the selected die, power and ability, and hides the ability range.
void ADTCombatPlayerController::CancelAbilitySelection()
{
	CancelCombatInput();
	SelectDice(nullptr);
	SelectHeroPower(nullptr);
	CurrentlySelectedAbility = nullptr;
	AbilitySelectionState = EAbilitySelectionState::None;
	HideAbilityRange();
}

// Disconnects the previous hero ability events and connects the new hero events.
// Also saves the throw ability defaults used to calculate the preview spawn position.
void ADTCombatPlayerController::BindAbilitySystemToController(ADTHeroCharacter* InPawn)
{
	SelectedThrowDefaults = nullptr;
	if (BoundASC)
	{
		BoundASC->AbilityActivatedCallbacks.RemoveAll(this);
		BoundASC->AbilityEndedCallbacks.RemoveAll(this);
	}
	BoundASC = nullptr;

	if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(InPawn))
	{
		ASC->AbilityActivatedCallbacks.AddUObject(this, &ADTCombatPlayerController::OnPlayerAbilityStart);
		ASC->AbilityEndedCallbacks.AddUObject(this, &ADTCombatPlayerController::OnPlayerAbilityEnd);
		BoundASC = ASC;
		for (const FGameplayAbilitySpec& AbilitySpec : ASC->GetActivatableAbilities())
		{
			if (UDTDiceThrowAbility* ThrowDefaults = Cast<UDTDiceThrowAbility>(AbilitySpec.Ability))
			{
				SelectedThrowDefaults = ThrowDefaults;
				break;
			}
		}
	}
}

// Blocks further actions while an ability runs and clears its targeting selection when it matches the selected ability.
void ADTCombatPlayerController::OnPlayerAbilityStart(UGameplayAbility* Ability)
{
	if (!Ability)
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

// Allows actions again when an ability reports that it has ended.
void ADTCombatPlayerController::OnPlayerAbilityEnd(UGameplayAbility* Ability)
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

/*
void ADTCombatPlayerController::ResetDefaultAbilityOfUnit(ADTHeroCharacter* character)
{
	//SelectAbility(character->GetDefaultAbility());
	ResetCameraPawn(character);
}
*/

// Stores the throw strength used by the preview and throw ability.
void ADTCombatPlayerController::SetCachedStrength(float value)
{
	CachedStrength = value;
}

// Returns the stored throw strength.
float ADTCombatPlayerController::GetCachedStrength() const
{
	return CachedStrength;
}

// Reports whether the selected ability class is valid.
bool ADTCombatPlayerController::HasAbilitySelected() const
{
	return IsValid(CurrentlySelectedAbility);
}

// Returns the selected ability class.
TSubclassOf<UGameplayAbility> ADTCombatPlayerController::GetSelectedAbility() const
{
	return CurrentlySelectedAbility;
}

// Reports whether the selected die item is valid.
bool ADTCombatPlayerController::HasDiceSelected() const
{
	return IsValid(CurrentDice);
}

// Returns the selected die item.
UDTDiceItemInstance* ADTCombatPlayerController::GetSelectedDice() const
{
	return CurrentDice;
}

// Reports whether the selected hero power is valid.
bool ADTCombatPlayerController::HasPowerSelected() const
{
	return IsValid(CurrentPower);
}

// Returns the selected hero power.
UDTHeroPowerDefinition* ADTCombatPlayerController::GetSelectedPower() const
{
	return CurrentPower;
}

// Asks the selected hero to use its selected power. On success, optionally clears that power and calls the used-power event.
bool ADTCombatPlayerController::TryActivateHeroPower(bool bClearPowerIfUsed)
{
	if (HasHeroSelected() && HasPowerSelected())
	{
		bool bSuccess = PossessedHero->TryActivateHeroPower();
		if (bSuccess)
		{
			if (bClearPowerIfUsed)
			{
				SelectHeroPower(nullptr);
			}
			OnHeroPowerUsed();
			return true;
		}
		return false;
	}

	return false;
}

//for now like this but in full production we'll swap to something better
// Selects a hero power and clears the die selection, or clears the power when given nullptr.
// Powers marked Instant are activated immediately.
void ADTCombatPlayerController::SelectHeroPower(UDTHeroPowerDefinition* HeroPower)
{
	if (IsValid(HeroPower) == false)
	{
		CurrentPower = nullptr;
		return;
	}
	if (!HasHeroSelected() || !CanAcceptCombatInput() || bWaitingForAbilityToEnd)
	{
		return;
	}
	CancelCombatInput();
	SelectDice(nullptr);

	//Activate hero power in SelectedHeroPower??? Should not be here tbh
	CurrentPower = HeroPower;
	if (HeroPower->GetActivationTiming() == EActivationTiming::Instant)
	{
		TryActivateHeroPower();
	}
}

// Reports whether the selected hero is valid.
bool ADTCombatPlayerController::HasHeroSelected() const
{
	return IsValid(PossessedHero);
}

//whole camera system need reword
// Turns off the supplied hero aiming flag, then switches the view back to the camera pawn.
void ADTCombatPlayerController::ResetCameraPawn(ADTHeroCharacter* character)
{
	if (character)
	{
		character->SetAiming(false);
	}
	ResetCamera();
}

// Returns the selected hero.
ADTHeroCharacter* ADTCombatPlayerController::GetSelectedHero() const
{
	return PossessedHero;
}

// Returns the selected hero when other systems ask which actor this controller controls.
AActor* ADTCombatPlayerController::GetControlledActor_Implementation()
{
	return PossessedHero;
}


// Marks the player turn as active and resets the combat deck for that turn.
void ADTCombatPlayerController::ReceiveTurn_Implementation()
{
	IDTTurnReceiver::ReceiveTurn_Implementation();
	bReceivedTurn = true;
	DeckComponent->ResetDeck();
}

// Reports whether the player turn is active.
bool ADTCombatPlayerController::HasTurn() const
{
	return bReceivedTurn;
}

// Ends the player turn and clears selections once no ability is blocking it, then announces that the turn has finished.
void ADTCombatPlayerController::FinishTurn()
{
	if (bWaitingForAbilityToEnd)
	{
		return;
	}
	CancelCombatInput();
	bReceivedTurn = false;
	
	if (HasHeroSelected())
	{
		DeselectUnit();
	}

	if (HasDiceSelected())
	{
		SelectDice(nullptr);
	}

	if (HasPowerSelected())
	{
		SelectHeroPower(nullptr);
	}
	
	OnTurnFinished.Broadcast();
	K2_OnTurnFinished();
}

// Activates the possessed camera pawn and blends the player view back to it.
void ADTCombatPlayerController::ResetCamera()
{
	ADTCameraPawn* CamPawn = Cast<ADTCameraPawn>(GetPawn());

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

// Returns the saved world position used for aiming and movement.
FVector ADTCombatPlayerController::GetCachedDestination()
{
	return CachedDestination;
}

// Stores a world position for aiming and movement.
void ADTCombatPlayerController::SetCachedDestination(FVector vector)
{
	CachedDestination = vector;
}

//slop to rework
// Shows a range decal on the possessed pawn, creating it on first use. Hides it if the pawn or range is invalid.
void ADTCombatPlayerController::ShowAbilityRange(float Range)
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

// Hides the ability range decal if it exists.
void ADTCombatPlayerController::HideAbilityRange()
{
	if (AbilityRangeDecalComponent)
	{
		AbilityRangeDecalComponent->SetVisibility(false);
		
	}
}

// Reads the aim point saved by UpdateAimTarget in CachedDestination.
// Estimates the throw path from the saved target, strength and throw settings, stopping at a hit or the time limit.
// Returns points for the preview and optionally draws debug markers.
TArray<FVector> ADTCombatPlayerController::PredictTrajectory(
    float AdditionalStrength, const UDTThrowTypeData* ThrowTypeData,
    float TimeStep, float MaxSimulationTime, float DrawInterval, bool bDrawDebug)
{
    TArray<FVector> Points;
    if (!ThrowTypeData || !IsValid(PossessedHero) || !SelectedThrowDefaults || !bHasValidAimTarget)
    {
        return Points;
    }

    const FVector AvatarLocation = PossessedHero->GetActorLocation();
    const FVector TargetLocation = CachedDestination;
    FVector Direction = ThrowTypeData->CalculateThrowDirection(AvatarLocation, TargetLocation);
    Direction.Normalize();

	const FVector DiceSpawnLocation = SelectedThrowDefaults->CalculateSpawnLocation(AvatarLocation, TargetLocation);

    const TSubclassOf<UDTDiceMovementComponent> MovementCompClass = ThrowTypeData->GetMovementComponentSubclass();
	const UDTDiceMovementComponent* MovementCDO = nullptr;
	if (MovementCompClass)
	{
		MovementCDO = MovementCompClass->GetDefaultObject<UDTDiceMovementComponent>();
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
    FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(DiceTrajectoryPreview), false, PossessedHero);

    float ElapsedTime = 0.f;
    float TimeSinceLastDraw = 0.f;

	if (bDrawDebug)
	{
		DrawDebugSphere(GetWorld(), Position, SweepRadius * 0.5f, 8, FColor::Green, false, 0);
	}
	const FVector LaunchDirection = Direction;

	while (ElapsedTime < MaxSimulationTime)
	{
		FVector Acceleration(0.f, 0.f, GravityZ);
		if (MovementCDO)
		{
			Acceleration += MovementCDO->PredictAccelerationWithStrength(
					ElapsedTime, Position, Velocity, LaunchDirection, AdditionalStrength, ThrowTypeData);
		}

    	Velocity += Acceleration * TimeStep;
        
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

// Creates separate copies of the supplied die items and adds them to the combat deck.
void ADTCombatPlayerController::LoadDeck(const TArray<UDTDiceItemInstance*>& Deck)
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

// Selects the unit starting its turn if it is a hero; otherwise clears the hero selection.
void ADTCombatPlayerController::HandleUnitTurnStarted(ADTTurnBaseUnit* Unit)
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
	if (ADTHeroCharacter* PlayerUnit = Cast<ADTHeroCharacter>(Unit))
	{
		TrySelectHero(PlayerUnit);
	}
	else
	{
		DeselectUnit();
	}
}

// Clears the selected hero if that hero is the unit whose turn ended.
void ADTCombatPlayerController::HandleUnitTurnEnded(ADTTurnBaseUnit* Unit)
{
	if (PossessedHero == Unit)
	{
		DeselectUnit();
	}
}


// Saves the camera pawn when this controller takes possession of it, then sends it the current selection and aiming state.
void ADTCombatPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	CombatCamera = Cast<ADTCameraPawn>(InPawn);
	RefreshCameraSelection();
}

// Cancels aiming and disconnects menu, ability and combat-end listeners when this controller leaves play.
void ADTCombatPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	CancelCombatInput();
	if (UIActionRouter)
	{
		UIActionRouter->OnActiveInputConfigChanged().RemoveAll(this);
	}
	if (BoundASC)
	{
		BoundASC->AbilityActivatedCallbacks.RemoveAll(this);
		BoundASC->AbilityEndedCallbacks.RemoveAll(this);
	}
	if (UDTCombatBridgeSubsystem* CombatBridge = GetWorld()->GetSubsystem<UDTCombatBridgeSubsystem>())
	{
		CombatBridge->OnCombatEnded.RemoveDynamic(this, &ADTCombatPlayerController::OnCombatEnded);
	}
	Super::EndPlay(EndPlayReason);
}

// --------------------------------------3C: Hero selection and camera selection------------------------------------

// Allows combat input during the player turn when the game is not paused and a menu is not taking the input.
bool ADTCombatPlayerController::CanAcceptCombatInput() const
{
	return HasTurn() && !UGameplayStatics::IsGamePaused(this)
		&& (!UIActionRouter || UIActionRouter->GetActiveInputMode() != ECommonInputMode::Menu);
}

// Checks for a hero under the mouse or screen center and passes the hit actor to the selection function.
void ADTCombatPlayerController::OnSelectInput()
{
	if (!CanAcceptCombatInput() || bWaitingForAbilityToEnd)
	{
		return;
	}
	FHitResult Hit;
	if (TraceAimTarget(Hit, true))
	{
		TrySelectActor(Hit.GetActor());
	}
}

// Selects the nearest allowed hero to the camera-left or camera-right of the selected hero.
// With no selected hero, chooses the nearest allowed hero to the camera position.
void ADTCombatPlayerController::OnCycleHeroInput(float Direction)
{
	if (!CanAcceptCombatInput() || bWaitingForAbilityToEnd || FMath::IsNearlyZero(Direction))
	{
		return;
	}
	FVector ViewLocation;
	FRotator ViewRotation;
	GetPlayerViewPoint(ViewLocation, ViewRotation);
	const FRotator ViewYaw(0.f, ViewRotation.Yaw, 0.f);
	const FVector CameraRight = ViewYaw.RotateVector(FVector::RightVector);
	const bool bHasSelectedHero = HasHeroSelected();
	FVector Origin = ViewLocation;
	if (bHasSelectedHero)
	{
		Origin = PossessedHero->GetActorLocation();
	}
	else if (CombatCamera)
	{
		Origin = CombatCamera->GetActorLocation();
	}

	ADTHeroCharacter* ClosestHero = nullptr;
	double ClosestDistanceSquared = 0.0;
	for (TActorIterator<ADTHeroCharacter> It(GetWorld()); It; ++It)
	{
		ADTHeroCharacter* Hero = *It;
		if (!IsValid(Hero) || Hero == PossessedHero.Get() || !CanPossessUnit(Hero))
		{
			continue;
		}
		const FVector Offset = Hero->GetActorLocation() - Origin;
		if (bHasSelectedHero)
		{
			const double Side = FVector::DotProduct(Offset, CameraRight);
			if (Direction < 0.f && Side >= 0.0)
			{
				continue;
			}
			if (Direction > 0.f && Side <= 0.0)
			{
				continue;
			}
		}
		const double DistanceSquared = Offset.SizeSquared2D();
		if (!ClosestHero || DistanceSquared < ClosestDistanceSquared)
		{
			ClosestHero = Hero;
			ClosestDistanceSquared = DistanceSquared;
		}
	}
	if (ClosestHero)
	{
		TrySelectHero(ClosestHero);
	}
}

// Tells the camera which hero is selected and whether throw preparation should use the aiming view.
void ADTCombatPlayerController::RefreshCameraSelection()
{
	if (CombatCamera)
	{
		ADTHeroCharacter* SelectedHero = PossessedHero.Get();
		if (!IsValid(SelectedHero))
		{
			SelectedHero = nullptr;
		}
		CombatCamera->SetSelectedHero(SelectedHero);
		CombatCamera->SetThrowAimActive(bPreparingThrow && HasHeroSelected() && HasDiceSelected());
	}
}

// 3C: Dice selection

// Selects a die by its position in the available-dice list. the first position is 0.
void ADTCombatPlayerController::SelectDiceByIndex(int DiceIndex)
{
	if (!HasHeroSelected())
	{
		return;
	}
	const TArray<UDTDiceItemInstance*> AvailableDice = DeckComponent->GetAvailableDiceInOrder();
	if (!AvailableDice.IsValidIndex(DiceIndex))
	{
		return;
	}
	SelectDice(AvailableDice[DiceIndex]);
}

// Selects the previous or next available die, wrapping around at either end of the list.
void ADTCombatPlayerController::OnCycleDiceInput(float Direction)
{
	if (!CanAcceptCombatInput() || !HasHeroSelected() || bWaitingForAbilityToEnd)
	{
		return;
	}
	const TArray<UDTDiceItemInstance*> AvailableDice = DeckComponent->GetAvailableDiceInOrder();
	if (AvailableDice.IsEmpty())
	{
		return;
	}
	int NextIndex = AvailableDice.IndexOfByKey(CurrentDice.Get());
	if (Direction < 0.f)
	{
		if (NextIndex == INDEX_NONE)
		{
			NextIndex = AvailableDice.Num();
		}
		NextIndex--;
	}
	else
	{
		NextIndex++;
	}

	if (NextIndex < 0)
	{
		NextIndex = AvailableDice.Num() - 1;
	}
	else if (NextIndex >= AvailableDice.Num())
	{
		NextIndex = 0;
	}
	SelectDice(AvailableDice[NextIndex]);
}

// 3C: Aim target and throwing

// Checks whether the player is using a controller.
bool ADTCombatPlayerController::IsUsingGamepadAim() const
{
	return CommonInputSubsystem && CommonInputSubsystem->GetCurrentInputType() == ECommonInputType::Gamepad;
}

// Finds a point in the world under the mouse, or at the screen center when using a controller.
// Uses the hero-selection channel when selecting, otherwise uses Visibility and ignores the selected hero.
bool ADTCombatPlayerController::TraceAimTarget(FHitResult& OutHit, bool bSelectHero) const
{
	if (!CombatInputConfig)
	{
		return false;
	}
	FVector2D ScreenPosition;
	if (IsUsingGamepadAim())
	{
		int SizeX = 0;
		int SizeY = 0;
		GetViewportSize(SizeX, SizeY);
		if (SizeX <= 0 || SizeY <= 0)
		{
			return false;
		}
		ScreenPosition = FVector2D(SizeX, SizeY) * 0.5;
	}
	else
	{
		float MouseX = 0.f;
		float MouseY = 0.f;
		if (!GetMousePosition(MouseX, MouseY))
		{
			return false;
		}
		ScreenPosition = FVector2D(MouseX, MouseY);
	}

	FVector RayOrigin;
	FVector RayDirection;
	if (!DeprojectScreenPositionToWorld(ScreenPosition.X, ScreenPosition.Y, RayOrigin, RayDirection))
	{
		return false;
	}
	ECollisionChannel TraceChannel = ECC_Visibility;
	FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(CombatAim), true);
	if (bSelectHero)
	{
		TraceChannel = CombatInputConfig->HeroSelectionChannel;
		QueryParams.bTraceComplex = false;
	}
	else
	{
		QueryParams.AddIgnoredActor(PossessedHero.Get());
	}
	return GetWorld()->LineTraceSingleByChannel(OutHit, RayOrigin,
		RayOrigin + RayDirection * CombatInputConfig->AimTraceDistance, TraceChannel, QueryParams);
}

// Saves the point found in TraceAimTarget
void ADTCombatPlayerController::UpdateAimTarget()
{
	FHitResult Hit;
	bHasValidAimTarget = HasHeroSelected() && TraceAimTarget(Hit);
	if (bHasValidAimTarget)
	{
		CachedDestination = Hit.Location;
	}
}

// With a hero and die selected, the first press starts aiming and charging; the next press tries to throw at the current aim point.
// Without a die, selects a hero if needed or tries the selected power or movement action.
void ADTCombatPlayerController::OnConfirmInput()
{
	if (!CombatInputConfig || !CanAcceptCombatInput() || bWaitingForAbilityToEnd)
	{
		return;
	}
	if (!HasHeroSelected())
	{
		OnSelectInput();
		return;
	}
	if (HasDiceSelected())
	{
		if (bPreparingThrow)
		{
			UpdateAimTarget();
			if (bHasValidAimTarget)
			{
				TryTriggerAbility(CachedStrength);
				// The throw ability reads the target and strength synchronously during activation.
				CancelCombatInput();
			}
			return;
		}
		//asks if the hero can still throw a dice
		if (IDTDiceAbilityCaster::Execute_CanCastSpell(PossessedHero))
		{
			bPreparingThrow = true;
			bChargingThrow = true;
			CachedStrength = 0.f;
			RefreshCameraSelection();
		}
		return;
	}

	// Latch the same world target used by the preview before ability activation.
	UpdateAimTarget();
	if (bHasValidAimTarget)
	{
		TryTriggerAbility(CachedStrength);
	}
}

// Stops automatic charging when confirm is released, keeping the current strength and aiming mode.
void ADTCombatPlayerController::OnConfirmReleasedInput()
{
	bChargingThrow = false;
}

// Stops preparation and charging, then tells the camera to follow the die that was actually spawned.
void ADTCombatPlayerController::NotifyDiceThrown(ADTDice* SpawnedDice)
{
	bPreparingThrow = false;
	bChargingThrow = false;
	if (CombatCamera)
	{
		CombatCamera->SetThrowAimActive(false);
		CombatCamera->FollowThrownDice(SpawnedDice);
	}
}

// 3C: Cancelling actions and menu input

// Cancels throw preparation first, then a die or power selection, then the hero selection on later cancel presses.
void ADTCombatPlayerController::OnCancelInput()
{
	if (!CanAcceptCombatInput() || bWaitingForAbilityToEnd)
	{
		return;
	}
	if (bPreparingThrow)
	{
		CancelCombatInput();
	}
	else if (HasDiceSelected() || HasPowerSelected())
	{
		CancelAbilitySelection();
	}
	else
	{
		DeselectUnit();
	}
}

// Stops throw preparation and charging, clears strength and aim validity, and asks the camera to leave the aiming view.
void ADTCombatPlayerController::CancelCombatInput()
{
	bPreparingThrow = false;
	bChargingThrow = false;
	CachedStrength = 0.f;
	bHasValidAimTarget = false;
	if (CombatCamera)
	{
		CombatCamera->SetThrowAimActive(false);
	}
}

// Cancels throw preparation when Unreal clears held inputs, then lets the parent clear those inputs.
void ADTCombatPlayerController::FlushPressedKeys()
{
	CancelCombatInput();
	Super::FlushPressedKeys();
}

// Cancels throw preparation when a menu takes over input.
void ADTCombatPlayerController::OnUIInputConfigChanged(FUIInputConfig InputConfig)
{
	if (InputConfig.GetInputMode() == ECommonInputMode::Menu)
	{
		CancelCombatInput();
	}
}

// 3C: Camera controls

// Passes movement input to the camera, scaled by frame time so its speed stays consistent.
void ADTCombatPlayerController::OnMoveCameraInput(FVector2D Input)
{
	if (CanAcceptCombatInput() && CombatCamera && !bWaitingForAbilityToEnd)
	{
		CombatCamera->MoveCamera(Input * GetWorld()->GetDeltaSeconds());
	}
}

// Passes rotation input to the camera, scaled by frame time so its speed stays consistent.
void ADTCombatPlayerController::OnRotateCameraInput(FVector2D Input)
{
	if (CanAcceptCombatInput() && CombatCamera && !bWaitingForAbilityToEnd)
	{
		CombatCamera->RotateCamera(Input * GetWorld()->GetDeltaSeconds());
	}
}

// Adjusts throw strength while preparing a throw; otherwise passes the input to camera zoom.
void ADTCombatPlayerController::OnZoomCameraInput(float Amount)
{
	if (!CanAcceptCombatInput() || bWaitingForAbilityToEnd)
	{
		return;
	}
	if (bPreparingThrow)
	{
		CachedStrength = FMath::Clamp(CachedStrength + Amount * CombatInputConfig->ThrowStrengthStep,
			0.f, CombatInputConfig->MaximumThrowStrength);
	}
	else if (CombatCamera)
	{
		CombatCamera->ZoomCamera(Amount);
	}
}

// Cancels throw preparation and asks the camera to switch between Hero and Overview when input is allowed.
void ADTCombatPlayerController::OnOverviewInput()
{
	if (CanAcceptCombatInput() && CombatCamera && !bWaitingForAbilityToEnd)
	{
		CancelCombatInput();
		CombatCamera->ToggleOverview();
	}
}
//---------------------------------------------------------------------------------------------------------------------------------

// Selects the current hero power when combat input is allowed.
void ADTCombatPlayerController::OnHeroPowerInput()
{
	if (CanAcceptCombatInput() && HasHeroSelected() && !bWaitingForAbilityToEnd)
	{
		SelectHeroPower(PossessedHero->GetHeroPowerDefinition());
	}
}

// Asks to finish the player turn when combat input is allowed.
void ADTCombatPlayerController::OnEndTurnInput()
{
	if (CanAcceptCombatInput())
	{
		FinishTurn();
	}
}

// Marks the player turn as inactive, cancels aiming, and clears the hero selection.
void ADTCombatPlayerController::OnCombatEnded(bool bWon)
{
	bReceivedTurn = false;
	CancelCombatInput();
	DeselectUnit();
}

