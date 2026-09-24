// Fill out your copyright notice in the Description page of Project Settings.


#include "InstantActionDice.h"

#include "AbilitySystemComponent.h"


// Sets default values
AInstantActionDice::AInstantActionDice()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AInstantActionDice::BeginPlay()
{
	Super::BeginPlay();
	//AbilitySystemComponent->GiveAbility(ResolveAbility);
}

void AInstantActionDice::FireAbility()
{
	ResolveDice();
	//const bool bActivated = AbilitySystemComponent->TryActivateAbilityByClass(ResolveAbility);
}

// Called every frame
void AInstantActionDice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsImmobile() && !bAbilityThrown)
	{
		FireAbility();
		bAbilityThrown = true;
	}
}

