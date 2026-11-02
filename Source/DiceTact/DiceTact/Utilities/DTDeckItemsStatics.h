// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DTDeckItemsStatics.generated.h"

class UDTDiceItemInstance;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTDeckItemsStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="Deck Items")
	UDTDiceItemInstance* DuplicateDiceItem(const UDTDiceItemInstance* DuplicatedItem);
};
