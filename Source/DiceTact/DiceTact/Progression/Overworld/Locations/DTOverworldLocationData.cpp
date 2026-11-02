// Fill out your copyright notice in the Description page of Project Settings.


#include "DTOverworldLocationData.h"

#include "DiceTact/Progression/Overworld/Widgets/DTOverworldLocationWidget.h"
#include "DiceTact/System/DiceTactSaveGame.h"
#include "DiceTact/Utilities/DTSystemStatics.h"

void UDTOverworldLocationData::Init()
{
	OwnerLocationWidget = Cast<UDTOverworldLocationWidget>(GetOuter());
}

void UDTOverworldLocationData::TryTravel()
{
	OnPlayerTravel();
}

void UDTOverworldLocationData::FinishTravel()
{
	UDTSystemStatics::GetLoadedGameSave()->SetCurrentLocation(OwnerLocationWidget->GetLocationIdentifier());
	UDTSystemStatics::SaveGameToDisk();
	OnTravelEnd.Broadcast();
}
