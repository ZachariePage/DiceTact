// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DTBlackHoleAbility.generated.h"

class UDTBlackHoleData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTBlackHoleAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTBlackHoleData> data;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Object Type")
	TArray<TEnumAsByte<EObjectTypeQuery>> AttractedObjectTypes;

private:
	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent>> PulledTargets;

	FTimerHandle CheckRestTimerHandle;
	FTimerHandle MaxWaitTimerHandle;

	UPROPERTY(EditDefaultsOnly, Category = "BlackHole")
	float RestCheckInterval = 0.15f;

	UPROPERTY(EditDefaultsOnly, Category = "BlackHole")
	float RestVelocityThreshold = 5.f;

	UPROPERTY(EditDefaultsOnly, Category = "BlackHole")
	float MaxWaitTime = 6.f; 

	void CheckIfAtRest();

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
};
