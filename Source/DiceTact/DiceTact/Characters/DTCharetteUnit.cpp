// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCharetteUnit.h"

#include "DiceTact/DTHealthComponent.h"
#include "DiceTact/Projectiles/DTDice.h"


// Sets default values
ADTCharetteUnit::ADTCharetteUnit()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	HealthComponent = CreateDefaultSubobject<UDTHealthComponent>("Health Component");
	
}

AActor* ADTCharetteUnit::GetControlledActor_Implementation()
{
	return this;
}

void ADTCharetteUnit::GetHealthComponent(UDTHealthComponent*& _HealthComponent)
{
	_HealthComponent = HealthComponent;
}

FDamageInfo ADTCharetteUnit::TakeDamage_Implementation(AActor* Dealer, int Damage)
{
	if (Dealer->IsA(ADTDice::StaticClass()))
	{
		return FDamageInfo(Dealer, this, 0, false);
	}
	
	return IDTDamageable::TakeDamage_Implementation(Dealer, Damage);
}

// Called when the game starts or when spawned
void ADTCharetteUnit::BeginPlay()
{
	Super::BeginPlay();
	
}


