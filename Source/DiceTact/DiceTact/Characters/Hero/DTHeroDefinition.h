// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTHeroDefinition.generated.h"

class UDTMedaillonDefinition;
class UDTMedaillonAbility;
class UDTThrowTypeData;
class ADTHeroCharacter;
class UDTHeroPowerDefinition;
class UDTHeroPowerAbility;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTHeroDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetHeroName() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetHeroDescription() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSlateBrush& GetHeroIcon() const;
	UFUNCTION(BlueprintCallable)
	TSubclassOf<ADTHeroCharacter> GetHeroUnitClass() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTHeroPowerDefinition* GetHeroAbilityDefinition() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTThrowTypeData* GetHeroThrowType() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetHeroBaseMovementBudget() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTMedaillonDefinition* GetMedaillonAbility() const;
	

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText HeroName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText HeroDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FSlateBrush HeroIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<ADTHeroCharacter> HeroUnitClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	TObjectPtr<UDTHeroPowerDefinition> HeroPowerDefinition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	TObjectPtr<UDTThrowTypeData> HeroThrowType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Medaillon")
	TObjectPtr<UDTMedaillonDefinition> MedaillonAbility;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	float BaseMovementBudget = 1000;
	//Add the hero dices here
};
