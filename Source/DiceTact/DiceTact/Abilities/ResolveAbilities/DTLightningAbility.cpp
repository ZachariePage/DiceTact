// Fill out your copyright notice in the Description page of Project Settings.


#include "DTLightningAbility.h"

#include "DiceTact/Abilities/Definitions/DTLightningData.h"
#include "DiceTact/Interface/DTDamageable.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "DiceTact/Interface/DTPushable.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UDTLightningAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                              const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);

	if (!AbilityData || !ActorInfo || !ActorInfo->OwnerActor.IsValid())
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	//HATEFULL BOILERPLATE TO REWORK WHEN TIEM
	OnDiceActivation(ActorInfo->OwnerActor->GetActorLocation());
	
	CachedHandle = Handle;
	CachedActorInfo = ActorInfo;
	CachedActivationInfo = ActivationInfo;
 
	HitActorsLock.Reset();
	ExplosionsTriggeredCount = 0;
	MaxExplosionsAllowed = AbilityData->MaxExplosions + AbilityData->AdditionalExplosionPerLevel * GetAbilityLevel();
 
	AActor* OwnerActor = ActorInfo->OwnerActor.Get();
	
	HitActorsLock.Add(OwnerActor);
 
	float InitialRadius = AbilityData->SizeOfInitialExplosion + AbilityData->SizeOfInitialExplosionPerLevel * GetAbilityLevel();

	TriggerInitialExplosionAt(OwnerActor->GetActorLocation(), InitialRadius);
 
	TArray<AActor*> InitialHits = GetOverlappingActors(OwnerActor->GetActorLocation(), InitialRadius);
 
	TArray<TWeakObjectPtr<AActor>> FirstWave;
	for (AActor* Target : InitialHits)
	{
		if (Target && !HitActorsLock.Contains(Target) && Target->Implements<UDTDamageable>())
		{
			HitActorsLock.Add(Target);
			FirstWave.Add(Target);
			IDTDamageable::Execute_TakeDamage(Target, CachedActorInfo->OwnerActor.Get(), AbilityData->Damage);
			FString message = Target->GetName() + " : take damage!";
			UJUEDevelopmentStatics::ReportDebugMessage(message);
			HitActorExplosion(Target);
			//OnDiceHitTarget(ActorInfo->OwnerActor->GetActorLocation(), Target->GetActorLocation(), Target);
			ApplyKnockback(Target, OwnerActor->GetActorLocation());
		}
	}
 
	if (FirstWave.Num() == 0)
	{
		FinishChain();
		return;
	}
	
	ProcessWave(FirstWave);
}

void UDTLightningAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                         const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(WaveTimerHandle);
	}
 
	//Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UDTLightningAbility::ProcessWave(TArray<TWeakObjectPtr<AActor>> WaveTargets)
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
				Candidate->Implements<UDTDamageable>() &&
				!HitActorsLock.Contains(Candidate))
			{
				HitActorsLock.Add(Candidate);
				NextWave.Add(Candidate);
				
				FDamageInfo Dmg = IDTDamageable::Execute_TakeDamage(Candidate, CachedActorInfo->OwnerActor.Get(), 1);
				if (Dmg.FinalDamage > 0)
				{
					FString message = Candidate->GetName() + " : take damage!";
					UJUEDevelopmentStatics::ReportDebugMessage(message);
					HitActorExplosion(Candidate);
					//OnDiceHitTarget(GetActorInfo().OwnerActor->GetActorLocation(), Candidate->GetActorLocation(), Candidate);
					ApplyKnockback(Target, GetActorInfo().OwnerActor->GetActorLocation());
				}
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

void UDTLightningAbility::ScheduleNextWave(TArray<TWeakObjectPtr<AActor>> NextWaveTargets)
{
	if (!GetWorld())
	{
		FinishChain();
		return;
	}
 
	FTimerDelegate Delegate = FTimerDelegate::CreateUObject(this, &UDTLightningAbility::ProcessWave, NextWaveTargets);
	GetWorld()->GetTimerManager().SetTimer(WaveTimerHandle, Delegate, AbilityData->DelayBetweenWaves, false);
}

TArray<AActor*> UDTLightningAbility::GetOverlappingActors(const FVector& Location, float Radius) const
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

void UDTLightningAbility::ApplyKnockback(AActor* Target, const FVector& ExplosionCenter)
{
	if (!IsValid(Target) || !AbilityData)
	{
		return;
	}
	
	FVector HorizontalDir = Target->GetActorLocation() - ExplosionCenter;
	HorizontalDir.Z = 0.f;
	if (!HorizontalDir.Normalize())
	{
		HorizontalDir = FVector::ForwardVector.RotateAngleAxis(FMath::FRandRange(0.f, 360.f), FVector::UpVector);
	}
	
	const FVector Velocity = HorizontalDir * AbilityData->XYImpulsion + FVector::UpVector * AbilityData->UpwardImpulsion;

	AActor* Instigator = CachedActorInfo ? CachedActorInfo->OwnerActor.Get() : nullptr;
	
	if (Target->GetClass()->ImplementsInterface(UDTPhysicalUnitInterface::StaticClass()))
	{
		IDTPhysicalUnitInterface::Execute_ApplyImpulse(Target,FPushData(Velocity, Instigator));
	}
}

void UDTLightningAbility::FinishChain()
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(WaveTimerHandle);
	}
 
	EndAbility(CachedHandle, CachedActorInfo, CachedActivationInfo, true, false);
}
