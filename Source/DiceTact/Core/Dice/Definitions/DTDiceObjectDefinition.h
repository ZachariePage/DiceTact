// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTDiceObjectDefinition.generated.h"

/**
 * Class defining properties of dices with different faces.
 */

class ADice;

UCLASS()
class DICETACT_API UDTDiceObjectDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	TSubclassOf<ADice> GetDiceClass() const;

	int32 GetDiceFacesCount() const;
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText DisplayedName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText DisplayedDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FSlateBrush ObjectBrush;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 FacesCount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<ADice> Dice;
	
};
