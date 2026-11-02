// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTHeroInstance.generated.h"

class UDTMedaillonDefinition;
class UDTHeroDefinition;
/**
 * 
 */
UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class DICETACT_API UDTHeroInstance : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void SetBaseHeroDefinition(UDTHeroDefinition* HeroDefinition);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTHeroDefinition* GetBaseHeroDefinition() const;

	UFUNCTION(BlueprintCallable)
	void SetWornMedallion(const UDTMedaillonDefinition* MedallionDefinition);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTMedaillonDefinition* GetWornMedallion() const;
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame)
	TObjectPtr<const UDTHeroDefinition> BaseHeroDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame)
	TObjectPtr<const UDTMedaillonDefinition> GrantedMedallion = nullptr;
};
