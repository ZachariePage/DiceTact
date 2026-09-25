// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResolveGameplayAbility.h"
#include "Foudre.generated.h"

class UDTFoudreData;
/**
 * 
 */
UCLASS()
class DICETACT_API UFoudre : public UResolveGameplayAbility
{
	GENERATED_BODY()

public:

	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTFoudreData> AbilityData;

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION(BlueprintImplementableEvent)
	void TriggerExplosionAt(const FVector& Location, float Radius);

	UFUNCTION(BlueprintImplementableEvent)
	void HitActorExplosion(AActor* actor);
private:
	void ProcessWave(TArray<TWeakObjectPtr<AActor>> WaveTargets);
	void ScheduleNextWave(TArray<TWeakObjectPtr<AActor>> NextWaveTargets);
	
	TArray<AActor*> GetOverlappingActors(const FVector& Location, float Radius) const;

	
	void FinishChain();

private:
	TSet<TWeakObjectPtr<AActor>> HitActorsLock;
 
	int ExplosionsTriggeredCount = 0;
	int MaxExplosionsAllowed = 0;
 
	FTimerHandle WaveTimerHandle;
	FTimerHandle WaitBetweenExplosion;

	FGameplayAbilitySpecHandle CachedHandle;
	const FGameplayAbilityActorInfo* CachedActorInfo = nullptr;
	FGameplayAbilityActivationInfo CachedActivationInfo;
};
