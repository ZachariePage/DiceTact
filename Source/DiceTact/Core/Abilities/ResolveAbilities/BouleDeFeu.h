// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResolveGameplayAbility.h"
#include "BouleDeFeu.generated.h"

class UDTBouleDeFeu;
class ABouleDeFeuActor;
/**
 * 
 */
UCLASS()
class DICETACT_API UBouleDeFeu : public UResolveGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION()
	void HandleBouleHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
	UFUNCTION()
	void TriggerExplosion(const FVector& ExplosionLocation);

	UFUNCTION(BlueprintImplementableEvent)
	void SpawnNyagara(const FVector& ExplosionLocation);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTBouleDeFeu> AbilityData;

	UPROPERTY()
	TWeakObjectPtr<ABouleDeFeuActor> SpawnedBoule;

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
