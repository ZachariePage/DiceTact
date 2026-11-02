// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/System/DiceTactGameMode.h"
#include "Engine/StreamableManager.h"
#include "DTCombatGameMode.generated.h"

struct FCartGameData;
class UDTDiceItemInstance;
enum class ECombatUnitType : uint8;
class UDTTurnBaseComponent;
class ADTUnitStart;
struct FDTPendingAbility;
class ADTHeroCharacter;
class UDTGameStartData;

/**
 * 
 */
UCLASS()
class DICETACT_API ADTCombatGameMode : public ADiceTactGameMode
{
	GENERATED_BODY()
	
public:
	ADTCombatGameMode();

	//Replacing HandleBeginPlay with the regular BeginPlay as the GameMode can now handle it itself
	//virtual void HandleBeginPlay() override;
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	UDTTurnBaseComponent* GetTurnManager();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	static ADTUnitStart* ChooseRandomStart(const TArray<ADTUnitStart*>& FromUnitStarts);
protected:
	
	
	UFUNCTION()
	virtual void OnDicesLoaded();

	//Maybe use later for showing loading...
	TSharedPtr<FStreamableHandle> DiceLoadHandle;

	UFUNCTION(BlueprintNativeEvent)
	void OnCombatLoaded();

	virtual void SetupDeck();

	void AsyncLoadDiceDeck(const TArray<TObjectPtr<UDTDiceItemInstance>>& DiceDeck);
	
	UFUNCTION()
	virtual bool SpawnHeroUnits();

	UFUNCTION()
	virtual bool SpawnEnemyUnits();

	virtual bool SpawnCart();
	virtual FCartGameData GetLoadCartData() const;

	UFUNCTION()
	virtual bool FindUnitStarts();

	//Conserves only the Starts of the provided Type
	void FilterUnitsStartsOfType(TArray<ADTUnitStart*>& FromUnitStarts, ECombatUnitType FromType);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawning")
	TArray<TObjectPtr<ADTUnitStart>> UnitStarts;

	//turn manager
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn System")
	TObjectPtr<UDTTurnBaseComponent> TurnManager;
	
	
	//Only using this ungodly thing to make the deprecated functions work
	friend class ADTCombatGameState;
};
