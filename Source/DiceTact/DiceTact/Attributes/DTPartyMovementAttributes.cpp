// Fill out your copyright notice in the Description page of Project Settings.


#include "DTPartyMovementAttributes.h"

void UDTPartyMovementAttributes::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	ClampMovementBudget(Attribute, NewValue);
}

void UDTPartyMovementAttributes::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	ClampMovementBudget(Attribute, NewValue);
}

void UDTPartyMovementAttributes::ClampMovementBudget(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if (Attribute == GetMovementBudgetAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMovementBudget());
		return;
	}
}