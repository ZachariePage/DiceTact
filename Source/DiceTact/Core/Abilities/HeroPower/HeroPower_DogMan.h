// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeroPowerAbility.h"
#include "HeroPower_DogMan.generated.h"

class UDTDogManPowerData;
/**
 * 
 */
UCLASS()
class DICETACT_API UHeroPower_DogMan : public UHeroPowerAbility
{
	GENERATED_BODY()

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
public:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UDTDogManPowerData> PowerData;
};
