// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "Engine/DataAsset.h"
#include "DTGlueTrapData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTGlueTrapData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Glue Trap|Radius")
	float BaseRadius = 250;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Glue Trap|Radius")
	float RadiusPerLevel = 10;

	// Duration in turn
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Glue Trap|Duration")
	int BaseDuration = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Glue Trap|Duration")
	int DurationPerLevel = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Glue Trap|Effect")
	TSubclassOf<UGameplayEffect> ImmobilizedEffect;
};
