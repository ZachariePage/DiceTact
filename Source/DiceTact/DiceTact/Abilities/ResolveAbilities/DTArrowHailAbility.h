// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DTArrowHailAbility.generated.h"

class UDTPluieDeFleche;
class ADTArrowActor;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTArrowHailAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:	
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	void SpawnNextArrow(int CurrentIndex, int TotalCount, FVector BaseTargetLocation, FVector SpawnLocation);
	void CheckArrowsStatus();
	UFUNCTION()
	void OnArrowDestroyed(AActor* DestroyedActor);

	UPROPERTY()
	TArray<TWeakObjectPtr<ADTArrowActor>> SpawnedArrows;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float ArrowCheckInterval = 0.1f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MinSpeedThreshold = 1.f;
	
	UPROPERTY()
	FTimerHandle ArrowSpawnTimerHandle;
	FTimerHandle ArrowCheckTimerHandle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTPluieDeFleche> AbilityData;
};
