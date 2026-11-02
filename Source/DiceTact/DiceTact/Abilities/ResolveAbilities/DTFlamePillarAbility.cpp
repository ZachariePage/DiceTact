// Fill out your copyright notice in the Description page of Project Settings.


#include "DTFlamePillarAbility.h"

#include "DiceTact/Abilities/Definitions/DTFirePillarData.h"
#include "DiceTact/Interface/DTDamageable.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "DiceTact/Interface/DTPushable.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UDTFlamePillarAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                   const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	if (!AbilityData || !ActorInfo || !ActorInfo->OwnerActor.IsValid())
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}
	HitActorsLock.Reset();

	ADTDice* SourceDice = Cast<ADTDice>(ActorInfo->OwnerActor.Get());
	if (!SourceDice)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	CachedHandle = Handle;
	CachedActorInfo = ActorInfo;
	CachedActivationInfo = ActivationInfo;

	RemainingPoints = SourceDice->GetBouncePoints();
	CurrentIndex = 0;

	if (RemainingPoints.Num() == 0)
	{
		RemainingPoints.Add(SourceDice->GetActorLocation());
	}

	ExplodeNextPoint();
}

void UDTFlamePillarAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(SequenceTimerHandle);
	}
}

void UDTFlamePillarAbility::ExplodeNextPoint()
{
	if (CurrentIndex >= RemainingPoints.Num())
	{
		const FVector Point = CachedActorInfo->OwnerActor->GetActorLocation();
		const float Radius = AbilityData->sizeOfExplosion + AbilityData->sizeOfExplosionPerLevel * GetAbilityLevel();
		TriggerExplosionAt(Point, Radius);

		for (AActor* Target : GetOverlappingActors(Point, Radius))
		{
			if (!Target || !Target->Implements<UDTDamageable>()) continue;
			
		
			if (AbilityData->bOnlyOneDamagePerActor && HitActorsLock.Contains(Target)) continue;
			

			if (AbilityData->bOnlyOneDamagePerActor)
			{
				HitActorsLock.Add(Target);
			}

			IDTDamageable::Execute_TakeDamage(
				Target,
				CachedActorInfo->OwnerActor.Get(),
				AbilityData->DamagePerExplosion
			);

			FString Message = Target->GetName() + " : take damage!";
			UJUEDevelopmentStatics::ReportDebugMessage(Message);

			HitActorExplosion(Target);
			OnDiceHitTarget(Point, Target->GetActorLocation(), Target);
			ApplyKnockback(Target, GetActorInfo().OwnerActor->GetActorLocation());
		}
		EndAbility(CachedHandle, CachedActorInfo, CachedActivationInfo, true, false);
		return;
	}

	const FVector Point = RemainingPoints[CurrentIndex];
	const float Radius = AbilityData->sizeOfExplosion + AbilityData->sizeOfExplosionPerLevel * GetAbilityLevel();

	TriggerExplosionAt(Point, Radius);

	for (AActor* Target : GetOverlappingActors(Point, Radius))
	{
		if (!Target || !Target->Implements<UDTDamageable>()) continue;
			
		
		if (AbilityData->bOnlyOneDamagePerActor && HitActorsLock.Contains(Target)) continue;
			

		if (AbilityData->bOnlyOneDamagePerActor)
		{
			HitActorsLock.Add(Target);
		}

		IDTDamageable::Execute_TakeDamage(
			Target,
			CachedActorInfo->OwnerActor.Get(),
			AbilityData->DamagePerExplosion
		);

		FString Message = Target->GetName() + " : take damage!";
		UJUEDevelopmentStatics::ReportDebugMessage(Message);

		HitActorExplosion(Target);
		OnDiceHitTarget(Point, Target->GetActorLocation(), Target);
		ApplyKnockback(Target, GetActorInfo().OwnerActor->GetActorLocation());
	}

	++CurrentIndex;
	if (AbilityData->timeBetweenExplosion > 0)
	{
		ScheduleNextExplosion();
	}
	else
	{
		ExplodeNextPoint();
	}
	
}

void UDTFlamePillarAbility::ScheduleNextExplosion()
{
	FTimerDelegate Delegate = FTimerDelegate::CreateUObject(this, &UDTFlamePillarAbility::ExplodeNextPoint);
	GetWorld()->GetTimerManager().SetTimer(SequenceTimerHandle, Delegate, AbilityData->timeBetweenExplosion, false);
}

TArray<AActor*> UDTFlamePillarAbility::GetOverlappingActors(const FVector& Location, float Radius) const
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

void UDTFlamePillarAbility::ApplyKnockback(AActor* Target, const FVector& ExplosionCenter)
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
		IDTPushable::Execute_PushToward(Target, FPushData(Velocity, Instigator));
	}
}
