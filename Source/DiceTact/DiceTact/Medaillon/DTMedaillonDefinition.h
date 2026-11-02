// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DTMedaillonAbility.h"
#include "Engine/DataAsset.h"
#include "DTMedaillonDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DICETACT_API UDTMedaillonDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Medaillon|UI")
	FText DisplayName;
 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Medaillon|UI")
	FText Description;
 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Medaillon|UI")
	TSoftObjectPtr<UTexture2D> Icon;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Medaillon")
	TSubclassOf<UDTMedaillonAbility> MedaillonAbility;

	UFUNCTION(BlueprintCallable, Category = "Medaillon")
	FGameplayAbilitySpecHandle GrantAbilityTo(UAbilitySystemComponent* ASC);
	
};
