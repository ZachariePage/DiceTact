// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PendingAbility.h"
#include "UObject/Object.h"
#include "PendingAbilityPayload.generated.h"

/**
 * 
 */
UCLASS()
class UPendingAbilityPayload : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FPendingAbility PendingData;
};
