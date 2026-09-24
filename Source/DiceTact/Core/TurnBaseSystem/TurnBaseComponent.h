// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Characters/TurnBaseUnit.h"
#include "UObject/Object.h"
#include "TurnBaseComponent.generated.h"

class IDTTurnReceiver;
class ACharetteUnit;
class UTurnSystemState;
class AEnemyUnit;
class AHeroCharacter;
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
class DICETACT_API UTurnBaseComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:


	UFUNCTION(BlueprintCallable, Category = "Units")
	void AddUnitToCombat(ATurnBaseUnit* NewUnit, ECombatUnitType InType);

	UFUNCTION(BlueprintCallable, Category = "Units", meta=(ToolTip="Call when the TurnBaseUnit has finished its turn."))
	void StartCombat();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	FName GetCurrentState() const;

	UPROPERTY(BlueprintAssignable)
	FOnCombatEnd OnCombatEnded;

	UPROPERTY(BlueprintAssignable)
	FOnUnitTurnEvent OnUnitTurnStarted;

	UPROPERTY(BlueprintAssignable)
	FOnTurnPhaseChange OnTurnPhaseChanged;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Units")
	TArray<TObjectPtr<AHeroCharacter>> HeroUnits;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn Receivers")
	TArray<TObjectPtr<IDTTurnReceiver>> AlliedTurnReceivers;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Units")
	TArray<TObjectPtr<AEnemyUnit>> EnemyUnits;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn Receivers")
	TArray<TScriptInterface<IDTTurnReceiver>> OpponentTurnReceivers;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Units")
	TObjectPtr<ACharetteUnit> CharetteUnit;

	/* State Methods and fields */
	friend class UTurnSystemState;
	UFUNCTION(BlueprintCallable)
	void SetTurnSystemState(TSubclassOf<UTurnSystemState> NewTurnSystemState);

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UTurnSystemState> DefaultTurnState;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UTurnSystemState> CurrentTurnSystemState;

	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<UTurnSystemState>> RegisteredStates;
};
