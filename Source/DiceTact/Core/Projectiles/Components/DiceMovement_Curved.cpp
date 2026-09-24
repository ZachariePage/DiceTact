// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceMovement_Curved.h"

#include "Core/Abilities/Throws/ThrowType_Curved.h"
#include "Core/Projectiles/Dice.h"

// Sets default values for this component's properties
UDiceMovement_Curved::UDiceMovement_Curved()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UDiceMovement_Curved::InitializeThrow(const FVector& Direction, float Strength, ADice* Dice, const UThrowType* InData)
{
	Super::InitializeThrow(Direction, Strength, Dice, InData);
	
	MovingDice = Dice;
	
	Data = Cast<UThrowType_Curved>(InData);
	if (!ensureMsgf(Data, TEXT("UDiceMovement_Curved requires a UThrowType_Curved")))
	{
		return;
	}
	
	MovingDice->OnFirstCollision.AddDynamic(this, &UDiceMovement_Curved::OnDiceFirstCollision);

	bHasCollided = false;

	FVector LaunchDir = Direction.GetSafeNormal();
	FVector impulse = FVector(0, 0, Data->UpwardStartingImpulse);
	MovingDice->GetDicePhysicalComponent()->AddImpulse(impulse, NAME_None, true);
	
	CurveAxis = FVector::CrossProduct(FVector::UpVector, LaunchDir).GetSafeNormal();
	CurveSideDir = CurveAxis;
}

FVector UDiceMovement_Curved::PredictInitialVelocityOffset(const UThrowType* InData) const
{
	const UThrowType_Curved* CurveData = Cast<UThrowType_Curved>(InData);
	if (!CurveData) return FVector::ZeroVector;
	
	return FVector(0.f, 0.f, CurveData->UpwardStartingImpulse);
}

FVector UDiceMovement_Curved::PredictAcceleration(float ElapsedTime, const FVector& Position, const FVector& Velocity,
	const UThrowType* InData) const
{
	const UThrowType_Curved* CurveData = Cast<UThrowType_Curved>(InData);
	if (!CurveData) return FVector::ZeroVector;

	const FVector LaunchDir = Velocity.GetSafeNormal2D();
	const FVector Axis = FVector::CrossProduct(FVector::UpVector, LaunchDir).GetSafeNormal();

	const float Alpha = FMath::Clamp(ElapsedTime / CurveData->CurveDuration, 0.f, 1.f);
	const float CurveMultiplier = FMath::Lerp(1.f, -1.f, Alpha);

	int DirSign = 0;
	switch (CurveData->CurveDirection)
	{
		case ECurveDirection::Left:  DirSign = -1; break;
		case ECurveDirection::Right: DirSign =  1; break;
	default: DirSign = 0; break;
	}
	
	return (Axis * CurveData->CurveForceStrength * CurveMultiplier) * DirSign;
}

int UDiceMovement_Curved::GetDirection()
{
	switch (Data->CurveDirection)
	{
		case ECurveDirection::Left:	return -1.f;
		case ECurveDirection::Right: return  1.f;
		default: return  0.f;
	}
}

// Called when the game starts
void UDiceMovement_Curved::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UDiceMovement_Curved::OnDiceFirstCollision()
{
	if (!MovingDice)
	{
		return;
	}
	
	bHasCollided = true;
}


// Called every frame
void UDiceMovement_Curved::TickComponent(float DeltaTime, ELevelTick TickType,
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

