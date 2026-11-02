// Fill out your copyright notice in the Description page of Project Settings.


#include "DTHealthComponent.h"


// Sets default values for this component's properties
UDTHealthComponent::UDTHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UDTHealthComponent::SetMaxValue(int NewValue)
{
	OnMaxHealthChanged.Broadcast(MaxHealth, NewValue);
	MaxHealth = NewValue;
}


// Called when the game starts
void UDTHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentHealth = StartingHealth;
}

void UDTHealthComponent::SetStartingValue(int NewValue, bool bSetCurrentHealth)
{
	StartingHealth = NewValue;

	if (bSetCurrentHealth)
	{
		SetHealth(StartingHealth);
	}
}

FDamageInfo UDTHealthComponent::TakeDamage(AActor* Source, float Damage)
{
	RemoveHealth(Damage);
	FDamageInfo damageInfo(Source, nullptr, Damage, !IsAlive());
	return damageInfo;
}

bool UDTHealthComponent::IsAlive() const
{
	return CurrentHealth > 0;
}

void UDTHealthComponent::RemoveHealth(int32 RemovedHealth)
{
	SetHealth(CurrentHealth - RemovedHealth);
}

void UDTHealthComponent::SetHealth(int32 NewValue)
{
	int32 OldValue = CurrentHealth;
	CurrentHealth = NewValue;

	if (IsAlive() == false)
	{
		CurrentHealth = 0;
		OnHealthDepleted.Broadcast();
	}
	OnCurrentHealthChanged.Broadcast(OldValue, CurrentHealth);
}

