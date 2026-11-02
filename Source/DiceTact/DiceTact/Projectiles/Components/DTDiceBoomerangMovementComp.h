// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTDiceMovementComponent.h"
#include "DTDiceBoomerangMovementComp.generated.h"


class UDTBoomerangThrowData;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UDTDiceBoomerangMovementComp : public UDTDiceMovementComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDTDiceBoomerangMovementComp();

	virtual void InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData) override;


	UPROPERTY()
	TObjectPtr<const UDTBoomerangThrowData> Data;
	
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
