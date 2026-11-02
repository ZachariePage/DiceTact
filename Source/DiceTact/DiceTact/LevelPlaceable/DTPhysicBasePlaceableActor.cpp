// Fill out your copyright notice in the Description page of Project Settings.


#include "DTPhysicBasePlaceableActor.h"


// Sets default values
ADTPhysicBasePlaceableActor::ADTPhysicBasePlaceableActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PhysicalReaction = CreateDefaultSubobject<UPhysicalReactionComponent>(TEXT("PhysicalReaction"));
}

// Called when the game starts or when spawned
void ADTPhysicBasePlaceableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADTPhysicBasePlaceableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTPhysicBasePlaceableActor::ApplyImpulse_Implementation(const FPushData& Info)
{
	IDTPhysicalUnitInterface::ApplyImpulse_Implementation(Info);
}

