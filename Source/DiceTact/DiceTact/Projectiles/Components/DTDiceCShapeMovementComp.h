// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTDiceMovementComponent.h"
#include "DTDiceCShapeMovementComp.generated.h"

class UDTCShapeThrowData;
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTDiceCShapeMovementComp : public UDTDiceMovementComponent
{
	GENERATED_BODY()

public:
	UDTDiceCShapeMovementComp();

	virtual void InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData) override;

	virtual FVector PredictInitialVelocityOffset(const UDTThrowTypeData* InData) const override;

	virtual FVector PredictAcceleration(float ElapsedTime, const FVector& Position, const FVector& Velocity,const FVector& LaunchDirection, const UDTThrowTypeData* InData) const override;

	virtual FVector PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position, const FVector& Velocity,const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction) override;

protected:
	UFUNCTION()
	void OnDiceFirstCollision();
	
	static bool CalculateCShape(const UDTCShapeThrowData* ThrowData, const FVector& LaunchDirection, float HoldTime,FVector& OutAcceleration, float& OutDuration);

	UPROPERTY()
	TObjectPtr<const UDTCShapeThrowData> Data = nullptr;

	FVector SideAcceleration = FVector::ZeroVector;
	float CurveDuration = 0.f;
	bool bHasPlan = false;
	bool bHasCollided = false;
};
