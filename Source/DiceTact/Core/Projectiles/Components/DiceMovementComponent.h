// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DiceMovementComponent.generated.h"

class ADice;
class UThrowType;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDiceMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDiceMovementComponent();
	
	virtual void InitializeThrow(const FVector& Direction, float Strength, ADice* Dice, const UThrowType* InData);
	virtual void HandOffToPhysics(ADice* Dice);
	virtual FVector PredictInitialVelocityOffset(const UThrowType* InData) const { return FVector::ZeroVector; }
	virtual FVector PredictAcceleration(float ElapsedTime, const FVector& Position, const FVector& Velocity, const UThrowType* InData) const { return FVector::ZeroVector; }
	void RemoveThisComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<ADice> MovingDice;
	UPROPERTY()
	TObjectPtr<const UThrowType> DefaultData;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Curved Throw")
	bool bHasCollided = false;
	float ThrowElapsedTime = 0.f;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
