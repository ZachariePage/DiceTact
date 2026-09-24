// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ElementalEffect.h"
#include "SteamBurst.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DICETACT_API USteamBurst : public UElementalEffect
{
	GENERATED_BODY()
public:
	virtual void Execute_Implementation(AActor* FirstActor, AActor* SecondActor, FVector Location, UWorld* World) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> CubeClass;
};
