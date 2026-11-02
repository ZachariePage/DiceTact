// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DTTurnConsumingAbilityInterface.generated.h"

UINTERFACE(BlueprintType)
class UDTTurnConsumingAbilityInterface : public UInterface
{
	GENERATED_BODY()
};

class DICETACT_API IDTTurnConsumingAbilityInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Ability")
	bool DoesItConsumeTurn();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Ability")
	int ManaCost();
};
