// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHeroInstance.h"

void UDTHeroInstance::SetBaseHeroDefinition(UDTHeroDefinition* HeroDefinition)
{
	BaseHeroDefinition = HeroDefinition;
}

void UDTHeroInstance::SetWornMedallion(const UDTMedaillonDefinition* MedallionDefinition)
{
	GrantedMedallion = MedallionDefinition;
}

const UDTMedaillonDefinition* UDTHeroInstance::GetWornMedallion() const
{
	return GrantedMedallion;
}

const UDTHeroDefinition* UDTHeroInstance::GetBaseHeroDefinition() const
{
	return BaseHeroDefinition;
}
