// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroInstance.h"

void UDTHeroInstance::SetBaseHeroDefinition(UDTHeroDefinition* HeroDefinition)
{
	BaseHeroDefinition = HeroDefinition;
}

UDTHeroDefinition* UDTHeroInstance::GetBaseHeroDefinition() const
{
	return BaseHeroDefinition;
}
