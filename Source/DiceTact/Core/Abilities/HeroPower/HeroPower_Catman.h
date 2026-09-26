// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeroPowerAbility.h"
#include "HeroPower_Catman.generated.h"

class UDTCatmanPowerData;
/**
 * 
 */
UCLASS()
class DICETACT_API UHeroPower_Catman : public UHeroPowerAbility
{
	GENERATED_BODY()

public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TObjectPtr<UDTCatmanPowerData> abilityData;
	
};
