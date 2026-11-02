// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Abilities/AbilityActors/DTMagicMissileLauncherActor.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "Engine/DataAsset.h"
#include "DTMagicMissileData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTMagicMissileData : public UPrimaryDataAsset
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
	float BaseRadius = 100;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	float AdditionalRadius = 10;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MinDelayBetweenProjectiles = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MaxDelayBetweenProjectiles = 0.8f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MagicMissile")
	TSubclassOf<ADTMagicMissileLauncherActor> MagicMissileLauncherToSpawn;
	
};
