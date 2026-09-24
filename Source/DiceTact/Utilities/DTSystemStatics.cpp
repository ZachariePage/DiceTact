// Fill out your copyright notice in the Description page of Project Settings.


#include "DTSystemStatics.h"

#include "Core/System/DiceTactGameInstance.h"
#include "Kismet/GameplayStatics.h"

const FDiceTactGameData& UDTSystemStatics::LoadSessionData(const UObject* WorldContextObject)
{
	UDiceTactGameInstance* DTGameInstance = Cast<UDiceTactGameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));

	return DTGameInstance->LoadGameData();
}

void UDTSystemStatics::CreateNewSessionData(const FDiceTactGameData& NewSessionData, const UObject* WorldContextObject)
{
	UDiceTactGameInstance* DTGameInstance = Cast<UDiceTactGameInstance>(UGameplayStatics::GetGameInstance(WorldContextObject));

	return DTGameInstance->CreateNewSaveData(NewSessionData);
}
