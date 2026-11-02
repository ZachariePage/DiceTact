// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTThrowTypeData.h"
#include "DTCurvedThrowData.generated.h"
class UCurveVector;
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class DICETACT_API UDTCurvedThrowData : public UDTThrowTypeData
{
	GENERATED_BODY()

public:
	virtual FVector CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const override;
	virtual void ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const override;
	virtual TSubclassOf<UDTDiceMovementComponent> GetMovementComponentSubclass() const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve Graph")
	TObjectPtr<UCurveVector> ForceCurve = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve Graph")
	FVector ForceXYZ = FVector(1.f, 1.f, 1.f);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve Graph")
	bool bFollowLaunchPitch = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve Graph")
	float UpwardStartingImpulse = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve Graph")
	float MinForceMultiplier = 1.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve Graph")
	float MaxForceMultiplier = 2.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve")
	FVector MinForceMultiplierXYZ = FVector(1.f, 1.f, 1.f);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve")
	FVector MaxForceMultiplierXYZ = FVector(1.f, 1.5f, 1.f);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Curve Graph", meta = (ClampMin = "0.01"))
	float MaxHoldTime = 3.f;

	UPROPERTY(EditDefaultsOnly, Category = "Throw|Angle")
	float AngleDegreeMdofication = 55.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw|Angle")
	float SideAngleDegreeModification = 0.f;
};
