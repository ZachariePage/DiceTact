// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Medaillon/DTMedaillonAbility.h"
#include "DTMedaillonGrantEffect.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTMedaillonGrantEffect : public UDTMedaillonAbility
{
	GENERATED_BODY()
 
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Medaillon")
	TArray<TSubclassOf<UGameplayEffect>> EffectsToApply;
	
	UPROPERTY(EditDefaultsOnly, Category = "Target")
	EDTMedaillonEffectTarget EffectTarget = EDTMedaillonEffectTarget::Owner;
 
	virtual void OnMedaillonTriggered_Implementation(const FGameplayEventData& EventData) override;
};
