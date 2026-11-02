// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DTFlamePillarAbility.generated.h"

class UDTFirePillarData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTFlamePillarAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()
public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

protected:
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UDTFirePillarData> AbilityData;

	void ExplodeNextPoint();
	void ScheduleNextExplosion();
	TArray<AActor*> GetOverlappingActors(const FVector& Location, float Radius) const;

	UFUNCTION(BlueprintImplementableEvent)
	void TriggerExplosionAt(FVector Location, float Radius);

	UFUNCTION(BlueprintImplementableEvent)
	void HitActorExplosion(AActor* Target);

	void ApplyKnockback(AActor* Target, const FVector& ExplosionCenter);

private:
	TArray<FVector> RemainingPoints;
	int CurrentIndex = 0;
	FTimerHandle SequenceTimerHandle;

	FGameplayAbilitySpecHandle CachedHandle;
	const FGameplayAbilityActorInfo* CachedActorInfo = nullptr;
	FGameplayAbilityActivationInfo CachedActivationInfo;

	TSet<TWeakObjectPtr<AActor>> HitActorsLock;
};
