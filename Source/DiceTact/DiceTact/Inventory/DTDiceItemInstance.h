// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DTDiceItemInstance.generated.h"

class UDTDiceResolveDefinition;
class UDTDiceObjectDefinition;
class UDTDiceElementDefinition;

UENUM()
enum class ECollisionEffectType : uint8
{
	Subdivide,
	EffectCombination
};

UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class DICETACT_API UDTDiceItemInstance : public UObject
{
	GENERATED_BODY()

public:

	/*
	UFUNCTION(BlueprintCallable, Category="Set Definitions")
	void SetDiceElement(UDTDiceElementDefinition* ElementDefinition);
	*/
	UFUNCTION(BlueprintCallable, Category="Set Definitions")
	void SetDiceObject(UDTDiceObjectDefinition* ObjectDefinition);
	UFUNCTION(BlueprintCallable, Category="Set Definitions")
	void SetDiceResolve(UDTDiceResolveDefinition* NewResolveDef);

	//UFUNCTION(BlueprintCallable, Category="Set Definitions")
	//void SetCollisionEffectDefinition(TheClassOrSmthng* ElementDefinition);
	

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTDiceObjectDefinition* GetDiceObjectDefinition() const;

	/*
	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTDiceElementDefinition* GetDiceElementDefinition() const;
	*/

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTDiceResolveDefinition* GetResolveDefinition() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	ECollisionEffectType GetDiceCollisionEffect() const;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ToolTip="Which physical Dice to use?"))
	TObjectPtr<UDTDiceObjectDefinition> ObjectDefinition;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ToolTip="Which Ability should be used at the end of a turn?"))
	TObjectPtr<UDTDiceResolveDefinition> ResolveDefinition;
	
	/*
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ToolTip="Which element is the Dice affected?"))
	TObjectPtr<UDTDiceElementDefinition> ElementDefinition;
	*/
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ECollisionEffectType InterDiceCollisionEffect;
};
