// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceMovementComponent.h"
#include "DiceMovement_Boomerange.generated.h"


class UThrowType_Boomerang;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDiceMovement_Boomerange : public UDiceMovementComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDiceMovement_Boomerange();

	virtual void InitializeThrow(const FVector& Direction, float Strength, ADice* Dice, const UThrowType* InData) override;


	UPROPERTY()
	TObjectPtr<const UThrowType_Boomerang> Data;
	
	FVector ComputeBoomerangPosition(float Alpha) const;
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	FVector StartLocation = FVector::ZeroVector;
	FVector ThrowDirection = FVector::ForwardVector;
	FVector RightAxis = FVector::RightVector;

	UFUNCTION()
	void OnDiceFirstCollision();


public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
