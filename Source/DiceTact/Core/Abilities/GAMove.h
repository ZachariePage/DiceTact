// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Core/Interface/RangeBaseAbility.h"
#include "Core/Characters/Hero/HeroCharacter.h"
#include "GAMove.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UGAMove : public UGameplayAbility, public IRangeBaseAbility
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Move")
	TSubclassOf<UGameplayEffect> ConsumeMovementEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Move")
	FGameplayTag MovementDistanceTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Move")
	FVector CachedStartLocation = FVector::ZeroVector;

	UFUNCTION(BlueprintCallable, Category = "Ability|Range")
	virtual float GetAbilityMaxRange(const AActor* AvatarActor) const override;
};
