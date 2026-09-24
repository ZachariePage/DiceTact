// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTDiceResolveDefinition.generated.h"

class UResolveGameplayAbility;

/**
 * Definition of an Resolve Ability
 * A Resolve ability is an ability that activates at the end of a turn.
 */

UCLASS()
class DICETACT_API UDTDiceResolveDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetResolveName() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetResolveDescription() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSlateBrush& GetResolveIcon() const;
	
	UFUNCTION(BlueprintCallable)
	TSubclassOf<UResolveGameplayAbility> GetResolveAbility() const;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ResolveName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ResolveDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush ResolveIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UResolveGameplayAbility> ResolveAbility;
};
