// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Physics/PhysicalReactionComponent.h"
#include "UObject/Interface.h"
#include "DTPhysicalUnitInterface.generated.h"

// This class does not need to be modified.

struct FPushData;

UINTERFACE(BlueprintType, MinimalAPI)
class UDTPhysicalUnitInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DICETACT_API IDTPhysicalUnitInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ApplyImpulse(const FPushData& Info);
	virtual void ApplyImpulse_Implementation(const FPushData& Info);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ApplyBlackHoleImpulse(const FPushData& Info);
	virtual void ApplyBlackHoleImpulse_Implementation(const FPushData& Info);
};
