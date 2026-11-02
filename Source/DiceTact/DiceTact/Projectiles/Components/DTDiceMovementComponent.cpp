// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceMovementComponent.h"

#include "DiceTact/Abilities/Throws/DTThrowTypeData.h"


// Sets default values for this component's properties
UDTDiceMovementComponent::UDTDiceMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UDTDiceMovementComponent::InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData)
{
	MovingDice = Dice;
	DefaultData = InData;
}

void UDTDiceMovementComponent::HandOffToPhysics(ADTDice* Dice)
{
	SetComponentTickEnabled(false);
}


FVector UDTDiceMovementComponent::PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const
{
	return PredictAcceleration(ElapsedTime, Position, Velocity, LaunchDirection, InData);
}

void UDTDiceMovementComponent::RemoveThisComponent()
{
	if (!IsBeingDestroyed())
	{
		DestroyComponent();
	}
}


// Called when the game starts
void UDTDiceMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UDTDiceMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	ThrowElapsedTime += DeltaTime;
	if (ThrowElapsedTime >= DefaultData->TimeBeforeErasingComponent)
	{
		DestroyComponent();
	}
	// ...
}

