// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DiceTact/Abilities/AbilityActors/DTMeteorActor.h"
#include "DTMeteorMagnetAbility.generated.h"

class UDTMeteorMagnetData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTMeteorMagnetAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	void SpawnNextMeteor(int CurrentIndex, int TotalCount, FVector BaseTargetLocation, FVector SpawnLocation, float ExplosionRadius);
	
	void CheckMeteorsStatus();
	UFUNCTION()
	void OnMeteorDestroyed(AActor* DestroyedActor);
	
	UPROPERTY()
	TArray<TWeakObjectPtr<ADTMeteorActor>> SpawnedMeteors;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MeteorCheckInterval = 0.1f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MinSpeedThreshold = 1.f;
	
	UPROPERTY()
	FTimerHandle MeteorSpawnTimerHandle;
	FTimerHandle MeteorCheckTimerHandle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTMeteorMagnetData> AbilityData;
	
};
