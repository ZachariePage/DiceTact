// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceMovementComponent.h"
#include "DiceMovement_Curved.generated.h"


class UThrowType_Curved;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDiceMovement_Curved : public UDiceMovementComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDiceMovement_Curved();

	UFUNCTION()
	virtual void InitializeThrow(const FVector& Direction, float Strength, ADice* Dice, const UThrowType* InData) override;
	virtual FVector PredictInitialVelocityOffset(const UThrowType* InData) const override;
	virtual FVector PredictAcceleration(float ElapsedTime, const FVector& Position, const FVector& Velocity, const UThrowType* InData) const override;

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
