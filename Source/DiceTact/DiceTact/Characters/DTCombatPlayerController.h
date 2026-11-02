


// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Hero/DTHeroCharacter.h"
#include "Components/DecalComponent.h"
#include "AbilitySystemComponent.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnReceiver.h"
#include "GameFramework/PlayerController.h"
#include "JUE/JUEBaseController.h"
#include "DTCombatPlayerController.generated.h"

class UDTDiceMovementComponent;
class UDTDiceItemInstance;
class UDTGameStartData;
class UDTCombatDeckComponent;
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;
class UPathFollowingComponent;
class ADTCameraPawn;
class ADTDice;
class UCommonInputSubsystem;
class UCommonUIActionRouterBase;
class UDTCombatInputConfig;
class UDTDiceThrowAbility;
struct FUIInputConfig;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  Player controller for a top-down perspective game.
 *  Implements point and click based controls
 */
UENUM(BlueprintType)
enum class EAbilitySelectionState : uint8
{
	None,
	Targeting
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnitSelected, ADTHeroCharacter*, Unit);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnitDeselected, ADTHeroCharacter*, Unit);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDiceSelectionChanged, UDTDiceItemInstance*, SelectedDice);

UCLASS(abstract, DisplayName="Dice Tact Player Controller (Combat)")
class ADTCombatPlayerController : public AJUEBaseController, public IDTTurnReceiver
{
	GENERATED_BODY()
	
public:

	/* Constructor */
	ADTCombatPlayerController();
	virtual void OnPossess(APawn* InPawn) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void FlushPressedKeys() override;

	void NotifyDiceThrown(ADTDice* SpawnedDice);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void CancelCombatInput();

	UFUNCTION(BlueprintPure, Category = "Targeting")
	bool HasValidAimTarget() const { return bHasValidAimTarget; }

	UFUNCTION(BlueprintPure, Category = "Targeting")
	bool IsUsingGamepadAim() const;

	UFUNCTION(BlueprintPure, Category = "Targeting")
	bool IsPreparingThrow() const { return bPreparingThrow; }

	UFUNCTION(BlueprintCallable, Category = "Party|Abilities")
	void SelectDice(UDTDiceItemInstance* DiceItemInstance);

	// Index 0 selects the first available die in deck order.
	UFUNCTION(BlueprintCallable, Category = "Party|Abilities")
	void SelectDiceByIndex(int DiceIndex);

	UPROPERTY(BlueprintAssignable, Category = "Party|Abilities")
	FOnDiceSelectionChanged OnDiceSelectionChanged;
	
	UFUNCTION(BlueprintCallable, Category = "Party|Abilities")
	void SelectAbility(TSubclassOf<UGameplayAbility> AbilityClass);

	UFUNCTION(BlueprintCallable, Category = "Party|Abilities")
	void SelectHeroPower(UDTHeroPowerDefinition* HeroPower);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Party")
	void OnHeroSelected(ADTHeroCharacter* SelectedUnit);
	UFUNCTION(BlueprintImplementableEvent, Category = "Party")
	void OnHeroDeselected(ADTHeroCharacter* SelectedUnit);

	UPROPERTY(BlueprintAssignable)
	FOnUnitSelected OnUnitSelected;
	UPROPERTY(BlueprintAssignable)
	FOnUnitSelected OnUnitDeselected;

	/* IDTTurnReceiver Interface begin */
	virtual FOnTurnFinished& GetFinishedTurnDelegate() override
	{return OnTurnFinished;}
	
	UPROPERTY(BlueprintAssignable)
	FOnTurnFinished OnTurnFinished;
	
	virtual AActor* GetControlledActor_Implementation() override;
	virtual void ReceiveTurn_Implementation() override;
	/* IDTTurnReceiver Interface End */
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasTurn() const;
protected:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnSelectInput();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnConfirmInput();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnConfirmReleasedInput();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnCancelInput();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnCycleHeroInput(float Direction);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnCycleDiceInput(float Direction);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnMoveCameraInput(FVector2D Input);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnRotateCameraInput(FVector2D Input);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnZoomCameraInput(float Amount);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnOverviewInput();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnHeroPowerInput();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void OnEndTurnInput();

	UFUNCTION(BlueprintCallable)
	void FinishTurn();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="OnTurnFinished")
	void K2_OnTurnFinished();
	
public:


	UFUNCTION(BlueprintCallable, Category = "Action")
	void ResetCamera();

	UFUNCTION(BlueprintCallable, Category = "Destination")
	FVector GetCachedDestination();
	UFUNCTION(BlueprintCallable, Category = "Destination")
	void SetCachedDestination(FVector vector);

	UFUNCTION(BlueprintCallable)
	void SetCachedStrength(float value);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetCachedStrength() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasAbilitySelected() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TSubclassOf<UGameplayAbility> GetSelectedAbility() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasDiceSelected() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTDiceItemInstance* GetSelectedDice() const;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selection")
	TObjectPtr<UDTHeroPowerDefinition> CurrentPower;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasPowerSelected() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTHeroPowerDefinition* GetSelectedPower() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool TryActivateHeroPower(bool bClearPowerIfUsed = true);
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnHeroPowerUsed();

	UFUNCTION(BlueprintImplementableEvent)
	void OnDiceSelected(const UDTDiceItemInstance* DiceItemInstance);
	UFUNCTION(BlueprintImplementableEvent)
	void OnDiceDeselected();
