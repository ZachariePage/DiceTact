// Fill out your copyright notice in the Description page of Project Settings.


#include "DTOverworldLocationDefinition.h"

const FText& UDTOverworldLocationDefinition::GetLocationText() const
{
	return LocationText;
}

const FText& UDTOverworldLocationDefinition::GetLocationDescription() const
{
	return LocationDescription;
}

const FSlateBrush& UDTOverworldLocationDefinition::GetLocationBrush() const
{
	return LocationBrush;
}