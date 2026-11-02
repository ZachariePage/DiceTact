// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCatmanPowerAbility.h"

#include "DiceTact/Abilities/Definitions/DTCatmanPowerData.h"
#include "DiceTact/Characters/DTCombatPlayerController.h"
#include "DiceTact/Dice/DTDiceCollisionData.h"
#include "DiceTact/Interface/DTPushable.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UDTCatmanPowerAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                        const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                        const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	CachedHandle = Handle;
	CachedActorInfo = ActorInfo;
	CachedActivationInfo = ActivationInfo;

	TArray<FOverlapResult> Overlaps;
	float radius = AbilityData->Radius;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(radius);

	FCollisionObjectQueryParams ObjectQueryParams;

	for (const TEnumAsByte<EObjectTypeQuery>& ObjectType : AbilityData->HitObjectTypes)
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
				if (IDTPushable* Pushable = Cast<IDTPushable>(Owner))
				{
					PushableTargets.AddUnique(Owner);
				}
			}
		}
	}

	const int Count = Targets.Num();

    for (int i = 0; i < Count; i++)
    {
        UPrimitiveComponent* target = Targets[i];

        target->AddImpulse(FVector::UpVector * AbilityData->StrengthUpward, NAME_None, true);
    	FVector Torque(
		FMath::RandRange(-1, 1),
		FMath::RandRange(-1, 1),
		FMath::RandRange(-1, 1)
		);
    	
    	target->AddTorqueInRadians(
		   Torque * AbilityData->Torgue,
		   NAME_None,
		   true
		);
    }

    const int CountPushable = PushableTargets.Num();

    for (int i = 0; i < CountPushable; i++)
    {
        AActor* target = PushableTargets[i];
        IDTPushable* Pushable = Cast<IDTPushable>(target);

        if (target->GetClass()->ImplementsInterface(UDTPushable::StaticClass()))
        {
            IDTPushable::Execute_PushTowardBlackHole(target, FPushData(FVector::UpVector * AbilityData->StrengthUpward, ActorInfo->OwnerActor.Get()));
        }
    }
	
	K2_EndAbility();
}

TArray<AActor*> UDTCatmanPowerAbility::GetOverlappingActors(const FVector& Location, float Radius) const
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
