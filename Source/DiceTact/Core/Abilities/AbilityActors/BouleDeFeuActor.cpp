// Fill out your copyright notice in the Description page of Project Settings.


#include "BouleDeFeuActor.h"


// Sets default values
ABouleDeFeuActor::ABouleDeFeuActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BouleDeFeuMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BouleDeFeuMesh"));
	
	BouleDeFeuMesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void ABouleDeFeuActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABouleDeFeuActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABouleDeFeuActor::PropulseBouleDeFeu(FVector impulse)
{
	BouleDeFeuMesh->AddImpulse(
	   impulse,
	   NAME_None,
	   true
	);
}

