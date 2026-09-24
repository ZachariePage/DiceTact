// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Core/Interface/ResolvedAbility.h"
#include "ResolveGameplayAbility.generated.h"

class UDTDiceResolveDefinition;
/**
 * 
 */
UCLASS(Blueprintable)
class DICETACT_API UResolveGameplayAbility : public UGameplayAbility, public ISubsequentAbility
{
	GENERATED_BODY()

public:
	virtual void ReceivePendingAbilityData(const FPendingAbility& PendingAbility) override;
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Pending Ability")
	FPendingAbility PendingData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pending Ability")
	TObjectPtr<const UDTDiceResolveDefinition> ResolveDefinition;
};
