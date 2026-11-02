// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTThrowTypeData.h"
#include "DTCShapeThrowData.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTCShapeThrowData : public UDTThrowTypeData
{
	GENERATED_BODY()

public:
	virtual FVector CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const override;
	virtual void ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const override;
	virtual TSubclassOf<UDTDiceMovementComponent> GetMovementComponentSubclass() const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "C Shape", meta = (ClampMin = "0.1", Units = "Meters"))
	float DistanceMeters = 10.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "C Shape", meta = (ClampMin = "0.0", Units = "Meters"))
	float WidthMeters = 2.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "C Shape")
	bool bBulgeToTheRight = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "C Shape")
	float UpAngleDegrees = 0.f;
	
	float GetSideAngleDegrees() const
	{
		return FMath::RadiansToDegrees(FMath::Atan2(4.f * WidthMeters, DistanceMeters));
	}
};
