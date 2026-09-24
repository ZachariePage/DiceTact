// Fill out your copyright notice in the Description page of Project Settings.


#include "LowBounce.h"

#include "Core/Projectiles/BounceComponent.h"

FVector ULowBounce::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	const FVector BouncePoint = FMath::Lerp(StartLocation, TargetLocation, BouncePointRatio);
	return (BouncePoint - StartLocation).GetSafeNormal();
}

void ULowBounce::ModifyDiceActor(ADice* Dice, FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UBounceComponent* Component = NewObject<UBounceComponent>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();
	Component->InitializeBounceComponent(BounceData);
}
