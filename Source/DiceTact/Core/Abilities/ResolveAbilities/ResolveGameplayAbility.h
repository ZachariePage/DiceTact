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

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnDiceActivation(FVector location);
	UFUNCTION(BlueprintImplementableEvent)
	void OnDiceHitTarget(FVector location, FVector HitLocation, AActor* DiceHitActor);
	UFUNCTION(BlueprintImplementableEvent)
	void OnDiceEffectEnd(FVector location);
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Pending Ability")
	FPendingAbility PendingData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pending Ability")
	TObjectPtr<const UDTDiceResolveDefinition> ResolveDefinition;
};
