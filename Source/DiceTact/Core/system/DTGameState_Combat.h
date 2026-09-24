// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Interface/ResolvedAbility.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/GameStateBase.h"
#include "DTGameState_Combat.generated.h"

enum class ECombatUnitType : uint8;
class UTurnBaseComponent;
class AUnitStart;
struct FPendingAbility;
class AHeroCharacter;
/**
 * 
 */
UCLASS()
class DICETACT_API ADTGameState_Combat : public AGameStateBase
{
	GENERATED_BODY()

public:
	ADTGameState_Combat();

	virtual void HandleBeginPlay() override;
	UPROPERTY(BlueprintReadOnly, Category = "Abilities")
	TArray<FPendingAbility> PendingAbilities;


	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void AddPendingAbility(const FPendingAbility& PendingAbility);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void AddDiceToResolve(ADice* DiceToResolve);
	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void RemoveDiceToResolve(ADice* DiceToResolve);

	UFUNCTION(BlueprintCallable, Category = "Dice")
	TArray<ADice*> GetDiceToResolve() const;

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void ResolvePendingAbilities();


	UFUNCTION(BlueprintCallable, Category = "Turn System")
	UTurnBaseComponent* GetTurnManager();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	static AUnitStart* ChooseRandomStart(const TArray<AUnitStart*>& FromUnitStarts);
protected:

	UFUNCTION(BlueprintNativeEvent)
	void OnCombatPreInitialized();

	virtual void SetupDiceDeck();
	UFUNCTION()
	virtual bool SpawnHeroUnits();

	virtual bool SpawnEnemyUnits();

	virtual bool SpawnCart();

	UFUNCTION()
	virtual bool FindUnitStarts();

	//Conserves only the Starts of the provided Type
	void FilterUnitsStartsOfType(TArray<AUnitStart*>& FromUnitStarts, ECombatUnitType FromType);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawning")
	TArray<TObjectPtr<AUnitStart>> UnitStarts;

	//turn manager
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn System")
	TObjectPtr<UTurnBaseComponent> TurnManager;
	

	
	UPROPERTY(BlueprintReadOnly, Category = "Abilities")
	TArray<TObjectPtr<ADice>> DicesToResolve;
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnResolveAbilites();
	
};
