// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AbilitySystemComponent.h"
#include "PartyUnitInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UPartyUnitInterface : public UInterface
{
	GENERATED_BODY()
};

class DICETACT_API IPartyUnitInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Party")
	bool IsPartyUnit() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Party")
	UAbilitySystemComponent* GetPartyAbilitySystemComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Party")
	void TakeControlOfUnit();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Party")
	void LeaveControlOfUnit();
};
