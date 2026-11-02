// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DTScreenshakeSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTScreenshakeSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Screen Shake")
	TSubclassOf<UCameraShakeBase> DefaultShake;
 
	UFUNCTION(BlueprintCallable, Category = "Screen Shake")
	void PlayShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale = 1.0f);
	
	UFUNCTION(BlueprintCallable, Category = "Screen Shake")
	void PlayExplosionShake(float Scale = 1.0f);
};
