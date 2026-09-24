// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Health = StartingHealth;
	MaxHealth = StartingHealth;
}

FDamageInfo UHealthComponent::TakeDamage(AActor* Source, float Damage)
{
	Health -= Damage;
	bool killed = false;
	if (Health <= 0)
	{
		killed = true;
	}
	FDamageInfo damageInfo(Source, nullptr, 0, killed);
	return damageInfo;
}

