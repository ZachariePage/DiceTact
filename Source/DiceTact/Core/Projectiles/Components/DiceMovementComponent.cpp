// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceMovementComponent.h"

#include "Core/Abilities/Throws/ThrowType.h"


// Sets default values for this component's properties
UDiceMovementComponent::UDiceMovementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UDiceMovementComponent::InitializeThrow(const FVector& Direction, float Strength, ADice* Dice, const UThrowType* InData)
{
	MovingDice = Dice;
	DefaultData = InData;
}

void UDiceMovementComponent::HandOffToPhysics(ADice* Dice)
{
	SetComponentTickEnabled(false);
}

void UDiceMovementComponent::RemoveThisComponent()
{
	if (!IsBeingDestroyed())
	{
		DestroyComponent();
	}
}


// Called when the game starts
void UDiceMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UDiceMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
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

