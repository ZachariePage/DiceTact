// Fill out your copyright notice in the Description page of Project Settings.


#include "BouleDeFeu.h"

#include "Core/Abilities/AbilityActors/BouleDeFeuActor.h"
#include "Core/Abilities/Definitions/DTBouleDeFeu.h"
#include "Core/Interface/Pushable.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"

void UBouleDeFeu::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                  const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (!AbilityData || !AbilityData->BouleToSpawn)
	{
		K2_EndAbility();
		return;
	}

	//HATEFULL BOILERPLATE TO REWORK WHEN TIEM
	OnDiceActivation(ActorInfo->OwnerActor->GetActorLocation());

	cachedDice = ActorInfo->OwnerActor;
	cachedPawn = ActorInfo->OwnerActor;
	FVector BaseTargetLocation = ActorInfo->OwnerActor->GetActorLocation();
	FVector SpawnLocation = ActorInfo->AvatarActor->GetActorLocation() + FVector(0, 0, 200);
	FVector TargetLocation = BaseTargetLocation;
	FRotator SpawnRotation = (TargetLocation - SpawnLocation).Rotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = ActorInfo->OwnerActor.Get();
	SpawnParams.Instigator = Cast<APawn>(ActorInfo->AvatarActor.Get());
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	//ABouleDeFeuActor* Boule = GetWorld()->SpawnActor<ABouleDeFeuActor>(AbilityData->BouleToSpawn, SpawnLocation, SpawnRotation, SpawnParams);
	//if (!Boule)
	//{
	//	K2_EndAbility();
	//	return;
	//}

	//FVector OutVelocity;
	//bool bFound = UGameplayStatics::SuggestProjectileVelocity_CustomArc(Boule, OutVelocity, SpawnLocation, TargetLocation, 0.f, AbilityData->Angle);
	//
	//if (!bFound)
	//{
	//	Boule->Destroy();
	//	K2_EndAbility();
	//	return;
	//}

	//Boule->PropulseBouleDeFeu(OutVelocity);

	//SpawnedBoule = Boule;
	//Boule->OnActorHit.AddDynamic(this, &UBouleDeFeu::HandleBouleHit);
	TriggerExplosion(ActorInfo->OwnerActor->GetActorLocation());
}

void UBouleDeFeu::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(CheckRestTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(MaxWaitTimerHandle);
	}

	if (SpawnedBoule.IsValid())
	{
		SpawnedBoule->OnActorHit.RemoveDynamic(this, &UBouleDeFeu::HandleBouleHit);
		SpawnedBoule->Destroy();
		SpawnedBoule = nullptr;
	}

	PropelledTargets.Reset();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UBouleDeFeu::HandleBouleHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (SpawnedBoule.IsValid())
	{
		SpawnedBoule->OnActorHit.RemoveDynamic(this, &UBouleDeFeu::HandleBouleHit);
	}

	FVector ExplosionLocation = Hit.ImpactPoint;
	TriggerExplosion(ExplosionLocation);

	if (SpawnedBoule.IsValid())
	{
		SpawnedBoule->Destroy();
		SpawnedBoule = nullptr;
	}
}

