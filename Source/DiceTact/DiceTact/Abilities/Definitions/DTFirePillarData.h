// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTFirePillarData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTFirePillarData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosions")
	float sizeOfExplosion = 50.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosions")
	float sizeOfExplosionPerLevel = 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Explosions")
	float timeBetweenExplosion;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Object Type")
	TArray<TEnumAsByte<EObjectTypeQuery>> HitObjectTypes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	bool bOnlyOneDamagePerActor = true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage")
	int DamagePerExplosion = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impulsion")
	float UpwardImpulsion = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impulsion")
	float XYImpulsion = 100.f;
};
