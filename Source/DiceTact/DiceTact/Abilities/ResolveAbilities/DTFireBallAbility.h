// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DTFireBallAbility.generated.h"

class UDTFireBallData;
class ADTFireBallActor;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTFireBallAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void CommitExecute(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo
		) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION()
	void HandleBouleHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	void TriggerExplosion(const FVector& ExplosionLocation);

	UFUNCTION(BlueprintImplementableEvent)
	void SpawnNyagara(const FVector& ExplosionLocation);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTFireBallData> AbilityData;

	UPROPERTY()
	TWeakObjectPtr<ADTFireBallActor> SpawnedBoule;

	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent>> PropelledTargets;

	FTimerHandle CheckRestTimerHandle;
	FTimerHandle MaxWaitTimerHandle;

	UPROPERTY()
	TWeakObjectPtr<AActor> cachedDice;
	UPROPERTY()
	TWeakObjectPtr<AActor> cachedPawn;

	UFUNCTION()
	void CheckIfAtRest();
};
