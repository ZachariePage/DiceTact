// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DiceTact/Abilities/AbilityActors/DTGlueTrapActor.h"
#include "DiceTact/Abilities/Definitions/DTGlueTrapData.h"
#include "DTGlueTrapAbility.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTGlueTrapAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()
	
public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
protected:	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UDTGlueTrapData> AbilityData;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ADTGlueTrapActor> GlueTrapActorClass;
	
	UFUNCTION(BlueprintCallable)
	bool SpawnGlueTrapActorAt(const FVector Location, const float Radius, const int Duration, TSubclassOf<UGameplayEffect> Effect);
};
