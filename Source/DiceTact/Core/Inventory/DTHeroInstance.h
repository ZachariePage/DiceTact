// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTHeroInstance.generated.h"

class UDTHeroDefinition;
/**
 * 
 */
UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class DICETACT_API UDTHeroInstance : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void SetBaseHeroDefinition(UDTHeroDefinition* HeroDefinition);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTHeroDefinition* GetBaseHeroDefinition() const;
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UDTHeroDefinition> BaseHeroDefinition;
};
