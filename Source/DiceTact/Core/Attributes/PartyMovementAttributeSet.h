// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "PartyMovementAttributeSet.generated.h"

/**
 * 
 */

#define PARTY_ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class DICETACT_API UPartyMovementAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	void ClampMovementBudget(const FGameplayAttribute& Attribute, float& NewValue) const;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Movement")
	FGameplayAttributeData MovementBudget;
	PARTY_ATTRIBUTE_ACCESSORS(UPartyMovementAttributeSet, MovementBudget);

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Movement")
	FGameplayAttributeData MaxMovementBudget;
	PARTY_ATTRIBUTE_ACCESSORS(UPartyMovementAttributeSet, MaxMovementBudget);

	UFUNCTION(BlueprintPure, Category = "Party|Movement")
	float GetMovementBudgetForBlueprint() const
	{
		return MovementBudget.GetCurrentValue();
	}

	UFUNCTION(BlueprintPure, Category = "Party|Movement")
	float GetMaxMovementBudgetForBlueprint() const
	{
		return MaxMovementBudget.GetCurrentValue();
	}
};