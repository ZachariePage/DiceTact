// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDiceResolveDefinition.h"
#include "DiceTact/Abilities/ResolveAbilities/DTResolveGameplayAbility.h"

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

TSoftClassPtr<UDTResolveGameplayAbility> UDTDiceResolveDefinition::GetResolveAbility() const
{
	return ResolveAbility;
}

TSoftObjectPtr<UNiagaraSystem> UDTDiceResolveDefinition::GetResolveFX() const
{
	return ResolveFX;
}

TSoftObjectPtr<UMaterialInterface> UDTDiceResolveDefinition::GetResolveMaterial() const
{
	return ResolveMaterial;
}

