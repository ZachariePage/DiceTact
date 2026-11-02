// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../DTHeroPowerAbility.h"
#include "DTCatmanPowerAbility.generated.h"

class UDTCatmanPowerData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTCatmanPowerAbility : public UDTHeroPowerAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTCatmanPowerData> AbilityData;

private:
	TArray<AActor*> GetOverlappingActors(const FVector& Location, float Radius) const;

	FGameplayAbilitySpecHandle CachedHandle;
	const FGameplayAbilityActorInfo* CachedActorInfo = nullptr;
	FGameplayAbilityActivationInfo CachedActivationInfo;
	
};
