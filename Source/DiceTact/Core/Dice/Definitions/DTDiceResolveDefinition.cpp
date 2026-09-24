// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceResolveDefinition.h"
#include "Core/Abilities/ResolveAbilities/ResolveGameplayAbility.h"

const FText& UDTDiceResolveDefinition::GetResolveName() const
{
	return ResolveName;
}

const FText& UDTDiceResolveDefinition::GetResolveDescription() const
{
	return ResolveDescription;
}

const FSlateBrush& UDTDiceResolveDefinition::GetResolveIcon() const
{
	return ResolveIcon;
}

TSubclassOf<UResolveGameplayAbility> UDTDiceResolveDefinition::GetResolveAbility() const
{
	return ResolveAbility.LoadSynchronous();
}

