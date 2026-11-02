// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMedaillonDefinition.h"

#include "AbilitySystemComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"

FGameplayAbilitySpecHandle UDTMedaillonDefinition::GrantAbilityTo(UAbilitySystemComponent* ASC)
{
	if (!ASC || !MedaillonAbility)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("No ability");
		return FGameplayAbilitySpecHandle();
	}
	
	return ASC->GiveAbility(FGameplayAbilitySpec(MedaillonAbility, 1, INDEX_NONE, this));
}
