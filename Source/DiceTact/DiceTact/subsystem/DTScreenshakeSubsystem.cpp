// Fill out your copyright notice in the Description page of Project Settings.


#include "DTScreenshakeSubsystem.h"

#include "Kismet/GameplayStatics.h"

void UDTScreenshakeSubsystem::PlayShake(TSubclassOf<UCameraShakeBase> ShakeClass, float Scale)
{
	if (!ShakeClass)
	{
		return;
	}
 
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC && PC->PlayerCameraManager)
	{
		PC->PlayerCameraManager->StartCameraShake(ShakeClass, Scale);
	}
}

void UDTScreenshakeSubsystem::PlayExplosionShake(float Scale)
{
	PlayShake(DefaultShake, Scale);
}