public:
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasHeroSelected() const;
	UFUNCTION(BlueprintCallable, Category = "Unit")
	ADTHeroCharacter* GetSelectedHero() const;

	void LoadDeck(const TArray<UDTDiceItemInstance*>& Deck);
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Previsualisation")
	bool bShowDebugRay = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Config|Input")
	TObjectPtr<UDTCombatInputConfig> CombatInputConfig;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Action")
	TObjectPtr<ADTHeroCharacter> PossessedHero;

	bool bWaitingForAbilityToEnd = false;
	UPROPERTY(VisibleAnywhere)
	bool bReceivedTurn = false;

	/* Asset References */
	UPROPERTY(EditDefaultsOnly, Category = "Asset References")
	TObjectPtr<UMaterialInterface> AbilityRangeDecalMaterial;
	
	/* Component References */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Deck")
	TObjectPtr<UDTCombatDeckComponent> DeckComponent;
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> BoundASC = nullptr;
	UPROPERTY(Transient)
    TObjectPtr<UDecalComponent> AbilityRangeDecalComponent = nullptr;
	

	/* Variables changing In real time */
	UPROPERTY(BlueprintReadOnly, Category = "Party|Abilities")
	EAbilitySelectionState AbilitySelectionState = EAbilitySelectionState::None;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selection")
	TSubclassOf<UGameplayAbility> CurrentlySelectedAbility;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selection")
	TObjectPtr<UDTDiceItemInstance> CurrentDice;
	
	UPROPERTY(BlueprintReadWrite, Category = "Destination")
	FVector CachedDestination = FVector::ZeroVector;
	//temporary solution to cut when we activate through handle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	float CachedStrength;

	//REALLY NEED A PROPER CAMERA SYSTEM
	//I agree (Justin)
	//I concur (Meow7)
	UPROPERTY()
	FTimerHandle CameraResetTimer;
	UPROPERTY()
	float CameraBlendTime = 0.75f;
	
	void ResetCameraPawn(ADTHeroCharacter* character);
	
	UFUNCTION(BlueprintCallable, Category = "Selection")
	void TrySelectActor(AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void HandlePrimaryAction(float strength = 0);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void TryTriggerAbility(float strength = 0);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void TrySelectHero(ADTHeroCharacter* Unit);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void DeselectUnit();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void CancelAbilitySelection();
	
	void DrawTargetingRay();

	void BindAbilitySystemToController(ADTHeroCharacter* InPawn);
	void OnPlayerAbilityStart(UGameplayAbility* Ability);
	void OnPlayerAbilityEnd(UGameplayAbility* Ability);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUnitExhaustedThrows(ADTHeroCharacter* unit);
	/*
	void ResetDefaultAbilityOfUnit(ADTHeroCharacter* character);
	*/

	UFUNCTION()
	void ShowAbilityRange(float Range);
	UFUNCTION()
	void HideAbilityRange();
	
	UFUNCTION(BlueprintCallable)
	TArray<FVector> PredictTrajectory(
        float AdditionalStrength,
        const UDTThrowTypeData* ThrowTypeData,
        float TimeStep = 0.01f,
        float MaxSimulationTime = 5.f,
        float DrawInterval = 0.1f,
        bool bDrawDebug = true);
	
	UFUNCTION(BlueprintNativeEvent, Category = "Party")
	bool CanPossessUnit(ADTHeroCharacter* Unit) const;
	virtual bool CanPossessUnit_Implementation(ADTHeroCharacter* Unit) const
	{
		return HasTurn();
	}
	
	

	UFUNCTION()
	void HandleUnitTurnStarted(ADTTurnBaseUnit* Unit);
	UFUNCTION()
	void HandleUnitTurnEnded(ADTTurnBaseUnit* Unit);

private:
	bool CanAcceptCombatInput() const;
	bool TraceAimTarget(FHitResult& OutHit, bool bSelectHero = false) const;
	void UpdateAimTarget();
	void RefreshCameraSelection();
	void OnUIInputConfigChanged(FUIInputConfig InputConfig);

	UFUNCTION()
	void OnCombatEnded(bool bWon);

	UPROPERTY(Transient)
	TObjectPtr<ADTCameraPawn> CombatCamera;

	UPROPERTY(Transient)
	TObjectPtr<UCommonInputSubsystem> CommonInputSubsystem;

	UPROPERTY(Transient)
	TObjectPtr<UCommonUIActionRouterBase> UIActionRouter;

	UPROPERTY(Transient)
	TObjectPtr<UDTDiceThrowAbility> SelectedThrowDefaults;

	bool bPreparingThrow = false;
	bool bChargingThrow = false;
	bool bHasValidAimTarget = false;
};
