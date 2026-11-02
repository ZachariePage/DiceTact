// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTElementalEffect.h"
#include "DTSteamBurstEffect.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DICETACT_API UDTSteamBurstEffect : public UDTElementalEffect
{
	GENERATED_BODY()
public:
	virtual void Execute_Implementation(AActor* FirstActor, AActor* SecondActor, FVector Location, UWorld* World) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> CubeClass;
};
