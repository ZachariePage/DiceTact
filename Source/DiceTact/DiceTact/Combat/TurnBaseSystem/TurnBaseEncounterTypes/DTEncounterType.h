// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Combat/TurnBaseSystem/TurnBaseStates/DTTurnSystemState.h"
#include "Engine/DataAsset.h"
#include "DTEncounterType.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTEncounterType : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UDTTurnSystemState>> PhasesInOrder;
};
