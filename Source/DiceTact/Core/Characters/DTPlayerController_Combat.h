// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Hero/HeroCharacter.h"
#include "Components/DecalComponent.h"
#include "AbilitySystemComponent.h"
#include "Core/TurnBaseSystem/DTTurnReceiver.h"
#include "GameFramework/PlayerController.h"
#include "JUE/JUEBaseController.h"
#include "DTPlayerController_Combat.generated.h"

class UDiceMovementComponent;
class UDTDiceItemInstance;
class UDTGameStartData;
class UDTCombatDeckComponent;
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;
class UPathFollowingComponent;

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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnitSelected, AHeroCharacter*, unit);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnitDeselected, AHeroCharacter*, unit);
UCLASS(abstract, DisplayName="Dice Tact Player Controller (Combat)")
class ADTPlayerController_Combat : public AJUEBaseController, public IDTTurnReceiver
{
	GENERATED_BODY()
public:

	/** Constructor */
	ADTPlayerController_Combat();

	UFUNCTION(BlueprintCallable, Category = "Party|Abilities")
	void SelectDice(UDTDiceItemInstance* DiceItemInstance);
	
	UFUNCTION(BlueprintCallable, Category = "Party|Abilities")
	void SelectAbility(TSubclassOf<UGameplayAbility> AbilityClass);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Party")
	void OnUnitPossessed(AHeroCharacter* NewUnit);

	UPROPERTY(BlueprintAssignable)
	FOnUnitSelected OnUnitSelected;
	UPROPERTY(BlueprintAssignable)
	FOnUnitSelected OnUnitDeselected;

	/* IDTTurnReceiver Interface begin */
	virtual FOnTurnFinished& GetFinishedTurnDelegate() override;

	UPROPERTY(BlueprintAssignable, BlueprintReadOnly)
	FOnTurnFinished OnTurnFinished;
	virtual void ReceiveTurn_Implementation() override;
	
protected:
	UFUNCTION(BlueprintCallable)
	void FinishTurn();
	
public:


	UFUNCTION(BlueprintCallable, Category = "Action")
	void ResetCamera();

	UFUNCTION(BlueprintCallable, Category = "Destination")
	FVector GetCachedDestination();
	UFUNCTION(BlueprintCallable, Category = "Destination")
	void SetCachedDestination(FVector vector);

	//temporary solution to cut when we activate through handle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action")
	float cachedStrength;
	UFUNCTION(BlueprintCallable)
	void SetCachedStrength(float value);
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
	UFUNCTION(BlueprintCallable, Category = "Party|Abilities")
	void SelectUnitPower(UDTHeroPowerDefinition* power);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasUnitSelected() const;
	UFUNCTION(BlueprintCallable, Category = "Unit")
	AHeroCharacter* GetPossessedUnit() const;
	
	void LoadDeck(const TArray<UDTDiceItemInstance*>& Deck);
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Action")
	TObjectPtr<AHeroCharacter> PossessedUnit;

	bool bWaitingForAbilityToEnd = false;

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

	//turn system to change into a subsystem (ask louis if best implementation)
	UPROPERTY()
	TObjectPtr<UTurnBaseComponent> TurnManager = nullptr;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UTurnBaseComponent* GetTurnManager();

	/* Variables changing In real time */
	UPROPERTY(BlueprintReadOnly, Category = "Party|Abilities")
	EAbilitySelectionState AbilitySelectionState = EAbilitySelectionState::None;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selection")
	TSubclassOf<UGameplayAbility> CurrentlySelectedAbility;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Selection")
	TObjectPtr<UDTDiceItemInstance> CurrentDice;
	
	UPROPERTY(BlueprintReadWrite, Category = "Destination")
	FVector CachedDestination = FVector::ZeroVector;

	//REALLY NEED A PROPER CAMERA SYSTEM
	//I agree (Justin)
	//I concur (Meow7)
	UPROPERTY()
	FTimerHandle CameraResetTimer;
	UPROPERTY()
	float CameraBlendTime = 0.75f;
	
	void ResetCameraPawn(AHeroCharacter* character);
	
	UFUNCTION(BlueprintCallable, Category = "Selection")
	void TrySelectActor(AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void HandlePrimaryAction(float strength = 0);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void TryTriggerAbility(float strength = 0);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void TryPossess(AHeroCharacter* Unit);
	UFUNCTION(BlueprintCallable, Category = "Action")
	void DeselectUnit();
	
	void DrawTargetingRay();

	void BindAbilitySystemToController(AHeroCharacter* InPawn);
	void OnPlayerAbilityStart(UGameplayAbility* Ability);
	void OnPlayerAbilityEnd(UGameplayAbility* Ability);
	void ResetDefaultAbilityOfUnit(AHeroCharacter* character);


	UFUNCTION()
	void ShowAbilityRange(float Range);
	UFUNCTION()
	void HideAbilityRange();
	
	UFUNCTION()
	TArray<FVector> PredictTrajectory(
        float AdditionalStrength,
        const UThrowType* ThrowTypeData,
        float TimeStep = 0.03f,
        float MaxSimulationTime = 5.f,
        float DrawInterval = 0.1f,
        bool bDrawDebug = true);
	
	UFUNCTION(BlueprintNativeEvent, Category = "Party")
	bool CanPossessUnit(AHeroCharacter* Unit) const;
	virtual bool CanPossessUnit_Implementation(AHeroCharacter* Unit) const { return true; }
	
	

	UFUNCTION()
	void HandleUnitTurnStarted(ATurnBaseUnit* Unit);
	UFUNCTION()
	void HandleUnitTurnEnded(ATurnBaseUnit* Unit);
};
