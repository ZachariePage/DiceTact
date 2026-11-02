// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DTDiceResolveDefinition.generated.h"

class UNiagaraSystem;
class UDTResolveGameplayAbility;

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
	TSoftClassPtr<UDTResolveGameplayAbility> GetResolveAbility() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TSoftObjectPtr<UNiagaraSystem> GetResolveFX() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TSoftObjectPtr<UMaterialInterface> GetResolveMaterial() const;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ResolveName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText ResolveDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush ResolveIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UDTResolveGameplayAbility> ResolveAbility;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UNiagaraSystem> ResolveFX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UMaterialInterface> ResolveMaterial;
};
