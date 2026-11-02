// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "DTEnemyAttackAbility.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTEnemyAttackAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void CommitExecute(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo) override;

protected:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	int32 GetBaseDamage() const;

	UFUNCTION(BlueprintImplementableEvent)
	void OnTargetDamaged(AActor* Target);
	UFUNCTION(BlueprintImplementableEvent)
	void OnTargetPushed(AActor* Target);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	TArray<TEnumAsByte<EObjectTypeQuery>> AttractedObjectTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Ability")
	float BaseRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Strength")
	float BaseImpulse = 500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Strength")
	float BaseImpulseZ = 500.f;
};
