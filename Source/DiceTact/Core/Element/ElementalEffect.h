// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ElementalEffect.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DICETACT_API UElementalEffect : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintNativeEvent, Category="Element")
	void Execute(AActor* FirstActor, AActor* SecondActor, FVector Location, UWorld* World);
};
