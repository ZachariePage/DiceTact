// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTCageData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTCageData : public UPrimaryDataAsset
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	float defaultSizeOfWall = 100.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	float additionalWallSize = 100.f;

	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "150", ClampMax = "250"))
	float wallGap = 150.f;
};
