// Fill out your copyright notice in the Description page of Project Settings.


#include "DTGlueTrapAbility.h"

#include "Math/TransformCalculus3D.h"

void UDTGlueTrapAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                         const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                         const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (!ActorInfo || !ActorInfo->OwnerActor.IsValid() || !AbilityData || !AbilityData->ImmobilizedEffect)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	
	OnDiceActivation(ActorInfo->OwnerActor->GetActorLocation());
	
	FVector Location = ActorInfo->OwnerActor->GetActorLocation();
	float Radius = AbilityData->BaseRadius + AbilityData->RadiusPerLevel * GetAbilityLevel();
	int Duration = AbilityData->BaseDuration + AbilityData->DurationPerLevel * GetAbilityLevel();
	TSubclassOf<UGameplayEffect> Effect = AbilityData->ImmobilizedEffect;
	
	bool bSpawned = SpawnGlueTrapActorAt(Location, Radius, Duration, Effect);
	EndAbility(Handle, ActorInfo, ActivationInfo, true, !bSpawned);
}

bool UDTGlueTrapAbility::SpawnGlueTrapActorAt(const FVector Location, const float Radius, const int Duration, TSubclassOf<UGameplayEffect> Effect)
{
	FTransform SpawnTransform = FTransform(FRotator::ZeroRotator, Location);
	if (!GlueTrapActorClass)
		return false;
	
	if (ADTGlueTrapActor* SpawnedGlueTrap = GetWorld()->SpawnActorDeferred<ADTGlueTrapActor>(GlueTrapActorClass, SpawnTransform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn))
	{
		SpawnedGlueTrap->SetTrapRadius(Radius);
		SpawnedGlueTrap->SetTrapDuration(Duration);
		SpawnedGlueTrap->SetTrapEffect(Effect);
		
		SpawnedGlueTrap->FinishSpawning(SpawnTransform);
		return true;
	}
	return false;
}