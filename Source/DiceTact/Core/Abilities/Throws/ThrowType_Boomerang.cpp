// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowType_Boomerang.h"

#include "Core/Projectiles/Components/DiceMovement_Boomerange.h"


FVector UThrowType_Boomerang::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	return Super::CalculateThrowDirection(StartLocation, TargetLocation);
}

void UThrowType_Boomerang::ModifyDiceActor(ADice* Dice , FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UDiceMovement_Boomerange* Component = NewObject<UDiceMovement_Boomerange>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();

	Component->InitializeThrow(Direction,Strength,Dice,this);
}
