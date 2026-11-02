// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTTargetingStrategy.generated.h"

UENUM(BlueprintType)
enum class EActivationTiming : uint8
{
	Instant,
	HoveredTarget
};

/**
 * 
 */
class ADTHeroCharacter;
UCLASS()
class DICETACT_API UDTTargetingStrategy : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	virtual TArray<AActor*> GetPossibleTargets(ADTHeroCharacter* Caster) const;
	
};
