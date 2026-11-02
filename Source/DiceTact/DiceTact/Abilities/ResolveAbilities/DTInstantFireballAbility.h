// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "Abilities/GameplayAbility.h"
#include "DTInstantFireballAbility.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTInstantFireballAbility : public UDTResolveGameplayAbility 
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ability)
	float TestFloat = 10.f;
};
