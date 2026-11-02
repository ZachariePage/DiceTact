// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCShapeThrowData.h"

#include "DiceTact/Projectiles/Components/DTDiceCShapeMovementComp.h"

FVector UDTCShapeThrowData::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	FVector FlatDir = TargetLocation - StartLocation;
	FlatDir.Z = 0.f;
	FlatDir = FlatDir.GetSafeNormal();
	
	const float SideSign = bBulgeToTheRight ? 1.f : -1.f;
	FlatDir = FlatDir.RotateAngleAxis(SideSign * GetSideAngleDegrees(), FVector::UpVector);

	const float PitchRad = FMath::DegreesToRadians(UpAngleDegrees);
	const FVector LobDir = FlatDir * FMath::Cos(PitchRad) + FVector::UpVector * FMath::Sin(PitchRad);
	return LobDir.GetSafeNormal();
}

void UDTCShapeThrowData::ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UDTDiceCShapeMovementComp* Component = NewObject<UDTDiceCShapeMovementComp>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();

	Component->InitializeThrow(Direction, Strength, Dice, this);
}

TSubclassOf<UDTDiceMovementComponent> UDTCShapeThrowData::GetMovementComponentSubclass() const
{
	return UDTDiceCShapeMovementComp::StaticClass();
}