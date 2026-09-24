// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTTargetingStrategy.h"
#include "DTTargetStrategy_AllDIce.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTTargetStrategy_AllDIce : public UDTTargetingStrategy
{
	GENERATED_BODY()

	virtual TArray<AActor*> GetPossibleTargets(AHeroCharacter* Caster) const override;
};
