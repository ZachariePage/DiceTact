// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DTSpectralLaser.generated.h"

class UDTSpectralLaserData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTSpectralLaser : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void CommitExecute(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo
		) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION(BlueprintImplementableEvent)
	void SpawnNyagara(const FVector& ExplosionLocation);
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTSpectralLaserData> AbilityData;

	UPROPERTY()
	TArray<TWeakObjectPtr<UPrimitiveComponent>> PropelledTargets;

	FTimerHandle CheckRestTimerHandle;
	FTimerHandle MaxWaitTimerHandle;
	
	UPROPERTY()
	TWeakObjectPtr<AActor> CachedDice;
	UPROPERTY()
	TWeakObjectPtr<AActor> CachedPawn;
};
