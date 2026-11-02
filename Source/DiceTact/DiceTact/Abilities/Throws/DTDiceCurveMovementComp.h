// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Projectiles/Components/DTDiceMovementComponent.h"
#include "DTDiceCurveMovementComp.generated.h"


class UDTCurvedThrowData;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DICETACT_API UDTDiceCurveMovementComp : public UDTDiceMovementComponent
{
	GENERATED_BODY()

public:
	UDTDiceCurveMovementComp();

	virtual void InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData) override;

	virtual FVector PredictInitialVelocityOffset(const UDTThrowTypeData* InData) const override;

	virtual FVector PredictAcceleration(float ElapsedTime, const FVector& Position, const FVector& Velocity,const FVector& LaunchDirection, const UDTThrowTypeData* InData) const override;

	virtual FVector PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position, const FVector& Velocity,const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction) override;

protected:
	UFUNCTION()
	void OnDiceFirstCollision();
	
	static FQuat MakeLaunchFrame(const UDTCurvedThrowData* CurveData, const FVector& LaunchDirection);
	
	static FVector CalculateForceMultiplier(const UDTCurvedThrowData* CurveData, float Strength);

	static FVector EvaluateWorldForce(const UDTCurvedThrowData* CurveData, float ElapsedTime, const FVector& LaunchDirection, const FVector& InForceMultiplier);
	UPROPERTY()
	TObjectPtr<const UDTCurvedThrowData> Data = nullptr;
	
	FVector InitialLaunchDirection = FVector::ForwardVector;
	
	FVector ForceMultiplier = FVector::OneVector;

	bool bHasCollided = false;
};
