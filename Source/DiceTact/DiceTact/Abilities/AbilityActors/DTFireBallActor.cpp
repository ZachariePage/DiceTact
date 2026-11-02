// Fill out your copyright notice in the Description page of Project Settings.


#include "DTFireBallActor.h"


// Sets default values
ADTFireBallActor::ADTFireBallActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BouleDeFeuMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BouleDeFeuMesh"));
	
	BouleDeFeuMesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void ADTFireBallActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADTFireBallActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTFireBallActor::PropulseBouleDeFeu(FVector impulse)
{
	BouleDeFeuMesh->AddImpulse(
	   impulse,
	   NAME_None,
	   true
	);
}

