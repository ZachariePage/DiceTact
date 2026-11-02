// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceObjectDefinition.h"
#include "DiceTact/Projectiles/DTDice.h"

TSoftClassPtr<ADTDice> UDTDiceObjectDefinition::GetDiceClass() const
{
	return Dice;
}

int32 UDTDiceObjectDefinition::GetDiceFacesCount() const
{
	return FacesCount;
}

const FText& UDTDiceObjectDefinition::GetDisplayedName() const
{
	return DisplayedName;
}

const FText& UDTDiceObjectDefinition::GetDisplayedDescription() const
{
	return DisplayedDescription;
}

const FSlateBrush& UDTDiceObjectDefinition::GetObjectBrush() const
{
	return ObjectBrush;
}
