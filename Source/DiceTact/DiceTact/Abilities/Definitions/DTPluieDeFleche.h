// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTPluieDeFleche.generated.h"

/**
 * 
 */
class ADTArrowActor;
UCLASS()
class DICETACT_API UDTPluieDeFleche : public UPrimaryDataAsset
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
	float BaseNumberOfProjectile = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float AdditionalProjectile = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MinDelayBetweenProjectiles = 0.05f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MaxDelayBetweenProjectiles = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Arrow")
	TSubclassOf<ADTArrowActor> ArrowToSpawn;
};
