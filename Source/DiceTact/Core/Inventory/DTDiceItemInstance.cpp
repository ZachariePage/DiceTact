// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceItemInstance.h"

/*
void UDTDiceItemInstance::SetDiceElement(UDTDiceElementDefinition* _ElementDefinition)
{
	ElementDefinition = _ElementDefinition;
}
*/

void UDTDiceItemInstance::SetDiceObject(UDTDiceObjectDefinition* _ObjectDefinition)
{
	ObjectDefinition = _ObjectDefinition;
}

void UDTDiceItemInstance::SetDiceResolve(UDTDiceResolveDefinition* NewResolveDef)
{
	ResolveDefinition = NewResolveDef;
}



const UDTDiceObjectDefinition* UDTDiceItemInstance::GetDiceObjectDefinition() const
{
	return ObjectDefinition;
}

/*
const UDTDiceElementDefinition* UDTDiceItemInstance::GetDiceElementDefinition() const
{
	return ElementDefinition;
}*/

const UDTDiceResolveDefinition* UDTDiceItemInstance::GetResolveDefinition() const
{
	return ResolveDefinition;
}

ECollisionEffectType UDTDiceItemInstance::GetDiceCollisionEffect() const
{
	return InterDiceCollisionEffect;
}

