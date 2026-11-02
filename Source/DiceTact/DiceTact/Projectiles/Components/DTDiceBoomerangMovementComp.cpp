// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceBoomerangMovementComp.h"

#include "DiceTact/Abilities/Throws/DTBoomerangThrowData.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values for this component's properties
UDTDiceBoomerangMovementComp::UDTDiceBoomerangMovementComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UDTDiceBoomerangMovementComp::InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData)
{
	Super::InitializeThrow(Direction, Strength, Dice, InData);

	Data = Cast<UDTBoomerangThrowData>(InData);
	if (!ensureMsgf(Data, TEXT("UDiceMovement_Curved requires a UThrowType_Curved")))
	{
		return;
	}
	
	Dice->DisablePhysic();
	Dice->OnFirstCollision.AddDynamic(this, &UDTDiceBoomerangMovementComp::OnDiceFirstCollision);
	StartLocation = Dice->GetActorLocation();
	ThrowDirection = Direction.GetSafeNormal();

	RightAxis = FVector::CrossProduct(ThrowDirection, FVector::UpVector).GetSafeNormal();
	if (RightAxis.IsNearlyZero())
	{
		RightAxis = FVector::CrossProduct(ThrowDirection, FVector::ForwardVector).GetSafeNormal();
	}
}

FVector UDTDiceBoomerangMovementComp::ComputeBoomerangPosition(float Alpha) const
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
void UDTDiceBoomerangMovementComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UDTDiceBoomerangMovementComp::OnDiceFirstCollision()
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
void UDTDiceBoomerangMovementComp::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	ThrowElapsedTime += DeltaTime;
	GetOwner()->SetActorLocation(ComputeBoomerangPosition(ThrowElapsedTime));
}

