// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTBouleDeFeu.generated.h"

class ABouleDeFeuActor;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTBouleDeFeu : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boule")
	TSubclassOf<ABouleDeFeuActor> BouleToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Angle",meta = (ClampMin = "0", ClampMax = "1"))
	float Angle = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float BaseRadius = 250;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float AdditionalRadius = 50;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosion")
	float AdditionalStrength;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosion")
	TArray<TEnumAsByte<EObjectTypeQuery>> PropelledObjectTypes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosion")
	float MinExplosionStrength = 400.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosion")
	float MaxExplosionStrength = 1200.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosion", meta = (ClampMin = "0", ClampMax = "1"))
	float ExplosionUpwardBias = 0.3f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rest")
	float RestVelocityThreshold = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rest")
	float RestCheckInterval = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rest")
	float MaxWaitTime = 5.f;
};
