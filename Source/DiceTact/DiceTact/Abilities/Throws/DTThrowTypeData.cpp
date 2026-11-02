// Fill out your copyright notice in the Description page of Project Settings.


#include "DTThrowTypeData.h"

FVector UDTThrowTypeData::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	return (TargetLocation - StartLocation).GetSafeNormal();
}

void UDTThrowTypeData::ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const
{
	
}

void UDTThrowTypeData::RemoveThisComponent()
{
	
}

TSubclassOf<UDTDiceMovementComponent> UDTThrowTypeData::GetMovementComponentSubclass() const
{
	return nullptr;
}
