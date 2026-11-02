// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTPendingAbility.h"
#include "UObject/Object.h"
#include "DTPayloadPendingAbility.generated.h"

/**
 * 
 */
UCLASS()
class UDTPayloadPendingAbility : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FDTPendingAbility PendingData;
};
