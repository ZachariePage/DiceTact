// Fill out your copyright notice in the Description page of Project Settings.


#include "DTBoomerangThrowData.h"

#include "DiceTact/Projectiles/Components/DTDiceBoomerangMovementComp.h"


FVector UDTBoomerangThrowData::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	return Super::CalculateThrowDirection(StartLocation, TargetLocation);
}

void UDTBoomerangThrowData::ModifyDiceActor(ADTDice* Dice , FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UDTDiceBoomerangMovementComp* Component = NewObject<UDTDiceBoomerangMovementComp>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();

	Component->InitializeThrow(Direction,Strength,Dice,this);
}
