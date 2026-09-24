// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowType_Curved.h"

#include "Core/Projectiles/Components/DiceMovement_Curved.h"

FVector UThrowType_Curved::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	return Super::CalculateThrowDirection(StartLocation, TargetLocation);
}

void UThrowType_Curved::ModifyDiceActor(ADice* Dice, FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UDiceMovement_Curved* Component = NewObject<UDiceMovement_Curved>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();
	
	Component->InitializeThrow(Direction, Strength, Dice, this);
}

TSubclassOf<UDiceMovementComponent> UThrowType_Curved::GetMovementComponentSubclass() const
{
	return UDiceMovement_Curved::StaticClass();
}
