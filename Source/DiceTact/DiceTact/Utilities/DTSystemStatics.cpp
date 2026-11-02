// Fill out your copyright notice in the Description page of Project Settings.


#include "DTSystemStatics.h"

#include "DiceTact/System/DiceTactGameInstance.h"
#include "Kismet/GameplayStatics.h"

UDiceTactGameInstance* UDTSystemStatics::GetDTGameInstance()
{
	return Cast<UDiceTactGameInstance>(GEngine->GameViewport->GetGameInstance());
}

bool UDTSystemStatics::IsSaveGameLoaded()
{
	return GetDTGameInstance()->IsSaveGameLoaded();
}

UDiceTactSaveGame* UDTSystemStatics::GetLoadedGameSave()
{
	return GetDTGameInstance()->GetLoadedGameSave();
}

TSoftObjectPtr<UWorld> UDTSystemStatics::GetNextLevel()
{
	return GetDTGameInstance()->GetNextLevel();
}

bool UDTSystemStatics::SaveGameToDisk()
{
	return GetDTGameInstance()->SaveGameToDisk();
}

int32 UDTSystemStatics::GetCartCurrentHealth(const FDiceTactGameData& GameData)
{
	return GameData.CartData.CurrentHealth;
}

int32 UDTSystemStatics::GetCartMaxHealth(const FDiceTactGameData& GameData)
{
	return GameData.CartData.MaxHealth;
}
