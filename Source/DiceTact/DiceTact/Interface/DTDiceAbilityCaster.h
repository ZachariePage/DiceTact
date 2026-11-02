// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AbilitySystemComponent.h"
#include "DTDiceAbilityCaster.generated.h"

class UDTDiceItemInstance;
// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UDTDiceAbilityCaster : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for actors that cast dice ability. It provide access to  ASC
 * It has method to retrieve info on if a unit can cast a spell or not
 */
class DICETACT_API IDTDiceAbilityCaster
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dice Ability")
	UAbilitySystemComponent* GetDiceCasterAbilitySystemComponent() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dice Ability")
	void OnCastedAbilityFinished();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dice Ability")
	bool CanCastSpell() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dice Ability")
	int AmountOfAvailibleMana();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dice Ability")
	bool TryThrowDice(UDTDiceItemInstance* DiceItemInstance);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dice Ability")
	int32 GetMaxThrowDice() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dice Ability")
	int GetAmountOfThrownDice() const;
protected:
	bool CanCastSpell_Implementation() const;


	virtual bool TryThrowDice_Implementation(UDTDiceItemInstance* DiceItemInstance);
};
