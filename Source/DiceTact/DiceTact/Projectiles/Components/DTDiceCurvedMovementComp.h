// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTDiceMovementComponent.h"
#include "DTDiceCurvedMovementComp.generated.h"


class UThrowType_Curved;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTDiceCurvedMovementComp : public UDTDiceMovementComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTDiceCurvedMovementComp();

	UFUNCTION()
	virtual void InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData) override;
	virtual FVector PredictInitialVelocityOffset(const UDTThrowTypeData* InData) const override;
	virtual FVector PredictAcceleration(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, const UDTThrowTypeData* InData) const override;
	virtual FVector PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position, const FVector& Velocity, const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const override;

	UPROPERTY()
	TObjectPtr<const UThrowType_Curved> Data;

	int GetDirection();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Curved Throw")
	FVector CurveAxis;
	FVector CurveSideDir;
	

public:
	UFUNCTION()
	void OnDiceFirstCollision();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
