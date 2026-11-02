// Fill out your copyright notice in the Description page of Project Settings.


#include "DTArrowActor.h"


// Sets default values
ADTArrowActor::ADTArrowActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ArrowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowMesh"));
	
	ArrowMesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void ADTArrowActor::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ADTArrowActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTArrowActor::PropulseArrow(FVector impulse)
{
	ArrowMesh->AddImpulse(
	   impulse,
	   NAME_None,
	   true
	);
}

