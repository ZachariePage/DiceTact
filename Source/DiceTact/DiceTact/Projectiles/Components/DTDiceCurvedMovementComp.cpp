// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceCurvedMovementComp.h"

#include "DiceTact/Abilities/Throws/ThrowType_Curved.h"
#include "DiceTact/Projectiles/DTDice.h"

// Sets default values for this component's properties
UDTDiceCurvedMovementComp::UDTDiceCurvedMovementComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UDTDiceCurvedMovementComp::InitializeThrow(const FVector& Direction, float Strength, ADTDice* Dice, const UDTThrowTypeData* InData)
{
	Super::InitializeThrow(Direction, Strength, Dice, InData);
	
	MovingDice = Dice;
	
	Data = Cast<UThrowType_Curved>(InData);
	if (!ensureMsgf(Data, TEXT("UDiceMovement_Curved requires a UThrowType_Curved")))
	{
		return;
	}
	
	MovingDice->OnFirstCollision.AddDynamic(this, &UDTDiceCurvedMovementComp::OnDiceFirstCollision);

	bHasCollided = false;

	FVector LaunchDir = Direction.GetSafeNormal();
	FVector impulse = FVector(0, 0, Data->UpwardStartingImpulse);
	MovingDice->GetDicePhysicalComponent()->AddImpulse(impulse, NAME_None, true);
	
	CurveAxis = FVector::CrossProduct(FVector::UpVector, LaunchDir).GetSafeNormal();
	CurveSideDir = CurveAxis;
}

FVector UDTDiceCurvedMovementComp::PredictInitialVelocityOffset(const UDTThrowTypeData* InData) const
{
	const UThrowType_Curved* CurveData = Cast<UThrowType_Curved>(InData);
	if (!CurveData) return FVector::ZeroVector;
	
	return FVector(0.f, 0.f, CurveData->UpwardStartingImpulse);
}

FVector UDTDiceCurvedMovementComp::PredictAcceleration(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, const UDTThrowTypeData* InData) const
{
	const UThrowType_Curved* CurveData = Cast<UThrowType_Curved>(InData);
	if (!CurveData) return FVector::ZeroVector;
	
	const FVector Axis = FVector::CrossProduct(FVector::UpVector, LaunchDirection.GetSafeNormal()).GetSafeNormal();

	const float Alpha = FMath::Clamp(ElapsedTime / CurveData->CurveDuration, 0.f, 1.f);
	const float CurveMultiplier = FMath::Lerp(1.f, -1.f, Alpha);

	float DirSign = 0.f;
	switch (CurveData->CurveDirection)
	{
	case ECurveDirection::Left:  DirSign = -1.f; break;
	case ECurveDirection::Right: DirSign =  1.f; break;
	default: break;
	}

	return Axis * CurveData->CurveForceStrength * CurveMultiplier * DirSign;
}

FVector UDTDiceCurvedMovementComp::PredictAccelerationWithStrength(float ElapsedTime, const FVector& Position,
	const FVector& Velocity, const FVector& LaunchDirection, float Strength, const UDTThrowTypeData* InData) const
{
	return PredictAcceleration(ElapsedTime, Position, Velocity, LaunchDirection, InData);
}

int UDTDiceCurvedMovementComp::GetDirection()
{
	switch (Data->CurveDirection)
	{
		case ECurveDirection::Left:	return -1.f;
		case ECurveDirection::Right: return  1.f;
		default: return  0.f;
	}
}

// Called when the game starts
void UDTDiceCurvedMovementComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UDTDiceCurvedMovementComp::OnDiceFirstCollision()
{
	if (!MovingDice)
	{
		return;
	}
	
	bHasCollided = true;
}


// Called every frame
void UDTDiceCurvedMovementComp::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (bHasCollided || !GetOwner())
	{
		return;
	}

	const float Alpha = FMath::Clamp(ThrowElapsedTime / Data->CurveDuration, 0.f, 1.f);
	const float CurveMultiplier = FMath::Lerp(1.f, -1.f, Alpha);
	
	const FVector CurveAcceleration = (CurveSideDir * Data->CurveForceStrength * CurveMultiplier) * GetDirection();

	MovingDice->GetDicePhysicalComponent()->AddForce(CurveAcceleration, NAME_None, true);
}