void UBouleDeFeu::TriggerExplosion(const FVector& ExplosionLocation)
{
	SpawnNyagara(ExplosionLocation);
	TArray<FOverlapResult> Overlaps;
	float radius = AbilityData->BaseRadius + AbilityData->AdditionalRadius * GetAbilityLevel();
	FCollisionShape Sphere = FCollisionShape::MakeSphere(radius);

	FCollisionObjectQueryParams ObjectQueryParams;

	for (const TEnumAsByte<EObjectTypeQuery>& ObjectType : AbilityData->PropelledObjectTypes)
	{
		const ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(ObjectType);

		ObjectQueryParams.AddObjectTypesToQuery(CollisionChannel);
	}

	GetWorld()->OverlapMultiByObjectType(
		Overlaps,
		ExplosionLocation,
		FQuat::Identity,
		ObjectQueryParams,
		Sphere
	);
    
	TArray<UPrimitiveComponent*> Targets;
	TArray<AActor*> PushableTargets;
	
	for (const FOverlapResult& Result : Overlaps)
	{
		if (UPrimitiveComponent* hit = Result.GetComponent())
		{
			if (hit->IsSimulatingPhysics() && hit->GetOwner() != cachedDice && hit->GetOwner() != cachedPawn)
			{
				Targets.AddUnique(hit);
			}
			else if (AActor* Owner = hit->GetOwner())
			{
				if (IPushable* Pushable = Cast<IPushable>(Owner))
				{
					PushableTargets.AddUnique(Owner);
				}
			}
		}
	}
	
	for (UPrimitiveComponent* Target : Targets)
	{
		FVector Direction = Target->GetComponentLocation() - ExplosionLocation;
		const float Distance = Direction.Size();

		if (Direction.IsNearlyZero())
		{
			Direction = FMath::VRand();
		}
		else
		{
			Direction.Normalize();
		}
			
		Direction.Z = FMath::Max(Direction.Z, AbilityData->ExplosionUpwardBias);
		Direction.Normalize();
		
		const float Alpha = FMath::Clamp(1.f - (Distance / radius), 0.f, 1.f);
		const float Strength = FMath::Lerp(AbilityData->MinExplosionStrength, AbilityData->MaxExplosionStrength, Alpha);

		const FVector LaunchVelocity = Direction * Strength;

		Target->SetPhysicsLinearVelocity(FVector::ZeroVector);
		Target->AddImpulse(LaunchVelocity, NAME_None, true);
		PropelledTargets.Add(Target);

		OnDiceHitTarget(GetActorInfo().OwnerActor->GetActorLocation(), Target->GetOwner()->GetActorLocation(), Target->GetOwner());
	}

	const int CountPushable = PushableTargets.Num();

	for (int i = 0; i < CountPushable; i++)
	{
		AActor* target = PushableTargets[i];
		FVector Direction = target->GetActorLocation() - ExplosionLocation;
		const float Distance = Direction.Size();

		if (Direction.IsNearlyZero())
		{
			Direction = FMath::VRand();
		}
		else
		{
			Direction.Normalize();
		}
			
		Direction.Z = FMath::Max(Direction.Z, AbilityData->ExplosionUpwardBias);
		Direction.Normalize();
		
		const float Alpha = FMath::Clamp(1.f - (Distance / radius), 0.f, 1.f);
		const float Strength = FMath::Lerp(AbilityData->MinExplosionStrength, AbilityData->MaxExplosionStrength, Alpha);

		const FVector LaunchVelocity = Direction * Strength;

		if (target->GetClass()->ImplementsInterface(UPushable::StaticClass()))
		{
			IPushable::Execute_PushTowardVelocity(target, LaunchVelocity, GetCurrentActorInfo()->OwnerActor.Get());
		}
	}

	if (PropelledTargets.Num() == 0)
	{
		K2_EndAbility();
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(CheckRestTimerHandle, this, &UBouleDeFeu::CheckIfAtRest, AbilityData->RestCheckInterval, true);

	GetWorld()->GetTimerManager().SetTimer(MaxWaitTimerHandle, this, &UBouleDeFeu::K2_EndAbility, AbilityData->MaxWaitTime, false);
}

void UBouleDeFeu::CheckIfAtRest()
{
	const float ThresholdSq = FMath::Square(AbilityData->RestVelocityThreshold);
	bool bAllAtRest = true;

	for (int i = PropelledTargets.Num() - 1; i >= 0; i--)
	{
		UPrimitiveComponent* Target = PropelledTargets[i].Get();

		if (!Target)
		{
			PropelledTargets.RemoveAt(i);
			continue;
		}

		if (Target->IsSimulatingPhysics())
		{
			const float SpeedSq = Target->GetPhysicsLinearVelocity().SizeSquared();
			if (SpeedSq > ThresholdSq)
			{
				bAllAtRest = false;
			}
		}
	}

	if (bAllAtRest)
	{
		GetWorld()->GetTimerManager().ClearTimer(CheckRestTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(MaxWaitTimerHandle);
		K2_EndAbility();
	}
}
