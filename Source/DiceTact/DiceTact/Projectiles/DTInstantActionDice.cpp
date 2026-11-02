// Fill out your copyright notice in the Description page of Project Settings.


#include "DTInstantActionDice.h"

#include "AbilitySystemComponent.h"


// Sets default values
ADTInstantActionDice::ADTInstantActionDice()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADTInstantActionDice::BeginPlay()
{
	Super::BeginPlay();
	//AbilitySystemComponent->GiveAbility(ResolveAbility);
}

void ADTInstantActionDice::FireAbility()
{
	ResolveDice();
	//const bool bActivated = AbilitySystemComponent->TryActivateAbilityByClass(ResolveAbility);
}

// Called every frame
void ADTInstantActionDice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsImmobile() && !bAbilityThrown)
	{
		FireAbility();
		bAbilityThrown = true;
	}
}

