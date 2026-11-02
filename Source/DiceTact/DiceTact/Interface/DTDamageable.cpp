// Fill out your copyright notice in the Description page of Project Settings.


#include "DTDamageable.h"


// Add default functionality here for any IDamageable functions that are not pure virtual.

FDamageInfo IDTDamageable::TakeDamage_Implementation(AActor* Dealer, int Damage)
{
	UDTHealthComponent* HealthComponent = nullptr;
	GetHealthComponent(HealthComponent);

	return HealthComponent->TakeDamage(Dealer, Damage);
}
