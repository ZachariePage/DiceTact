// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTCombatStatics.generated.h"

class UTurnBaseComponent;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTCombatStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static UTurnBaseComponent* GetTurnManager();
};
