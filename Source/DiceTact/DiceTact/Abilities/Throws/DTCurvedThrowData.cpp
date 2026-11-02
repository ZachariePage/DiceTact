// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCurvedThrowData.h"

#include "DTDiceCurveMovementComp.h"

FVector UDTCurvedThrowData::CalculateThrowDirection(const FVector& StartLocation,
                                                    const FVector& TargetLocation) const
{
	FVector FlatDir = TargetLocation - StartLocation;
	FlatDir.Z = 0.f;
	FlatDir.Normalize();
	
	FlatDir = FlatDir.RotateAngleAxis(SideAngleDegreeModification, FVector::UpVector);
	
	const float AngleRad = FMath::DegreesToRadians(AngleDegreeMdofication);
	const FVector LobDir = FlatDir * FMath::Cos(AngleRad) + FVector::UpVector * FMath::Sin(AngleRad);
	return LobDir.GetSafeNormal();
}

void UDTCurvedThrowData::ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UDTDiceCurveMovementComp* Component = NewObject<UDTDiceCurveMovementComp>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();

	Component->InitializeThrow(Direction, Strength, Dice, this);
}

TSubclassOf<UDTDiceMovementComponent> UDTCurvedThrowData::GetMovementComponentSubclass() const
{
	return UDTDiceCurveMovementComp::StaticClass();
}
