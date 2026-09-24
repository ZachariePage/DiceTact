// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateBrush.h"
#include "DTDiceElementDefinition.generated.h"

class UNiagaraSystem;
class UGameplayEffect;

UENUM(Blueprintable)
enum class EDiceElementType : uint8
{
	Neutral,
	Fire,
	Ice,
	//Lightning,
	Water
};

/**
 *  Base Information regarding a dice Element. Cannot change at runtime.
 */
UCLASS(Blueprintable, Const)
class DICETACT_API UDTDiceElementDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetElementName() const;
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FText& GetElementDescription() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FSlateBrush& GetElementIconBrush() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	EDiceElementType GetElementType() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FLinearColor& GetElementColor() const;

	/*
	 * Since this asset is not mandatory, it is not automatically loaded here.
	 * Load it Async in blueprints and THEN add it. 
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TSoftObjectPtr<UNiagaraSystem>& GetElementVfx() const;

	/*
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TSubclassOf<UGameplayEffect> GetElementEffect() const;
	*/

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText ElementName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText ElementDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EDiceElementType ElementType;

	/*
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UGameplayEffect> ElementEffect;
	*/
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Feedback")
	FSlateBrush ElementIconBrush;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Feedback")
	FLinearColor ElementColor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Feedback")
	TSoftObjectPtr<UNiagaraSystem> ElementVFX;
	
};
