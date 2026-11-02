// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTLightningData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTLightningData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Object Type")
	TArray<TEnumAsByte<EObjectTypeQuery>> HitObjectTypes;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Initial")
	float SizeOfInitialExplosion =  250.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Initial")
	float SizeOfInitialExplosionPerLevel =  250.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Initial")
	float SizeOfOtherExplosion =  250.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Initial")
	float SizeOfOtherExplosionPerLevel =  250.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MaxSizeOfExplosion = 100;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	int MaxExplosions = 5;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radius")
	int AdditionalExplosionPerLevel = 2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Chain")
	float DelayBetweenWaves = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impulsion")
	float UpwardImpulsion = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impulsion")
	float XYImpulsion = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	float Damage = 5.f;
	
};
