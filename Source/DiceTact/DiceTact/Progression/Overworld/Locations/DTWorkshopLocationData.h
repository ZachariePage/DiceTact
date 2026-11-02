// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTOverworldLocationData.h"
#include "DTWorkshopLocationData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, Abstract, DisplayName="Workshop (Overworld Location)")
class DICETACT_API UDTWorkshopLocationData : public UDTOverworldLocationData
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetCartMaxHealthUpgrade() const;

protected:

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta = (ClampMin = 0))
	int CartMaxHealthUpgrade = 5;
};
