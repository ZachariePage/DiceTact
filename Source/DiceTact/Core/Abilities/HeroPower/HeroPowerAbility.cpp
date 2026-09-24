// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPowerAbility.h"

#include "DTHeroPowerDefinition.h"
#include "Core/Characters/DTPlayerController_Combat.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UHeroPowerAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                        const FGameplayEventData* TriggerEventData)
{
	if (TriggerEventData)
	{
		if (const UDTHeroPowerDefinition* ResolveDef = Cast<UDTHeroPowerDefinition>(TriggerEventData->OptionalObject))
		{
			ResolveDefinition = ResolveDef;
		}
	}

	AHeroCharacter* unit = Cast<AHeroCharacter>(GetAvatarActorFromActorInfo());
	if (unit)
	{
		ResolveDefinition = unit->GetHeroPowerDefinition();
	}
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}
