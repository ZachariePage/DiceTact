// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowType_Curved.h"

#include "DiceTact/Projectiles/Components/DTDiceCurvedMovementComp.h"

FVector UThrowType_Curved::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	return Super::CalculateThrowDirection(StartLocation, TargetLocation);
}

void UThrowType_Curved::ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UDTDiceCurvedMovementComp* Component = NewObject<UDTDiceCurvedMovementComp>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();
	
	Component->InitializeThrow(Direction, Strength, Dice, this);
}

TSubclassOf<UDTDiceMovementComponent> UThrowType_Curved::GetMovementComponentSubclass() const
{
	return UDTDiceCurvedMovementComp::StaticClass();
}
