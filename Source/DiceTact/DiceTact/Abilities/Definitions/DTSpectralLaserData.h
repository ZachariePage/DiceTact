// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTSpectralLaserData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTSpectralLaserData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Size", meta = (ClampMin = 1))
	float Width = 50.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Size", meta = (ClampMin = 0))
	float AdditionalWidthPerLevel = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Object Type")
	TArray<TEnumAsByte<EObjectTypeQuery>> HitObjectTypes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (ClampMin = 0))
	int Damage = 1;
	/**
	 * Additional damage per level. Know that for ex 1.9 damage gets clamped to 1 damage.
	 * Damage is calculated like this:
	 * ClampedDown(Damage + (AdditionalDamagePerLevel * Level))
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (ClampMin = 0.0f))
	float AdditionalDamagePerLevel = 0.0f;
	/**
	 * Tries dealing the Damage amount in multiple equal pulses for more of a laser feel.
	 * Each pulse deals Damage/NumberOfPulses with remainder dealt at the last pulse.
	 * Each pulse also pushes the targets. Set to 0 to disable.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (ClampMin = 1))
	int NumberOfPulses = 3;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Duration", meta = (ClampMin = 0.5f))
	float StartDelay = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Duration", meta = (ClampMin = 0.1f))
	float DelayBetweenPulses = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Duration", meta = (ClampMin = 0.5f))
	float EndDelay = 1.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Push")
	float PushStrengthPerPulse = 500.f;
};
