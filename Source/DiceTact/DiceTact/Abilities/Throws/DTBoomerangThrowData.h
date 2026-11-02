// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTThrowTypeData.h"
#include "DTBoomerangThrowData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTBoomerangThrowData : public UDTThrowTypeData
{
	GENERATED_BODY()

	virtual FVector CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const override;
	virtual void ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UCurveFloat> ReturnCurve;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Boomerang")
	float ThrowDuration = 1.2f;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Boomerang")
	float MaxDistance = 500.f;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Boomerang")
	float LateralCurveStrength = 150.f;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Boomerang")
	float ArcHeight = 80.f;
};
