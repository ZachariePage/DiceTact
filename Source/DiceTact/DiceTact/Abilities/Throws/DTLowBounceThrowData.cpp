// Fill out your copyright notice in the Description page of Project Settings.


#include "DTLowBounceThrowData.h"

#include "DiceTact/Projectiles/DTBounceComponent.h"

FVector UDTLowBounceThrowData::CalculateThrowDirection(const FVector& StartLocation, const FVector& TargetLocation) const
{
	const FVector BouncePoint = FMath::Lerp(StartLocation, TargetLocation, BouncePointRatio);
	return (BouncePoint - StartLocation).GetSafeNormal();
}

void UDTLowBounceThrowData::ModifyDiceActor(ADTDice* Dice, FVector Direction, float Strength) const
{
	Super::ModifyDiceActor(Dice, Direction, Strength);

	UDTBounceComponent* Component = NewObject<UDTBounceComponent>(Dice);

	Dice->AddInstanceComponent(Component);
	Component->RegisterComponent();
	Component->InitializeBounceComponent(BounceData);
}
