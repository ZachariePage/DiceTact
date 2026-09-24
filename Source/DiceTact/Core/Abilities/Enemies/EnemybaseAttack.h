// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "EnemybaseAttack.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UEnemybaseAttack : public UGameplayAbility
{
	GENERATED_BODY()

	public:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	TArray<TEnumAsByte<EObjectTypeQuery>> AttractedObjectTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	float BaseRadius;
};
