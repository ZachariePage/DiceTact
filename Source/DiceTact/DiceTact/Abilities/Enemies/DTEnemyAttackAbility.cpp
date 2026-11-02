// Fill out your copyright notice in the Description page of Project Settings.


#include "DTEnemyAttackAbility.h"


#include "DiceTact/Characters/Enemy/DTEnemyDefinition.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Interface/DTDamageable.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UDTEnemyAttackAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo,
                                       const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);

	FVector StartLocation = ActorInfo->OwnerActor->GetActorLocation() + ActorInfo->OwnerActor->GetActorForwardVector() * 100.0f;

	TArray<FOverlapResult> Overlaps;
	float radius = BaseRadius;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(radius);

	FCollisionObjectQueryParams ObjectQueryParams;

	for (const TEnumAsByte<EObjectTypeQuery>& ObjectType : AttractedObjectTypes)
	{
		const ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(ObjectType);

		ObjectQueryParams.AddObjectTypesToQuery(CollisionChannel);
	}

#if ENABLE_DRAW_DEBUG
	DrawDebugSphere(GetWorld(), StartLocation,
		radius, 15, FColor::Red, false, 0.75f);
#endif

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(GetAvatarActorFromActorInfo());
	CollisionParams.AddIgnoredSourceObject(GetAvatarActorFromActorInfo());
	
	GetWorld()->OverlapMultiByObjectType(
		Overlaps,
		StartLocation,
		FQuat::Identity,
		ObjectQueryParams,
		Sphere,
		CollisionParams
	);
	
	for (const FOverlapResult& Result : Overlaps)
	{
		if (UPrimitiveComponent* HitComponent = Result.GetComponent())
		{
			AActor* CompOwner = HitComponent->GetOwner();
			if (ADTEnemyUnit* enemi = Cast<ADTEnemyUnit>(CompOwner)) continue; // dont target enemie temporarry
			//Apply damage to damageable targets
			if (CompOwner->Implements<UDTDamageable>())
			{
				FDamageInfo DamageInfo = IDTDamageable::Execute_TakeDamage(CompOwner, GetAvatarActorFromActorInfo(), GetBaseDamage());
				
				if (DamageInfo.FinalDamage > 0)
				{
					OnTargetDamaged(CompOwner);
				}
			}

			//Apply Forces to pushable targets
			if (CompOwner->Implements<UDTPushable>())
			{
				
				//FString message = "I am hit : " + CompOwner->GetName();
				//UJUEDevelopmentStatics::ReportDebugMessage(message);
				FVector Direction = CompOwner->GetActorLocation() - ActorInfo->OwnerActor->GetActorLocation();
				Direction.Normalize();
				Direction.Z = 0;
				FVector launchImpulse = Direction * BaseImpulse; /* MAGIC NUMBER*/
				launchImpulse.Z = 500;
				IDTPushable::Execute_PushToward(CompOwner, FPushData(launchImpulse, GetAvatarActorFromActorInfo()));

				OnTargetPushed(CompOwner);
			}
		}
	}

	//K2_EndAbility();
}

int32 UDTEnemyAttackAbility::GetBaseDamage_Implementation() const
{
	const AActor* Avatar = GetAvatarActorFromActorInfo();

	if (const ADTEnemyUnit* EnemyUnit = Cast<ADTEnemyUnit>(Avatar))
	{
		return EnemyUnit->GetEnemyDefinition()->GetEnemyCombatData().BaseDamage;
	}

	return 1;
}