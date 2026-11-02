// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceElementDefinition.h"

const FText& UDTDiceElementDefinition::GetElementName() const
{
	return ElementName;
}

const FText& UDTDiceElementDefinition::GetElementDescription() const
{
	return ElementDescription;
}

const FSlateBrush& UDTDiceElementDefinition::GetElementIconBrush() const
{
	return ElementIconBrush;
}

EDiceElementType UDTDiceElementDefinition::GetElementType() const
{
	return ElementType;
}

const FLinearColor& UDTDiceElementDefinition::GetElementColor() const
{
	return ElementColor;
}

const TSoftObjectPtr<UNiagaraSystem>& UDTDiceElementDefinition::GetElementVfx() const
{
	return ElementVFX;
}

/*
TSubclassOf<UGameplayEffect> UDTDiceElementDefinition::GetElementEffect() const
{
	return ElementEffect;//.LoadSynchronous();
}
*/
