// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTHeroDefinition.generated.h"

class UThrowType;
class AHeroCharacter;
class UDTHeroPowerDefinition;
class UHeroPowerAbility;
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
	TSubclassOf<AHeroCharacter> GetHeroUnitClass() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTHeroPowerDefinition* GetHeroAbilityDefinition() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UThrowType* GetHeroThrowType() const;


protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText HeroName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText HeroDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FSlateBrush HeroIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftClassPtr<AHeroCharacter> HeroUnitClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	TObjectPtr<UDTHeroPowerDefinition> HeroPowerDefinition;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Abilities")
	TObjectPtr<UThrowType> HeroThrowType;

	//Add the hero dices here
};
