// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceMovement_Boomerange.h"

#include "Core/Abilities/Throws/ThrowType_Boomerang.h"
#include "Core/Projectiles/Dice.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values for this component's properties
UDiceMovement_Boomerange::UDiceMovement_Boomerange()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UDiceMovement_Boomerange::InitializeThrow(const FVector& Direction, float Strength, ADice* Dice, const UThrowType* InData)
{
	Super::InitializeThrow(Direction, Strength, Dice, InData);

	Data = Cast<UThrowType_Boomerang>(InData);
	if (!ensureMsgf(Data, TEXT("UDiceMovement_Curved requires a UThrowType_Curved")))
	{
		return;
	}
	
	Dice->DisablePhysic();
	Dice->OnFirstCollision.AddDynamic(this, &UDiceMovement_Boomerange::OnDiceFirstCollision);
	StartLocation = Dice->GetActorLocation();
	ThrowDirection = Direction.GetSafeNormal();

	RightAxis = FVector::CrossProduct(ThrowDirection, FVector::UpVector).GetSafeNormal();
	if (RightAxis.IsNearlyZero())
	{
		RightAxis = FVector::CrossProduct(ThrowDirection, FVector::ForwardVector).GetSafeNormal();
	}
}

FVector UDiceMovement_Boomerange::ComputeBoomerangPosition(float Alpha) const
{
	const float DistanceAlpha = Data->ReturnCurve->GetFloatValue(Alpha);

	const float LateralAlpha = FMath::Sin(Alpha * PI);
	const float HeightAlpha = FMath::Sin(Alpha * PI);

	return StartLocation
		+ ThrowDirection * Data->MaxDistance * DistanceAlpha
		+ RightAxis * Data->LateralCurveStrength * LateralAlpha
		+ FVector::UpVector * Data->ArcHeight * HeightAlpha;
}

// Called when the game starts
void UDiceMovement_Boomerange::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UDiceMovement_Boomerange::OnDiceFirstCollision()
{
	UJUEDevelopmentStatics::ReportDebugMessage("Re enabled physics", this, FLinearColor::Yellow);

	/*
	GEngine->AddOnScreenDebugMessage(
			-1,
			15.0f,
			FColor::Yellow,
			FString::Printf(TEXT("re enable physics"))
			);
	*/
	MovingDice->EnablePhysic(MovingDice->GetDicePhysicalComponent()->GetPhysicsLinearVelocity());
}

// Called every frame
void UDiceMovement_Boomerange::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	ThrowElapsedTime += DeltaTime;
	GetOwner()->SetActorLocation(ComputeBoomerangPosition(ThrowElapsedTime));
}

