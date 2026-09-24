// Fill out your copyright notice in the Description page of Project Settings.


#include "EndOfTurnDice.h"


// Sets default values
AEndOfTurnDice::AEndOfTurnDice()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEndOfTurnDice::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEndOfTurnDice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

