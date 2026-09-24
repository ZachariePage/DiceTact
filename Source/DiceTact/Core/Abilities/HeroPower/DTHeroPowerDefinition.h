// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Abilities/Strategies/DTTargetingStrategy.h"
#include "Engine/DataAsset.h"
#include "DTHeroPowerDefinition.generated.h"

class UHeroPowerAbility;
/**
 * 
 */
UCLASS()
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
	TSubclassOf<UHeroPowerAbility> GetHeroPower() const;

	UFUNCTION(BlueprintCallable)
	UDTTargetingStrategy* GetTargetingStrategy() const;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText HeroPowerName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText HeroPowerDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush HeroPowerIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UHeroPowerAbility> HeroPowerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UDTTargetingStrategy> TargetingStrategy;
};
