// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTSystemStatics.generated.h"

struct FDiceTactGameData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTSystemStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	static const FDiceTactGameData& LoadSessionData(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Saved Data")
	static void CreateNewSessionData(const FDiceTactGameData& NewSessionData, const UObject* WorldContextObject);
};
