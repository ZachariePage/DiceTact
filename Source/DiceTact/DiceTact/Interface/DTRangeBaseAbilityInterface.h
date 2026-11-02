// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DTRangeBaseAbilityInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType, NotBlueprintable)
class UDTRangeBaseAbilityInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DICETACT_API IDTRangeBaseAbilityInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, Category = "Ability|Range")
	virtual float GetAbilityMaxRange(const AActor* AvatarActor) const = 0;
};
