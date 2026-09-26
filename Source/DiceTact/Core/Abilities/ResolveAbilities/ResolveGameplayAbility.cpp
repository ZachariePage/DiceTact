// Fill out your copyright notice in the Description page of Project Settings.


#include "ResolveGameplayAbility.h"
#include "Core/Dice/Definitions/DTDiceResolveDefinition.h"

void UResolveGameplayAbility::ReceivePendingAbilityData(const FPendingAbility& PendingAbility)
{
	PendingData = PendingAbility;
}

void UResolveGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
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

void UResolveGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
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
