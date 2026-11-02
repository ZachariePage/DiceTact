// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DTDiceMovementComponent.generated.h"

class ADTDice;
class UDTThrowTypeData;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTDiceMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTDiceMovementComponent();
	
	virtual void InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData);
	virtual void HandOffToPhysics(ADTDice* Dice);
	virtual FVector PredictInitialVelocityOffset(const UDTThrowTypeData* InData) const { return FVector::ZeroVector; }
	virtual FVector PredictAcceleration(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, const UDTThrowTypeData* InData) const { return FVector::ZeroVector; }
	virtual FVector PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position, const FVector& Velocity,
													const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const;
	void RemoveThisComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<ADTDice> MovingDice;
	UPROPERTY()
	TObjectPtr<const UDTThrowTypeData> DefaultData;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Curved Throw")
	bool bHasCollided = false;
	float ThrowElapsedTime = 0.f;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
