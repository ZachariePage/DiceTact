// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMedaillonGiveAbility.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UDTMedaillonGiveAbility::OnMedaillonTriggered_Implementation(const FGameplayEventData& EventData)
{
	Super::OnMedaillonTriggered_Implementation(EventData);

	UAbilitySystemComponent* TargetASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(EventData.Target.Get(), true);
 
	if (!TargetASC)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no source asc or target asc in grantability");
		return;
	}
	
	for (const TSubclassOf<UGameplayAbility>& AbilityClass : AbilitiesToGrant)
	{
		if (AbilityClass && !TargetASC->FindAbilitySpecFromClass(AbilityClass))
		{
			TargetASC->GiveAbility(FGameplayAbilitySpec(AbilityClass, GetAbilityLevel(), INDEX_NONE, GetAvatarActorFromActorInfo()));
		}
	}
}
