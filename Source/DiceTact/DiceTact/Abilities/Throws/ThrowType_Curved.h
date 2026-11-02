// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTThrowTypeData.h"
#include "ThrowType_Curved.generated.h"

UENUM(BlueprintType)
enum class ECurveDirection : uint8
{
	None    UMETA(DisplayName = "None"),
	Left    UMETA(DisplayName = "Left"),
	Right   UMETA(DisplayName = "Right"),
	Up      UMETA(DisplayName = "Up"),
	Down    UMETA(DisplayName = "Down")
};
/**
 * 
 */
UCLASS()
class DICETACT_API UThrowType_Curved : public UDTThrowTypeData
{
	GENERATED_BODY()

public:
	virtual FVector CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const override;
	virtual void ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const override;

	UPROPERTY(EditAnywhere, Category = "Curve")
	float CurveDuration = 2.f;
	UPROPERTY(EditAnywhere, Category = "Curved")
	float CurveForceStrength = 300.f;
	UPROPERTY(EditAnywhere, Category = "Optional")
	float UpwardStartingImpulse = 200.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve")
	ECurveDirection CurveDirection = ECurveDirection::Right;

	virtual TSubclassOf<UDTDiceMovementComponent> GetMovementComponentSubclass() const override;
};
