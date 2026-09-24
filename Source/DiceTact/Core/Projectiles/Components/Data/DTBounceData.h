// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTBounceData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTBounceData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce")
	float BounceStrength = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce")
	float GroundNormalThreshold = 0.7f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce")
	float BounceDamping = 0.7f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce")
	float MinimumSpeedToBounce = 5.f;
};
