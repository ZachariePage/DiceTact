// Fill out your copyright notice in the Description page of Project Settings.


#include "DiceAbilityCaster.h"


// Add default functionality here for any IDiceAbilityCaster functions that are not pure virtual.
bool IDiceAbilityCaster::CanCastSpell_Implementation() const
{
	return GetAmountOfThrownDice_Implementation() < GetMaxThrowDice();
}

bool IDiceAbilityCaster::TryThrowDice_Implementation(UDTDiceItemInstance* DiceItemInstance)
{
	if (CanCastSpell_Implementation() == false)
	{
		return false;
	}

	return true;
}
