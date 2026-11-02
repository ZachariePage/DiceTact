// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMedaillonGrantEffect.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UDTMedaillonGrantEffect::OnMedaillonTriggered_Implementation(const FGameplayEventData& EventData)
{
	Super::OnMedaillonTriggered_Implementation(EventData);

	if (EffectTarget == EDTMedaillonEffectTarget::Owner)
	{
		for (const TSubclassOf<UGameplayEffect>& Effect : EffectsToApply)
		{
			if (Effect)
			{
				BP_ApplyGameplayEffectToOwner(Effect, GetAbilityLevel(), 1);
			}
		}
		return;
	}
	
	UAbilitySystemComponent* SourceASC = GetAbilitySystemComponentFromActorInfo();
	UAbilitySystemComponent* TargetASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(EventData.Target.Get(), true);
 
	if (!SourceASC || !TargetASC)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no source asc or target asc in granteffect");
		return;
	}
 
	for (const TSubclassOf<UGameplayEffect>& Effect : EffectsToApply)
	{
		if (!Effect)
		{
			continue;
		}
 
		FGameplayEffectContextHandle Context = SourceASC->MakeEffectContext();
		if (EventData.OptionalObject)
		{
			Context.AddSourceObject(EventData.OptionalObject.Get());
		}
 
		const FGameplayEffectSpecHandle Spec = SourceASC->MakeOutgoingSpec(Effect, GetAbilityLevel(), Context);
		if (Spec.IsValid())
		{
			SourceASC->ApplyGameplayEffectSpecToTarget(*Spec.Data.Get(), TargetASC);
		}
	}
}
