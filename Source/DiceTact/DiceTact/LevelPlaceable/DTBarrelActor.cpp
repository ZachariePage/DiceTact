// Fill out your copyright notice in the Description page of Project Settings.


#include "DTBarrelActor.h"

#include "JUE/System/JUEDevelopmentStatics.h"
#include "JUE/UI/JUEActionContext.h"


// Sets default values
ADTBarrelActor::ADTBarrelActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADTBarrelActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADTBarrelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTBarrelActor::ApplyImpulse_Implementation(const FPushData& Info)
{
	UJUEDevelopmentStatics::ReportDebugMessage("debug physiccc");
	IDTPhysicalUnitInterface::ApplyImpulse_Implementation(Info);
}

