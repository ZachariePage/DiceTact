// Fill out your copyright notice in the Description page of Project Settings.


#include "Foudre.h"

#include "Core/Abilities/Definitions/DTFoudreData.h"
#include "Core/Interface/IDamageable.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UFoudre::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                              const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (!AbilityData || !ActorInfo || !ActorInfo->OwnerActor.IsValid())
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
 
	CachedHandle = Handle;
	CachedActorInfo = ActorInfo;
	CachedActivationInfo = ActivationInfo;
 
	HitActorsLock.Reset();
	ExplosionsTriggeredCount = 0;
	MaxExplosionsAllowed = AbilityData->MaxExplosions + AbilityData->AdditionalExplosionPerLevel * GetAbilityLevel();
 
	AActor* OwnerActor = ActorInfo->OwnerActor.Get();
	
	HitActorsLock.Add(OwnerActor);
 
	float InitialRadius = AbilityData->SizeOfInitialExplosion + AbilityData->SizeOfInitialExplosionPerLevel * GetAbilityLevel();

	TriggerExplosionAt(OwnerActor->GetActorLocation(), InitialRadius);
 
	TArray<AActor*> InitialHits = GetOverlappingActors(OwnerActor->GetActorLocation(), InitialRadius);
 
	TArray<TWeakObjectPtr<AActor>> FirstWave;
	for (AActor* Target : InitialHits)
	{
		if (Target && !HitActorsLock.Contains(Target) && Target->Implements<UIDamageable>())
		{
			HitActorsLock.Add(Target);
			FirstWave.Add(Target);
			IIDamageable::Execute_TakeDamage(Target, CachedActorInfo->OwnerActor.Get(), 1);
			FString message = Target->GetName() + " : take damage!";
			UJUEDevelopmentStatics::ReportDebugMessage(message);
			HitActorExplosion(Target);
		}
	}
 
	if (FirstWave.Num() == 0)
	{
		FinishChain();
		return;
	}
	
	ProcessWave(FirstWave);
}

void UFoudre::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                         const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(WaveTimerHandle);
	}
 
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UFoudre::ProcessWave(TArray<TWeakObjectPtr<AActor>> WaveTargets)
{
	if (!AbilityData)
	{
		FinishChain();
		return;
	}
 
	float OtherRadius = AbilityData->SizeOfOtherExplosion + AbilityData->SizeOfOtherExplosionPerLevel * GetAbilityLevel();
 
	TArray<TWeakObjectPtr<AActor>> NextWave;
	
	for (const TWeakObjectPtr<AActor>& WeakTarget : WaveTargets)
	{
		if (ExplosionsTriggeredCount >= MaxExplosionsAllowed)
		{
			break;
		}
 
		AActor* Target = WeakTarget.Get();
		if (!Target)
		{
			continue;
		}
 
		TriggerExplosionAt(Target->GetActorLocation(), OtherRadius);
		++ExplosionsTriggeredCount;
 
		TArray<AActor*> NewlyHit = GetOverlappingActors(Target->GetActorLocation(), OtherRadius);
		for (AActor* Candidate : NewlyHit)
		{
			if (Candidate &&
				Candidate->Implements<UIDamageable>() &&
				!HitActorsLock.Contains(Candidate))
			{
				HitActorsLock.Add(Candidate);
				NextWave.Add(Candidate);
				
				IIDamageable::Execute_TakeDamage(Candidate, CachedActorInfo->OwnerActor.Get(), 1);
				FString message = Candidate->GetName() + " : take damage!";
				UJUEDevelopmentStatics::ReportDebugMessage(message);
				HitActorExplosion(Candidate);
			}
		}
	}
 
	if (NextWave.Num() > 0 && ExplosionsTriggeredCount < MaxExplosionsAllowed)
	{
		ScheduleNextWave(NextWave);
	}
	else
	{
		FinishChain();
	}
}

void UFoudre::ScheduleNextWave(TArray<TWeakObjectPtr<AActor>> NextWaveTargets)
{
	if (!GetWorld())
	{
		FinishChain();
		return;
	}
 
	FTimerDelegate Delegate = FTimerDelegate::CreateUObject(this, &UFoudre::ProcessWave, NextWaveTargets);
	GetWorld()->GetTimerManager().SetTimer(WaveTimerHandle, Delegate, AbilityData->DelayBetweenWaves, false);
}

TArray<AActor*> UFoudre::GetOverlappingActors(const FVector& Location, float Radius) const
{
	TArray<AActor*> Result;
 
	if (!GetWorld() || !AbilityData)
	{
		return Result;
	}
 
	TArray<FOverlapResult> Overlaps;
	const FCollisionShape Sphere = FCollisionShape::MakeSphere(Radius);
 
	FCollisionObjectQueryParams ObjectQueryParams;
	for (const TEnumAsByte<EObjectTypeQuery>& ObjectType : AbilityData->HitObjectTypes)
	{
		ObjectQueryParams.AddObjectTypesToQuery(UEngineTypes::ConvertToCollisionChannel(ObjectType));
	}
 
	GetWorld()->OverlapMultiByObjectType(Overlaps, Location, FQuat::Identity, ObjectQueryParams, Sphere);
 
	AActor* OwnerActor = (CachedActorInfo && CachedActorInfo->OwnerActor.IsValid()) ? CachedActorInfo->OwnerActor.Get() : nullptr;
 
	for (const FOverlapResult& Overlap : Overlaps)
	{
		AActor* HitActor = Overlap.GetActor();
		if (HitActor && HitActor != OwnerActor)
		{
			Result.AddUnique(HitActor);
		}
	}
 
	return Result;
}

void UFoudre::FinishChain()
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(WaveTimerHandle);
	}
 
	EndAbility(CachedHandle, CachedActorInfo, CachedActivationInfo, true, false);
}
