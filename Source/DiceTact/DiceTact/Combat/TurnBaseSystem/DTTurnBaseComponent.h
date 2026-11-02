// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Characters/DTTurnBaseUnit.h"
#include "TurnBaseEncounterTypes/DTEncounterType.h"
#include "UObject/Object.h"
#include "DTTurnBaseComponent.generated.h"

struct FDTPendingAbility;
class IDTTurnReceiver;
class ADTCharetteUnit;
class UDTTurnSystemState;
class ADTEnemyUnit;
class ADTHeroCharacter;
/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatEnd, bool, bHeroesWon);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTurnPhaseChange, FName, NewTurn, bool, bEntered);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnitTurnEvent, AActor*, ActorWithAutority);


UENUM(Blueprintable)
enum class ECombatUnitType : uint8
{
	Hero,
	Charette,
	Enemy
};

UCLASS(Blueprintable)
class DICETACT_API UDTTurnBaseComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:

	void AddPendingAbility(const FDTPendingAbility& NewPendingAbility);

	UFUNCTION(BlueprintCallable, Category = "Units")
	void AddUnitToCombat(ADTTurnBaseUnit* NewUnit, ECombatUnitType InType);

	UFUNCTION(BlueprintCallable, Category = "Units")
	void RemoveUnitFromCombat(ADTTurnBaseUnit* RemovedUnit, ECombatUnitType InType);

	UFUNCTION(BlueprintCallable, Category = "Units")
	void AddTurnReceiver(TScriptInterface<IDTTurnReceiver> NewReceiver, ECombatUnitType InType);

	UFUNCTION(BlueprintCallable, Category = "Units")
	void RemoveTurnReceiver(TScriptInterface<IDTTurnReceiver> RemovedReceiver, ECombatUnitType InType);

	UFUNCTION(BlueprintCallable, Category = "Units", meta=(ToolTip="Call when the TurnBaseUnit has finished its turn."))
	void StartCombat();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FName GetCurrentStateName() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetCurrentTurnIndex() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TArray<FDTPendingAbility>& GetAllPendingAbilities() const;

	UFUNCTION(BlueprintCallable,
		meta=(ToolTip= "Check if the combat is over. The condition is wether either team is dead. Returns wether or not the combat should end."))
	bool PerformCombatStateCheck();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsAlliedTeamDead() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsOpposingTeamDead() const;

	const UDTTurnSystemState* GetCurrentTurnSystemState() const; //Used in Cog ball torure

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnCombatEnd OnCombatEnded;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnUnitTurnEvent OnUnitTurnStarted;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnTurnPhaseChange OnTurnPhaseChanged;

protected:

	/* Pending Abilities */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FDTPendingAbility> PendingAbilities;

	/* Units and Turn Receivers fields */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Units")
	TSet<TObjectPtr<ADTHeroCharacter>> HeroUnits;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn Receivers")
	TArray<TScriptInterface<IDTTurnReceiver>> AlliedTurnReceivers;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Units")
	TSet<TObjectPtr<ADTEnemyUnit>> EnemyUnits;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn Receivers")
	TArray<TScriptInterface<IDTTurnReceiver>> OpponentTurnReceivers;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Units")
	TObjectPtr<ADTCharetteUnit> CharetteUnit;

	/* State Methods */
	friend class UDTTurnSystemState;
	
	UFUNCTION(BlueprintCallable, meta = (DeprecatedFunction, DeprecationMessage = "This function is too brute-forcy for Blueprints \nUse GoToNextPhase() instead."))
	void SetTurnSystemState(TSubclassOf<UDTTurnSystemState> NewTurnSystemState);

	UFUNCTION(BlueprintCallable)
	void GoToNextPhase();
	
	/* State fields */
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDTTurnSystemState> DefaultTurnState;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UDTTurnSystemState> CurrentTurnSystemState;
	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<UDTTurnSystemState>> RegisteredStates;
	UPROPERTY(VisibleAnywhere)
	TArray<TSubclassOf<UDTTurnSystemState>> PhasesInOrderForEncounter;

	int CurrentTurnIndex;
};
