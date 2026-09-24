// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTTargetingStrategy.generated.h"

/**
 * 
 */
class AHeroCharacter;
UCLASS()
class DICETACT_API UDTTargetingStrategy : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	virtual TArray<AActor*> GetPossibleTargets(AHeroCharacter* Caster) const;
};
