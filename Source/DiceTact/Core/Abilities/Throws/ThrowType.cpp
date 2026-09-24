// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowType.h"

#include "Core/Projectiles/BounceComponent.h"

FVector UThrowType::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	return (TargetLocation - StartLocation).GetSafeNormal();
}

void UThrowType::ModifyDiceActor(ADice* Dice, FVector Direction, float Strength) const
{
	
}

void UThrowType::RemoveThisComponent()
{
	
}

TSubclassOf<UDiceMovementComponent> UThrowType::GetMovementComponentSubclass() const
{
	return nullptr;
}
