// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceCShapeMovementComp.h"

#include "DiceTact/Abilities/Throws/DTCShapeThrowData.h"


// Sets default values for this component's properties
UDTDiceCShapeMovementComp::UDTDiceCShapeMovementComp()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UDTDiceCShapeMovementComp::InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice,
	const UDTThrowTypeData* InData)
{
	Super::InitializeThrow(Direction, Strength, Dice, InData);

	MovingDice = Dice;

	Data = Cast<UDTCShapeThrowData>(InData);
	if (!ensureMsgf(Data, TEXT("UDTDiceMovement_CShape requires a UDTThrowType_CShape")))
	{
		return;
	}

	MovingDice->OnFirstCollision.AddDynamic(this, &UDTDiceCShapeMovementComp::OnDiceFirstCollision);
	bHasCollided = false;

	bHasPlan = CalculateCShape(Data, Direction, Strength, SideAcceleration, CurveDuration);
}

FVector UDTDiceCShapeMovementComp::PredictInitialVelocityOffset(const UDTThrowTypeData* InData) const
{
	return FVector::ZeroVector;
}

FVector UDTDiceCShapeMovementComp::PredictAcceleration(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, const UDTThrowTypeData* InData) const
{
	return FVector::ZeroVector;
}

FVector UDTDiceCShapeMovementComp::PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const
{
	const UDTCShapeThrowData* ThrowData = Cast<UDTCShapeThrowData>(InData);

	FVector Acceleration;
	float Duration;
	if (!CalculateCShape(ThrowData, LaunchDirection, Strength, Acceleration, Duration) || ElapsedTime > Duration)
	{
		return FVector::ZeroVector;
	}

	return Acceleration;
}

void UDTDiceCShapeMovementComp::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bHasCollided || !bHasPlan || !MovingDice || ThrowElapsedTime > CurveDuration)
	{
		return;
	}

	MovingDice->GetDicePhysicalComponent()->AddForce(SideAcceleration, NAME_None, true);
}

void UDTDiceCShapeMovementComp::OnDiceFirstCollision()
{
	bHasCollided = true;
}

bool UDTDiceCShapeMovementComp::CalculateCShape(const UDTCShapeThrowData* ThrowData, const FVector& LaunchDirection,
	float HoldTime, FVector& OutAcceleration, float& OutDuration)
{
	OutAcceleration = FVector::ZeroVector;
	OutDuration = 0.f;

	if (!ThrowData)
	{
		return false;
	}

	const FVector Dir = LaunchDirection.GetSafeNormal();
	const FVector LaunchHeading = Dir.GetSafeNormal2D();
	if (LaunchHeading.IsNearlyZero())
	{
		return false;
	}

	const float DistanceCm = ThrowData->DistanceMeters * 100.f;
	const float WidthCm = ThrowData->WidthMeters * 100.f;

	const float SideSign = ThrowData->bBulgeToTheRight ? 1.f : -1.f;
	const float SideAngle = ThrowData->GetSideAngleDegrees();
	
	const float Speed = ThrowData->Speed + HoldTime * ThrowData->AdditionalSpeedMultipliedByThrowStrength;
	const float HorizontalSpeed = Speed * Dir.Size2D();
	
	const float LineSpeed = HorizontalSpeed * FMath::Cos(FMath::DegreesToRadians(SideAngle));
	if (LineSpeed <= KINDA_SMALL_NUMBER)
	{
		return false;
	}
	
	const FVector LineHeading = LaunchHeading.RotateAngleAxis(-SideSign * SideAngle, FVector::UpVector);
	const FVector Right = FVector::CrossProduct(FVector::UpVector, LineHeading).GetSafeNormal();

	OutDuration = DistanceCm / LineSpeed;
	const float SideAccel = 8.f * WidthCm / (OutDuration * OutDuration);
	
	OutAcceleration = Right * (-SideSign * SideAccel);
	return true;
}

