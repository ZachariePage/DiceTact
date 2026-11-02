// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTCatmanPowerData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTCatmanPowerData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Strength")
	float StrengthUpward;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Strength")
	float Torgue;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Size")
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Object Type")
	TArray<TEnumAsByte<EObjectTypeQuery>> HitObjectTypes;
};
