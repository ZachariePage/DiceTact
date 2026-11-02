// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceCurveMovementComp.h"

#include "DTCurvedThrowData.h"
#include "Curves/CurveVector.h"


UDTDiceCurveMovementComp::UDTDiceCurveMovementComp()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UDTDiceCurveMovementComp::InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice,
	const UDTThrowTypeData* InData)
{
	Super::InitializeThrow(Direction, Strength, Dice, InData);

	MovingDice = Dice;

	Data = Cast<UDTCurvedThrowData>(InData);
	if (!ensureMsgf(Data, TEXT("UDTDiceMovement_CurveGraph requires a UDTThrowType_CurvedGraph")))
	{
		return;
	}

	MovingDice->OnFirstCollision.AddDynamic(this, &UDTDiceCurveMovementComp::OnDiceFirstCollision);
	bHasCollided = false;

	InitialLaunchDirection = Direction.GetSafeNormal();
	ForceMultiplier = CalculateForceMultiplier(Data, Strength);

	const FVector Impulse(0.f, 0.f, Data->UpwardStartingImpulse);
	MovingDice->GetDicePhysicalComponent()->AddImpulse(Impulse, NAME_None, true);
}

FVector UDTDiceCurveMovementComp::PredictInitialVelocityOffset(const UDTThrowTypeData* InData) const
{
	const UDTCurvedThrowData* CurveData = Cast<UDTCurvedThrowData>(InData);
	if (!CurveData) return FVector::ZeroVector;

	return FVector(0.f, 0.f, CurveData->UpwardStartingImpulse);
}

FVector UDTDiceCurveMovementComp::PredictAcceleration(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, const UDTThrowTypeData* InData) const
{
	const UDTCurvedThrowData* CurveData = Cast<UDTCurvedThrowData>(InData);
	if (!CurveData) return FVector::ZeroVector;

	return EvaluateWorldForce(CurveData, ElapsedTime, LaunchDirection, CurveData->MinForceMultiplierXYZ);
}

FVector UDTDiceCurveMovementComp::PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const
{
	const UDTCurvedThrowData* CurveData = Cast<UDTCurvedThrowData>(InData);
	if (!CurveData) return FVector::ZeroVector;
	
	return EvaluateWorldForce(CurveData, ElapsedTime, LaunchDirection, CalculateForceMultiplier(CurveData, Strength));
}

void UDTDiceCurveMovementComp::TickComponent(float DeltaTime, ELevelTick TickType,
                                               FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bHasCollided || !GetOwner() || !Data || !MovingDice)
	{
		return;
	}

	float MinTime = 0.f, MaxTime = 0.f;
	Data->ForceCurve->GetTimeRange(MinTime, MaxTime);

	if (ThrowElapsedTime > MaxTime)
	{
		bHasCollided = true;
		return;
	}

	const FVector WorldForce = EvaluateWorldForce(Data, ThrowElapsedTime, InitialLaunchDirection, ForceMultiplier);
	
	MovingDice->GetDicePhysicalComponent()->AddForce(WorldForce, NAME_None, true);
}

void UDTDiceCurveMovementComp::OnDiceFirstCollision()
{
	bHasCollided = true;
}

FQuat UDTDiceCurveMovementComp::MakeLaunchFrame(const UDTCurvedThrowData* CurveData,
	const FVector& LaunchDirection)
{
	FVector Forward = LaunchDirection.GetSafeNormal();

	if (CurveData)
	{
		Forward = Forward.RotateAngleAxis(-CurveData->SideAngleDegreeModification, FVector::UpVector);

		if (!CurveData->bFollowLaunchPitch)
		{
			Forward = Forward.GetSafeNormal2D();
		}
	}

	if (Forward.IsNearlyZero())
	{
		Forward = FVector::ForwardVector;
	}

	return FRotationMatrix::MakeFromXZ(Forward, FVector::UpVector).ToQuat();
}

FVector UDTDiceCurveMovementComp::CalculateForceMultiplier(const UDTCurvedThrowData* CurveData, float Strength)
{
	if (!CurveData || CurveData->MaxHoldTime <= KINDA_SMALL_NUMBER)
	{
		return FVector::OneVector;
	}

	const float Alpha = FMath::Clamp(Strength / CurveData->MaxHoldTime, 0.f, 1.f);
	return FMath::Lerp(CurveData->MinForceMultiplierXYZ, CurveData->MaxForceMultiplierXYZ, Alpha);
}

FVector UDTDiceCurveMovementComp::EvaluateWorldForce(const UDTCurvedThrowData* CurveData, float ElapsedTime,
	const FVector& LaunchDirection, const FVector& InForceMultiplier)
{
	if (!CurveData || !CurveData->ForceCurve)
	{
		return FVector::ZeroVector;
	}

	float MinTime = 0.f, MaxTime = 0.f;
	CurveData->ForceCurve->GetTimeRange(MinTime, MaxTime);

	if (ElapsedTime > MaxTime)
	{
		return FVector::ZeroVector;
	}

	const FVector LocalForce =
	CurveData->ForceCurve->GetVectorValue(ElapsedTime) * CurveData->ForceXYZ * InForceMultiplier;

	return MakeLaunchFrame(CurveData, LaunchDirection).RotateVector(LocalForce);
}

