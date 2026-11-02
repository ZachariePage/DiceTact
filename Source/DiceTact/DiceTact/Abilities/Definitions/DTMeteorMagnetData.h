// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Abilities/AbilityActors/DTMeteorActor.h"
#include "Engine/DataAsset.h"
#include "DTMeteorMagnetData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTMeteorMagnetData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Angle",meta = (ClampMin = "0", ClampMax = "1"))
	float Angle = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mass")
	bool useMass = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectiles")
	float BaseNumberOfProjectile = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectiles")
	float AdditionalProjectile = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float BaseRadius = 250;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float AdditionalRadius = 50;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MinDelayBetweenProjectiles = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MaxDelayBetweenProjectiles = 2.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Meteor")
	TSubclassOf<ADTMeteorActor> MeteorToSpawn;
};
