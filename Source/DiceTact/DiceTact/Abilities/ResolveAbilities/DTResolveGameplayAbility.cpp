// Fill out your copyright notice in the Description page of Project Settings.


#include "DTResolveGameplayAbility.h"
#include "DiceTact/Dice/Definitions/DTDiceResolveDefinition.h"

void UDTResolveGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (TriggerEventData)
	{
		if (const UDTDiceResolveDefinition* ResolveDef = Cast<UDTDiceResolveDefinition>(TriggerEventData->OptionalObject))
		{
			ResolveDefinition = ResolveDef;
			//ReceivePendingAbilityData(Payload->PendingData);
		}
	}
	
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UDTResolveGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	
	if (ActorInfo)
	{
		AActor* AvatarActor = ActorInfo->AvatarActor.Get();

		if (IsValid(AvatarActor))
		{
			OnDiceEffectEnd(AvatarActor->GetActorLocation());
		}
	}
}
