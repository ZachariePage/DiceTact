// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "DTEncounterBattleInfo.generated.h"

/*
 *	TEMPORARY SOLUTION FOR PER-LEVEL DATA
 *	There should be ONLY 1 per level
 *	Holds the data about what is the next level after that (if won)
 */

class UDTDiceItemInstance;

UCLASS()
class DICETACT_API ADTEncounterBattleInfo : public AInfo
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTEncounterBattleInfo();

protected:

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	TSoftObjectPtr<UWorld> NextLevel;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	TObjectPtr<UDTDiceItemInstance> GrantedDiceOnVictory;
	
};
