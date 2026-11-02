// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroPowerAbility.h"

#include "DTHeroPowerDefinition.h"
#include "DiceTact/Characters/DTCombatPlayerController.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UDTHeroPowerAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                        const FGameplayEventData* TriggerEventData)
{
	if (TriggerEventData)
	{
		if (const UDTHeroPowerDefinition* ResolveDef = Cast<UDTHeroPowerDefinition>(TriggerEventData->OptionalObject))
		{
			HeroPowerDefinition = ResolveDef;
		}
	}

	ADTHeroCharacter* unit = Cast<ADTHeroCharacter>(GetAvatarActorFromActorInfo());
	if (unit)
	{
		HeroPowerDefinition = unit->GetHeroPowerDefinition();
	}
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}
