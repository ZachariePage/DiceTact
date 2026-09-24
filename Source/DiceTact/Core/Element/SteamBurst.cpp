// Fill out your copyright notice in the Description page of Project Settings.


#include "SteamBurst.h"

#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/KismetMathLibrary.h"

void USteamBurst::Execute_Implementation(AActor* FirstActor, AActor* SecondActor, FVector Location, UWorld* World)
{
	Super::Execute_Implementation(FirstActor, SecondActor, Location, World);
	UClass* spawnedClass = CubeClass.LoadSynchronous();
	if (!IsValid(FirstActor))
	{
		UJUEDevelopmentStatics::ReportErrorMessage("no actor", this);
		return;
	}
	if (spawnedClass)
	{
		const FVector SpawnLocation = FirstActor->GetActorLocation() + FVector(0,0,250.f);
		const FTransform SpawnTransform = UKismetMathLibrary::Conv_VectorToTransform(SpawnLocation);
		
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		World->SpawnActor<AActor>(spawnedClass, SpawnTransform, SpawnParameters);
	}
	
}
