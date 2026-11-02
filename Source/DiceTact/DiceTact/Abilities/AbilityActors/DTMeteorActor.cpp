// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMeteorActor.h"


// Sets default values
ADTMeteorActor::ADTMeteorActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeteorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeteorMesh"));
	
	MeteorMesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void ADTMeteorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADTMeteorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTMeteorActor::PropulseMeteor(FVector impulse)
{
	MeteorMesh->AddImpulse(
	   impulse,
	   NAME_None,
	   true
	);
}

