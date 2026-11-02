// Fill out your copyright notice in the Description page of Project Settings.


#include "DTGameStartDataHolder.h"

#include "Kismet/GameplayStatics.h"


ADTGameStartDataHolder* ADTGameStartDataHolder::Get(const UObject* WorldContextObject)
{
	return Cast<ADTGameStartDataHolder>(UGameplayStatics::GetActorOfClass(WorldContextObject, StaticClass()));
}
