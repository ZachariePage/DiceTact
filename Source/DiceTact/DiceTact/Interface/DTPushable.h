// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DTPushable.generated.h"

USTRUCT(BlueprintType)
struct FPushData
{
	GENERATED_BODY()

	FPushData()
	{
		
	}

	FPushData(FVector direction, float strength, AActor* pushingActor = nullptr)
	{
		Direction = direction;
		Strength = strength;
		Instigator = pushingActor;
	}

	FPushData(FVector Velocity, AActor* pushingActor = nullptr)
	{
		Direction = Velocity.GetSafeNormal();
		Strength = Velocity.Length();
		Instigator = pushingActor;
	}
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Direction = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Strength = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Instigator = nullptr;
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UDTPushable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DICETACT_API IDTPushable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "push")
	bool PushToward(const FPushData& PushData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "push")
	bool PushTowardBlackHole(const FPushData& PushData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "push")
	bool PushTowardWithAdditionalZVelocity(FVector direction, float strength, float additionalZVelocity, AActor* pushingActor = nullptr);
	
};
