// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTMedaillonStatics.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTMedaillonStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Perks")
	static int SendMedaillonEvent(AActor* Owner, FGameplayTag EventTag, UObject* OptionalObject = nullptr, float Magnitude = 0.f, AActor* Target = nullptr);
};
