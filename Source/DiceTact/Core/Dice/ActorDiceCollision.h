// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActorDiceCollision.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UActorDiceCollision : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MaxDiceImpulseSpeed = 1000.f;
	UPROPERTY(EditAnywhere)
	float MinDiceImpulseSpeed = 100.f;

	UPROPERTY(EditAnywhere)
	float MinimumSpeed = 150.f;

	UPROPERTY(EditAnywhere)
	float MaxSpeed = 600.f;
	UPROPERTY(EditAnywhere)
	float UpwardImpulseStrength = 0.f;

	UPROPERTY(EditAnywhere)
	float Torque = 500.f;

	UPROPERTY(EditAnywhere,  meta = (ClampMin = "0", ClampMax = "1"))
	float MinimumUpwardImpulse = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Torgue")
	float RandomTorqueX = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Torgue")
	float RandomTorqueY = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Torgue")
	float RandomTorqueZ = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Torgue")
	float MinimumRandomTorqueX = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Torgue")
	float MinimumRandomTorqueY = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Torgue")
	float MinimumRandomTorqueZ = 0.5f;

	UPROPERTY(EditDefaultsOnly, Category="Ragdoll")
	float RagdollSettleSpeedThreshold = 40.f;
	UPROPERTY(EditDefaultsOnly, Category="Ragdoll")
	float RagdollMinDuration = 0.4f;

	static float RandomSignedRange(float Min, float Max)
	{
		const float Magnitude = FMath::RandRange(Min, Max);
		float sign = 1;
		if (FMath::RandBool())
		{
			sign = -1;
		}
		return sign * Magnitude;
	}
};
