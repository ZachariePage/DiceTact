// Fill out your copyright notice in the Description page of Project Settings.


#include "DTBlackHoleAbility.h"

#include "DiceTact/Abilities/Definitions/DTBlackHoleData.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "DiceTact/Interface/DTPushable.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Kismet/GameplayStatics.h"

void UDTBlackHoleAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                 const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
    //HATEFULL BOILERPLATE TO REWORK WHEN TIEM
    OnDiceActivation(ActorInfo->OwnerActor->GetActorLocation());
    
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
    
    TArray<AActor*> PushableTargets;
    for (const FOverlapResult& Result : Overlaps)
    {
        if (UPrimitiveComponent* hit = Result.GetComponent())
        {
            if (AActor* Owner = hit->GetOwner())
            {
                if (IDTPhysicalUnitInterface* Pushable = Cast<IDTPhysicalUnitInterface>(Owner))
                {
                    PushableTargets.AddUnique(Owner);
                }
            }
        }
    }

    const int CountPushable = PushableTargets.Num();

    for (int i = 0; i < CountPushable; i++)
    {
        AActor* target = PushableTargets[i];
        IDTPhysicalUnitInterface* Pushable = Cast<IDTPhysicalUnitInterface>(target);

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

        if (!bFound)
            continue;
        
        IDTPhysicalUnitInterface::Execute_ApplyImpulse(
             target,
             FPushData(LaunchVelocity, ActorInfo->OwnerActor.Get())
         );

        ADTDice* ResolvingDice = Cast<ADTDice>(ActorInfo->OwnerActor);
        ADTDice* otherDice = Cast<ADTDice>(target);
        if (otherDice && ResolvingDice)
        {
            otherDice->CanProcessHit(ResolvingDice);
        }

        OnDiceHitTarget(ActorInfo->OwnerActor->GetActorLocation(), target->GetActorLocation(), target);
    }
    
    if (PulledTargets.Num() == 0)
    {
        K2_EndAbility();
        return;
    }

    GetWorld()->GetTimerManager().SetTimer(
        CheckRestTimerHandle, this, &UDTBlackHoleAbility::CheckIfAtRest, RestCheckInterval, true);
    
    GetWorld()->GetTimerManager().SetTimer(
        MaxWaitTimerHandle, this, &UDTBlackHoleAbility::K2_EndAbility, MaxWaitTime, false);
}

void UDTBlackHoleAbility::CheckIfAtRest()
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

void UDTBlackHoleAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
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
//this work
// Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
//
//     // TODO: Refactor this boilerplate later.
//     const FVector BlackHoleLocation = ActorInfo->OwnerActor->GetActorLocation();
//     OnDiceActivation(BlackHoleLocation);
//
//     TArray<FOverlapResult> Overlaps;
//
//     const float Radius = data->BaseRadius + data->AdditionalRadius * GetAbilityLevel();
//     const FCollisionShape Sphere = FCollisionShape::MakeSphere(Radius);
//
//     FCollisionObjectQueryParams ObjectQueryParams;
//
//     for (const TEnumAsByte<EObjectTypeQuery>& ObjectType : AttractedObjectTypes)
//     {
//         ObjectQueryParams.AddObjectTypesToQuery(
//             UEngineTypes::ConvertToCollisionChannel(ObjectType));
//     }
//
//     GetWorld()->OverlapMultiByObjectType(
//         Overlaps,
//         BlackHoleLocation,
//         FQuat::Identity,
//         ObjectQueryParams,
//         Sphere);
//
//     TArray<AActor*> Targets;
//
//     for (const FOverlapResult& Result : Overlaps)
//     {
//         AActor* Target = Result.GetActor();
//
//         if (!IsValid(Target) ||
//             Target == ActorInfo->OwnerActor.Get() ||
//             Target == ActorInfo->AvatarActor.Get())
//         {
//             continue;
//         }
//
//         if (Target->GetClass()->ImplementsInterface(UPhysicalUnit::StaticClass()))
//         {
//             Targets.AddUnique(Target);
//         }
//     }
//
//     for (AActor* Target : Targets)
//     {
//         const float RandomAngle = FMath::FRandRange(0.f, 2.f * PI);
//         const float RandomRadius = FMath::Sqrt(FMath::FRand()) * data->MaxScatterRadius;
//
//         const FVector Offset(
//             FMath::Cos(RandomAngle) * RandomRadius,
//             FMath::Sin(RandomAngle) * RandomRadius,
//             0.f
//         );
//
//         const FVector ScatteredTarget = BlackHoleLocation + Offset;
//
//         FVector LaunchVelocity;
//
//         const bool bFound = UGameplayStatics::SuggestProjectileVelocity_CustomArc(
//             this,
//             LaunchVelocity,
//             Target->GetActorLocation(),
//             ScatteredTarget,
//             0.f,
//             data->Angle
//         );
//
//         if (bFound)
//         {
//             FPhysicalImpactInfo ImpactInfo;
//             ImpactInfo.Impulse = LaunchVelocity;
//             ImpactInfo.HitLocation = Target->GetActorLocation();
//             ImpactInfo.ImpactSpeed = LaunchVelocity.Size();
//             ImpactInfo.Source = ActorInfo->OwnerActor.Get();
//             ImpactInfo.Instigator = ActorInfo->OwnerActor.Get();
//
//             IPhysicalUnit::Execute_ApplyImpulse(Target, ImpactInfo);
//         }
//
//         ADice* ResolvingDice = Cast<ADice>(ActorInfo->OwnerActor.Get());
//         ADice* OtherDice = Cast<ADice>(Target);
//
//         if (OtherDice && ResolvingDice)
//         {
//             OtherDice->CanProcessHit(ResolvingDice);
//         }
//
//         OnDiceHitTarget(
//             BlackHoleLocation,
//             Target->GetActorLocation(),
//             Target
//         );
//     }
//
//     PulledTargets.Reset();
//
//     for (AActor* Target : Targets)
//     {
//         TArray<UPrimitiveComponent*> Components;
//         Target->GetComponents<UPrimitiveComponent>(Components);
//
//         for (UPrimitiveComponent* Component : Components)
//         {
//             if (Component && Component->IsSimulatingPhysics())
//             {
//                 PulledTargets.AddUnique(Component);
//             }
//         }
//     }
//
//     if (PulledTargets.Num() == 0)
//     {
//         K2_EndAbility();
//         return;
//     }
//
//     GetWorld()->GetTimerManager().SetTimer(
//         CheckRestTimerHandle,
//         this,
//         &UBlackHole::CheckIfAtRest,
//         RestCheckInterval,
//         true);
//
//     GetWorld()->GetTimerManager().SetTimer(
//         MaxWaitTimerHandle,
//         this,
//         &UBlackHole::K2_EndAbility,
//         MaxWaitTime,
//         false);
