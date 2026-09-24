// Fill out your copyright notice in the Description page of Project Settings.


#include "LobThrow.h"

FVector ULobThrow::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	FVector FlatDir = TargetLocation - StartLocation;
	FlatDir.Z = 0.f;
	FlatDir.Normalize();

	const float AngleRad = FMath::DegreesToRadians(AngleDegreeMdofication);
	const FVector LobDir = FlatDir * FMath::Cos(AngleRad) + FVector::UpVector * FMath::Sin(AngleRad);
	return LobDir.GetSafeNormal();
}
