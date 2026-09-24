// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemybaseAttack.h"

#include "Core/Characters/Hero/HeroCharacter.h"
#include "Engine/OverlapResult.h"
#include "JUE/System/JUEDevelopmentStatics.h"

void UEnemybaseAttack::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                       const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                       const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	TArray<FOverlapResult> Overlaps;
	float radius = BaseRadius;
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
    
	TArray<AHeroCharacter*> Targets;
	for (const FOverlapResult& Result : Overlaps)
	{
		if (UPrimitiveComponent* hit = Result.GetComponent())
		{
			AHeroCharacter* Character = Cast<AHeroCharacter>(hit->GetOwner());
			if (Character)
			{
				Targets.AddUnique(Character);
			}
		}
	}

	for (AHeroCharacter* Target : Targets)
	{
		FString message = "I am hit : " + Target->GetName();
		UJUEDevelopmentStatics::ReportDebugMessage(message);
		FVector direction = Target->GetActorLocation() - ActorInfo->OwnerActor->GetActorLocation();
		direction.Normalize();
		direction.Z = 0;
		FVector launchImpulse = direction * 500;
		launchImpulse.Z = 500;
		Target->PushBackHero(launchImpulse);
	}

	K2_EndAbility();
}
