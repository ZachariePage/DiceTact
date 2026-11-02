// Fill out your copyright notice in the Description page of Project Settings.


#include "DTEncounterLocationData.h"

TSoftObjectPtr<UWorld> UDTEncounterLocationData::GetEncounterMap() const
{
	return EncounterMap;
}
