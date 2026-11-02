// Fill out your copyright notice in the Description page of Project Settings.


#include "DTArrowHailAbility.h"

#include "DiceTact/Abilities/AbilityActors/DTArrowActor.h"
#include "DiceTact/Abilities/Definitions/DTPluieDeFleche.h"
#include "Kismet/GameplayStatics.h"

void UDTArrowHailAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                     const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                     const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
    
    FVector BaseTargetLocation = ActorInfo->OwnerActor->GetActorLocation();
    FVector SpawnLocation = ActorInfo->AvatarActor->GetActorLocation() + FVector(0, 0, 200);
    int ProjectileNumber = AbilityData->BaseNumberOfProjectile + AbilityData->AdditionalProjectile * GetAbilityLevel();
    
    SpawnNextArrow(0, ProjectileNumber, BaseTargetLocation, SpawnLocation);
}

void UDTArrowHailAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(ArrowSpawnTimerHandle);
        GetWorld()->GetTimerManager().ClearTimer(ArrowCheckTimerHandle);
    }
    SpawnedArrows.Empty();
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UDTArrowHailAbility::SpawnNextArrow(int CurrentIndex, int TotalCount, FVector BaseTargetLocation, FVector SpawnLocation)
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
    float RandomRadius = FMath::Sqrt(FMath::FRand()) * AbilityData->MaxScatterRadius;
    FVector Offset(FMath::Cos(RandomAngle) * RandomRadius,FMath::Sin(RandomAngle) * RandomRadius,0.f);

    FVector TargetLocation = BaseTargetLocation + Offset;
    FRotator SpawnRotation = (TargetLocation - SpawnLocation).Rotation();

    FActorSpawnParameters SpawnParams;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    //AArrow* Arrow = GetWorld()->SpawnActor<AArrow>(AbilityData->ArrowToSpawn, SpawnLocation, SpawnRotation, SpawnParams);
    ADTArrowActor* Arrow = GetWorld()->SpawnActor<ADTArrowActor>(AbilityData->ArrowToSpawn, TargetLocation + FVector(0,0,1000.f), SpawnRotation, SpawnParams);
    if (Arrow)
    {
        //FVector OutVelocity;
        //bool bFound = UGameplayStatics::SuggestProjectileVelocity_CustomArc(Arrow, OutVelocity, SpawnLocation, TargetLocation, 0.f, AbilityData->Angle);

        //if (bFound)
        //{
        //    Arrow->PropulseArrow(OutVelocity);
        //}
        SpawnedArrows.Add(Arrow);
        Arrow->OnDestroyed.AddDynamic(this, &UDTArrowHailAbility::OnArrowDestroyed);
    }

    int NextIndex = CurrentIndex + 1;
    if (NextIndex >= TotalCount)
    {
        GetWorld()->GetTimerManager().SetTimer(ArrowCheckTimerHandle, this, &UDTArrowHailAbility::CheckArrowsStatus,ArrowCheckInterval, true);
        return;
    }

    float Delay = FMath::FRandRange(AbilityData->MinDelayBetweenProjectiles, AbilityData->MaxDelayBetweenProjectiles);

    FTimerDelegate TimerDel;
    TimerDel.BindUObject(this, &UDTArrowHailAbility::SpawnNextArrow, NextIndex, TotalCount, BaseTargetLocation, SpawnLocation);

    GetWorld()->GetTimerManager().SetTimer(ArrowSpawnTimerHandle, TimerDel, Delay, false);
}

void UDTArrowHailAbility::CheckArrowsStatus()
{
    for (int i = SpawnedArrows.Num() - 1; i >= 0; --i)
    {
        ADTArrowActor* Arrow = SpawnedArrows[i].Get();

        if (!Arrow || Arrow->IsPendingKillPending())
        {
            SpawnedArrows.RemoveAt(i);
            continue;
        }

        float Speed = 0.f;
        
        if (Arrow)
        {
            if (Arrow->ArrowMesh->IsSimulatingPhysics())
            {
                Speed = Arrow->ArrowMesh->GetPhysicsLinearVelocity().Size();
            }
        }

        if (Speed <= MinSpeedThreshold)
        {
            SpawnedArrows.RemoveAt(i);
        }
    }

    if (SpawnedArrows.Num() == 0)
    {
        GetWorld()->GetTimerManager().ClearTimer(ArrowCheckTimerHandle);
        EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
    }
}

void UDTArrowHailAbility::OnArrowDestroyed(AActor* DestroyedActor)
{
    SpawnedArrows.RemoveAll([DestroyedActor](const TWeakObjectPtr<AActor>& Weak)
    {
        return Weak.Get() == DestroyedActor;
    });

    if (SpawnedArrows.Num() == 0 && GetWorld()->GetTimerManager().IsTimerActive(ArrowCheckTimerHandle) == false)
    {
        //shouldnt happen
    }
}
