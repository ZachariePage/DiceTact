// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceObjectDefinition.h"
#include "Core/Projectiles/Dice.h"

TSubclassOf<ADice> UDTDiceObjectDefinition::GetDiceClass() const
{
	return Dice.LoadSynchronous();
}

int32 UDTDiceObjectDefinition::GetDiceFacesCount() const
{
	return FacesCount;
}
