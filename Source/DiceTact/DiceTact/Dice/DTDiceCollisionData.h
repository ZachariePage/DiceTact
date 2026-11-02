// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTDiceCollisionData.generated.h"

/**
 * 
 */
 
 UENUM(BlueprintType)
 enum class EImpulseCurve : uint8
 {
     Linear      UMETA(DisplayName = "Linear"),
     Exponential UMETA(DisplayName = "Exponential"),
     Custom      UMETA(DisplayName = "Custom Curve")
 };
 
UCLASS()
class DICETACT_API UDTDiceCollisionData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MaxDiceImpulseSpeed = 1000.f;
	UPROPERTY(EditAnywhere)
	float MinDiceImpulseSpeed = 100.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Collision|Impulse", meta=(ClampMin="0.0"))
	float SlowDiceImpulseMultiplier = 1.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Collision|Impulse", meta=(ClampMin="0.0"))
	float FastDiceImpulseMultiplier = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impulse")
	EImpulseCurve ImpulseCurve = EImpulseCurve::Linear;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impulse",meta = (EditCondition = "ImpulseCurve == EImpulseCurve::Exponential", EditConditionHides, ClampMin = "1.0"))
	float CurveExponent = 2.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impulse",meta = (EditCondition = "ImpulseCurve == EImpulseCurve::Custom", EditConditionHides))
	TObjectPtr<UCurveFloat> IntensityCurve = nullptr;

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

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fracture")
	float SideOffsetDistance = 100.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fracture")
	float SpacingBetweenDice = 120.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fracture")
	float AdditionalUpwardImpulse = 120.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fracture")
	bool UsePreviousFrameVelocity = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision")
	bool bUseGlobalCooldown = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision",meta = (EditCondition = "bUseGlobalCooldown", EditConditionHides))
	float GlobalCooldown = 0.25f;

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
