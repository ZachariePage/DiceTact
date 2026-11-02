// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMeteorMagnetAbility.h"

#include "DiceTact/Abilities/Definitions/DTMeteorMagnetData.h"

void UDTMeteorMagnetAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                    const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	OnDiceActivation(ActorInfo->OwnerActor->GetActorLocation());
    
	FVector BaseTargetLocation = ActorInfo->OwnerActor->GetActorLocation();
	FVector SpawnLocation = ActorInfo->AvatarActor->GetActorLocation() + FVector(0, 0, 200);
	int ProjectileNumber = AbilityData->BaseNumberOfProjectile + AbilityData->AdditionalProjectile * GetAbilityLevel();
	float ExplosionRadius = AbilityData->BaseRadius + AbilityData->AdditionalRadius * GetAbilityLevel();
	SpawnNextMeteor(0, ProjectileNumber, BaseTargetLocation, SpawnLocation, ExplosionRadius);
}

void UDTMeteorMagnetAbility::SpawnNextMeteor(int CurrentIndex, int TotalCount, FVector BaseTargetLocation, FVector SpawnLocation, float ExplosionRadius)
{
	if (!IsActive() || CurrentIndex >= TotalCount)
    {
        return;
    }

    AActor* Avatar = GetAvatarActorFromActorInfo();
    if (!Avatar)
    {
        EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
        return;
    }

    float RandomAngle  = FMath::FRandRange(0.f, 2 * PI);
    //float RandomRadius = FMath::Sqrt(FMath::FRand()) * AbilityData->MaxScatterRadius;
    //FVector Offset(FMath::Cos(RandomAngle) * RandomRadius,FMath::Sin(RandomAngle) * RandomRadius,0.f);

	//Si Météore spawn directement sur le dé sans tomber, mettre offset pour spawn plus haut
    FVector TargetLocation = BaseTargetLocation;
	//+ Offset;
    FRotator SpawnRotation = (TargetLocation - SpawnLocation).Rotation();

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
    ADTMeteorActor* Meteor = GetWorld()->SpawnActor<ADTMeteorActor>(AbilityData->MeteorToSpawn, TargetLocation + FVector(0,0,1000.f), SpawnRotation, SpawnParams);

	//Non optimal
	Meteor->ExplosionRadius = ExplosionRadius;
	
	if (Meteor)
    {
        SpawnedMeteors.Add(Meteor);
        Meteor->OnDestroyed.AddDynamic(this, &UDTMeteorMagnetAbility::OnMeteorDestroyed);
    }

    int NextIndex = CurrentIndex + 1;
    if (NextIndex >= TotalCount)
    {
        GetWorld()->GetTimerManager().SetTimer(MeteorCheckTimerHandle, this, &UDTMeteorMagnetAbility::CheckMeteorsStatus,MeteorCheckInterval, true);
        return;
    }

    float Delay = FMath::FRandRange(AbilityData->MinDelayBetweenProjectiles, AbilityData->MaxDelayBetweenProjectiles);

    FTimerDelegate TimerDel;
    TimerDel.BindUObject(this, &UDTMeteorMagnetAbility::SpawnNextMeteor, NextIndex, TotalCount, BaseTargetLocation, SpawnLocation, ExplosionRadius);

    GetWorld()->GetTimerManager().SetTimer(MeteorSpawnTimerHandle, TimerDel, Delay, false);
}

void UDTMeteorMagnetAbility::CheckMeteorsStatus()
{
	for (int i = SpawnedMeteors.Num() - 1; i >= 0; --i)
	{
		ADTMeteorActor* Meteor = SpawnedMeteors[i].Get();

		if (!Meteor || Meteor->IsPendingKillPending())
		{
			SpawnedMeteors.RemoveAt(i);
			continue;
		}

		float Speed = 0.f;
        
		if (Meteor)
		{
			if (Meteor->MeteorMesh->IsSimulatingPhysics())
			{
				Speed = Meteor->MeteorMesh->GetPhysicsLinearVelocity().Size();
			}
		}

		if (Speed <= MinSpeedThreshold)
		{
			SpawnedMeteors.RemoveAt(i);
		}
	}

	if (SpawnedMeteors.Num() == 0)
	{
		GetWorld()->GetTimerManager().ClearTimer(MeteorCheckTimerHandle);
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
	}
}

void UDTMeteorMagnetAbility::OnMeteorDestroyed(AActor* DestroyedActor)
{
	SpawnedMeteors.RemoveAll([DestroyedActor](const TWeakObjectPtr<AActor>& Weak)
	{
		return Weak.Get() == DestroyedActor;
	});

	if (SpawnedMeteors.Num() == 0 && GetWorld()->GetTimerManager().IsTimerActive(MeteorCheckTimerHandle) == false)
	{
		//shouldnt happen
	}
}

void UDTMeteorMagnetAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
								const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(MeteorSpawnTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(MeteorCheckTimerHandle);
	}
	SpawnedMeteors.Empty();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

