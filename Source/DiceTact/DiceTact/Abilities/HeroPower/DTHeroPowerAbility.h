// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "DTHeroPowerAbility.generated.h"

class UDTHeroPowerDefinition;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTHeroPowerAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hero power")
	TObjectPtr<const UDTHeroPowerDefinition> HeroPowerDefinition;
};
