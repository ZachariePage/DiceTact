// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTGameState_Combat.h"
#include "DT_GameState_DebugCombat.generated.h"

class UDTGameStartData;
/**
 * 
 */
UCLASS()
class DICETACT_API ADT_GameState_DebugCombat : public ADTGameState_Combat
{
	GENERATED_BODY()


protected:

	virtual bool SpawnHeroUnits() override;
	virtual void SetupDiceDeck() override;

	void FindHeroCharacters(TArray<AHeroCharacter*>& OutHeroes) const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UDTGameStartData> DebugData;
};
