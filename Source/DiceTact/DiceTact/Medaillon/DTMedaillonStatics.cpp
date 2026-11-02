// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMedaillonStatics.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Abilities/GameplayAbilityTypes.h"

int UDTMedaillonStatics::SendMedaillonEvent(AActor* Owner, FGameplayTag EventTag, UObject* OptionalObject,
                                            float Magnitude, AActor* Target)
{
	if (!IsValid(Owner) || !EventTag.IsValid())
	{
		return 0;
	}
 
	UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Owner, true);
	if (!ASC)
	{
		return 0;
	}
	
	AActor* finalTarget = nullptr;
	if (IsValid(Target))
	{
		finalTarget = Target;
	}
	else
	{
		finalTarget = Cast<AActor>(OptionalObject);
	}
	FGameplayEventData Payload;
	Payload.EventTag = EventTag;
	Payload.Instigator = Owner;
	Payload.Target = finalTarget;
	Payload.OptionalObject = OptionalObject;
	Payload.EventMagnitude = Magnitude;
 
	return ASC->HandleGameplayEvent(EventTag, &Payload);
}
