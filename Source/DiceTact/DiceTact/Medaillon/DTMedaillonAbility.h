// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "DTMedaillonAbility.generated.h"

/**
 * 
 */

class UGameplayEffect;
 
UENUM(BlueprintType)
enum class EDTMedaillonEffectTarget : uint8
{
	Owner,
	EventTarget
};

UCLASS(Abstract, Blueprintable)
class DICETACT_API UDTMedaillonAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UDTMedaillonAbility();
 
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

	virtual void CommitExecute(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) override;
 
protected:
	UFUNCTION(BlueprintNativeEvent, Category = "Medaillon")
	void OnMedaillonTriggered(const FGameplayEventData& EventData);

	const FGameplayEventData* CachedTriggerEventData = nullptr;
};
