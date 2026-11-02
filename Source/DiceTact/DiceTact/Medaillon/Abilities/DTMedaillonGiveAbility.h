// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Medaillon/DTMedaillonAbility.h"
#include "DTMedaillonGiveAbility.generated.h"

/**
 * 
 */
UCLASS()
class DICETACT_API UDTMedaillonGiveAbility : public UDTMedaillonAbility
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Medaillon")
	TArray<TSubclassOf<UGameplayAbility>> AbilitiesToGrant;
 
	virtual void OnMedaillonTriggered_Implementation(const FGameplayEventData& EventData) override;
};
