// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTDogManPowerData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTDogManPowerData : public UPrimaryDataAsset
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditAnywhere)
	float strength = 200.f;
};
