// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTCombatGameState.h"
#include "DTDebugCombatGameMode.generated.h"

class UDTGameStartData;
/**
 * 
 */
UCLASS()
class DICETACT_API ADTDebugCombatGameMode : public ADTCombatGameMode
{
	GENERATED_BODY()


protected:

	virtual bool SpawnHeroUnits() override;

	virtual void SetupDeck() override;
	virtual void OnDicesLoaded() override;

	virtual FCartGameData GetLoadCartData() const override;

	void FindHeroCharacters(TArray<ADTHeroCharacter*>& OutHeroes) const;
	
	TObjectPtr<UDTGameStartData> GetDebugData() const;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//TObjectPtr<UDTGameStartData> DebugData;
};
