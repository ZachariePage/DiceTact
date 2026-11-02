// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Abilities/Strategies/DTTargetingStrategy.h"
#include "Engine/DataAsset.h"
#include "DTHeroPowerDefinition.generated.h"

class UDTHeroPowerAbility;
/**
 * 
 */

UCLASS(DisplayName="Hero Power Definition")
class DICETACT_API UDTHeroPowerDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetHeroPowerName() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetHeroPowerDescription() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSlateBrush& GetHeroPowerIcon() const;
	
	UFUNCTION(BlueprintCallable)
	TSubclassOf<UDTHeroPowerAbility> GetHeroPower() const;

	UFUNCTION(BlueprintCallable)
	const UDTTargetingStrategy* GetTargetingStrategy() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	EActivationTiming GetActivationTiming() const;
	
protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText HeroPowerName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText HeroPowerDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush HeroPowerIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UDTHeroPowerAbility> HeroPowerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UDTTargetingStrategy> TargetingStrategy;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EActivationTiming ActivationTiming = EActivationTiming::HoveredTarget;
};
