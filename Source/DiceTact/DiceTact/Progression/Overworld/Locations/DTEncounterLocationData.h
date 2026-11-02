// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTOverworldLocationData.h"
#include "DTEncounterLocationData.generated.h"

/**
 * 
 */

UCLASS(Blueprintable, Abstract, DisplayName="Encounter (Overworld Location)")
class DICETACT_API UDTEncounterLocationData : public UDTOverworldLocationData
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TSoftObjectPtr<UWorld> GetEncounterMap() const;

protected:

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	TSoftObjectPtr<UWorld> EncounterMap;
};
