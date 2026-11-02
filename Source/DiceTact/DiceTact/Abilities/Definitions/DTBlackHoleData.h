// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTBlackHoleData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTBlackHoleData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Angle",meta = (ClampMin = "0", ClampMax = "1"))
	float Angle = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mass")
	bool useMass = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MaxScatterRadius = 100;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float BaseRadius = 250;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float AdditionalRadius = 50;
};
