// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTCombatGameMode.h"
#include "Engine/StreamableManager.h"
#include "GameFramework/GameStateBase.h"
#include "DTCombatGameState.generated.h"

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
class DICETACT_API ADTCombatGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	ADTCombatGameState();
	
	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual void HandleBeginPlay() override;


	UFUNCTION(BlueprintCallable, Category = "Turn System", meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	UDTTurnBaseComponent* GetTurnManager();

	UFUNCTION(BlueprintCallable, Category = "Turn System",meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead"))
	static ADTUnitStart* ChooseRandomStart(const TArray<ADTUnitStart*>& FromUnitStarts);
protected:
	
	
	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual void OnDicesLoaded();

	//Maybe use later for showing loading...
	TSharedPtr<FStreamableHandle> DiceLoadHandle;

	UFUNCTION(BlueprintNativeEvent,meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	void OnCombatLoaded();

	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual void SetupDeck();

	//meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime")
	void AsyncLoadDiceDeck(const TArray<TObjectPtr<UDTDiceItemInstance>>& DiceDeck);
	
	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual bool SpawnHeroUnits();

	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual bool SpawnEnemyUnits();

	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual bool SpawnCart();
	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual FCartGameData GetLoadCartData() const;

	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	virtual bool FindUnitStarts();

	//Conserves only the Starts of the provided Type
	UFUNCTION(meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	void FilterUnitsStartsOfType(TArray<ADTUnitStart*>& FromUnitStarts, ECombatUnitType FromType);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Spawning", meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	TArray<TObjectPtr<ADTUnitStart>> UnitStarts;

	//turn manager
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn System",meta=(DeprecatedFunction, DeprecationMessage="Function has been deprecated, please use DTCombatGameMode instead. \nRouted through DTCombatGamemode in the meantime"))
	TObjectPtr<UDTTurnBaseComponent> TurnManager;

private:
	ADTCombatGameMode* GetCombatGameMode(UWorld* World) const;

};
