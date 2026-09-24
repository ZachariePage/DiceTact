// Fill out your copyright notice in the Description page of Project Settings.


#include "BlackHole.h"

#include "Core/Abilities/Definitions/DTBlackHoleData.h"
#include "Core/Interface/Pushable.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"

void UBlackHole::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                 const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	TArray<FOverlapResult> Overlaps;
    float radius = data->BaseRadius + data->AdditionalRadius * GetAbilityLevel();
    FCollisionShape Sphere = FCollisionShape::MakeSphere(radius);

    FCollisionObjectQueryParams ObjectQueryParams;

    for (const TEnumAsByte<EObjectTypeQuery>& ObjectType : AttractedObjectTypes)
    {
        const ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(ObjectType);

        ObjectQueryParams.AddObjectTypesToQuery(CollisionChannel);
    }

    GetWorld()->OverlapMultiByObjectType(
        Overlaps,
        ActorInfo->OwnerActor->GetActorLocation(),
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
            if (hit->IsSimulatingPhysics() && hit->GetOwner() != ActorInfo->OwnerActor && hit->GetOwner() != ActorInfo->AvatarActor)
            {
                Targets.AddUnique(hit);
            }
            else if (AActor* Owner = hit->GetOwner())
            {
                if (IPushable* Pushable = Cast<IPushable>(Owner))
                {
                    FString message = "hit enemies " + Owner->GetFullName() + "!";
                    UJUEDevelopmentStatics::ReportDebugMessage(message);
                    PushableTargets.AddUnique(Owner);
                }
            }
        }
    }

    const int Count = Targets.Num();

    for (int i = 0; i < Count; i++)
    {
        UPrimitiveComponent* target = Targets[i];

        float RandomAngle = FMath::FRandRange(0.f, 2 * PI);
        float RandomRadius = FMath::Sqrt(FMath::FRand()) * data->MaxScatterRadius; 

        FVector Offset(
            FMath::Cos(RandomAngle) * RandomRadius,
            FMath::Sin(RandomAngle) * RandomRadius,
            0.f
        );

        FVector ScatteredTarget = ActorInfo->OwnerActor->GetActorLocation() + Offset;

        FVector LaunchVelocity;
        bool bFound = UGameplayStatics::SuggestProjectileVelocity_CustomArc(
            this,
            LaunchVelocity,
            target->GetComponentLocation(),
            ScatteredTarget,
            0.f,
            data->Angle
        );

        if (bFound)
        {
            target->SetPhysicsLinearVelocity(FVector::ZeroVector);
            target->AddImpulse(LaunchVelocity, NAME_None, true);
        }
    }

    const int CountPushable = PushableTargets.Num();

    for (int i = 0; i < CountPushable; i++)
    {
        AActor* target = PushableTargets[i];
        IPushable* Pushable = Cast<IPushable>(target);

        float RandomAngle = FMath::FRandRange(0.f, 2 * PI);
        float RandomRadius = FMath::Sqrt(FMath::FRand()) * data->MaxScatterRadius; 

        FVector Offset(
            FMath::Cos(RandomAngle) * RandomRadius,
            FMath::Sin(RandomAngle) * RandomRadius,
            0.f
        );

        FVector ScatteredTarget = ActorInfo->OwnerActor->GetActorLocation() + Offset;

        FVector LaunchVelocity;
        bool bFound = UGameplayStatics::SuggestProjectileVelocity_CustomArc(
            this,
            LaunchVelocity,
            target->GetActorLocation(),
            ScatteredTarget,
            0.f,
            data->Angle
        );

        if (target->GetClass()->ImplementsInterface(UPushable::StaticClass()))
        {
            IPushable::Execute_PushTowardVelocity(target, LaunchVelocity, ActorInfo->OwnerActor.Get());
        }
    }
    
    PulledTargets.Reset();
    for (UPrimitiveComponent* T : Targets)
    {
        PulledTargets.Add(T);
    }
    
    if (PulledTargets.Num() == 0)
    {
        K2_EndAbility();
        return;
    }

    GetWorld()->GetTimerManager().SetTimer(
        CheckRestTimerHandle, this, &UBlackHole::CheckIfAtRest, RestCheckInterval, true);
    
    GetWorld()->GetTimerManager().SetTimer(
        MaxWaitTimerHandle, this, &UBlackHole::K2_EndAbility, MaxWaitTime, false);
}

void UBlackHole::CheckIfAtRest()
{
    const float ThresholdSq = FMath::Square(RestVelocityThreshold);
    bool bAllAtRest = true;

    for (int i = PulledTargets.Num() - 1; i >= 0; i--)
    {
        UPrimitiveComponent* Target = PulledTargets[i].Get();

        if (!Target)
        {
            PulledTargets.RemoveAt(i);
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

void UBlackHole::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(CheckRestTimerHandle);
        GetWorld()->GetTimerManager().ClearTimer(MaxWaitTimerHandle);
    }
    PulledTargets.Reset();

    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
