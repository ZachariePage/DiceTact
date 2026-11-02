// Fill out your copyright notice in the Description page of Project Settings.


#include "DTFireBallAbility.h"

#include "DiceTact/Abilities/AbilityActors/DTFireBallActor.h"
#include "DiceTact/Abilities/Definitions/DTFireBallData.h"
#include "DiceTact/Interface/DTDamageable.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "DiceTact/Interface/DTPushable.h"
#include "DiceTact/Medaillon/DTMedaillonStatics.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"

void UDTFireBallAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);
	
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

void UDTFireBallAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(CheckRestTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(MaxWaitTimerHandle);
	}

	if (SpawnedBoule.IsValid())
	{
		SpawnedBoule->OnActorHit.RemoveDynamic(this, &UDTFireBallAbility::HandleBouleHit);
		SpawnedBoule->Destroy();
		SpawnedBoule = nullptr;
	}

	PropelledTargets.Reset();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UDTFireBallAbility::HandleBouleHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (SpawnedBoule.IsValid())
	{
		SpawnedBoule->OnActorHit.RemoveDynamic(this, &UDTFireBallAbility::HandleBouleHit);
	}

	FVector ExplosionLocation = Hit.ImpactPoint;
	TriggerExplosion(ExplosionLocation);

	if (SpawnedBoule.IsValid())
	{
		SpawnedBoule->Destroy();
		SpawnedBoule = nullptr;
	}
}

void UDTFireBallAbility::TriggerExplosion(const FVector& ExplosionLocation)
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
			if (AActor* Owner = hit->GetOwner())
			{
				if (IDTPhysicalUnitInterface* physicalUnits = Cast<IDTPhysicalUnitInterface>(Owner))
				{
					PushableTargets.AddUnique(Owner);
				}
			}

			if (hit && hit->GetOwner()->Implements<UDTDamageable>() && AbilityData->DamageDealt > 0)
			{
				IDTDamageable::Execute_TakeDamage(
					hit->GetOwner(),
					cachedDice.Get(),
					AbilityData->DamageDealt
				);
				const FGameplayTag DiceDamageTag = FGameplayTag::RequestGameplayTag(FName("Dice.DealtDamage"));
				UDTMedaillonStatics::SendMedaillonEvent(cachedDice.Get(), DiceDamageTag, hit->GetOwner());
			}
		}
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

		IDTPhysicalUnitInterface::Execute_ApplyImpulse(target, FPushData(LaunchVelocity, GetCurrentActorInfo()->OwnerActor.Get()));
	}

	if (PropelledTargets.Num() == 0)
	{
		K2_EndAbility();
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(CheckRestTimerHandle, this, &UDTFireBallAbility::CheckIfAtRest, AbilityData->RestCheckInterval, true);

	GetWorld()->GetTimerManager().SetTimer(MaxWaitTimerHandle, this, &UDTFireBallAbility::K2_EndAbility, AbilityData->MaxWaitTime, false);
}

void UDTFireBallAbility::CheckIfAtRest()
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
