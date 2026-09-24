// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "../Abilities/PendingAbility.h"
#include "ResolvedAbility.generated.h"

// This class does not need to be modified.
UINTERFACE()
class USubsequentAbility : public UInterface
{
	GENERATED_BODY()
};

class DICETACT_API ISubsequentAbility
{
	GENERATED_BODY()

public:

	virtual void ReceivePendingAbilityData(const FPendingAbility& PendingAbility);
};
