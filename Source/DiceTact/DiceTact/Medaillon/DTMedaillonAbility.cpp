// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMedaillonAbility.h"

UDTMedaillonAbility::UDTMedaillonAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UDTMedaillonAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                          const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                          const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	CachedTriggerEventData = TriggerEventData;
	CommitAbility(Handle, ActorInfo, ActivationInfo);
}

void UDTMedaillonAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);

	if (!CachedTriggerEventData)
	{
		return;
	}
 
	OnMedaillonTriggered(*CachedTriggerEventData);
	K2_EndAbility();
}

void UDTMedaillonAbility::OnMedaillonTriggered_Implementation(const FGameplayEventData& EventData)
{
	
}
