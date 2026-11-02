// Fill out your copyright notice in the Description page of Project Settings.


#include "PhysicalReactionComponent.h"

#include "Math/UnitConversion.h"


// Sets default values for this component's properties
UPhysicalReactionComponent::UPhysicalReactionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_PostPhysics;
	// ...
}


void UPhysicalReactionComponent::ReceiveImpact(const FPhysicalImpactInfo& Info)
{
	OnImpactReceived.Broadcast(this, Info);
}

EPhysMassClass UPhysicalReactionComponent::GetMassClass() const
{
	return MassType;
}

// Called when the game starts
void UPhysicalReactionComponent::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	if (!Owner) return;
	
	TrackedBody = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());

	if (!TrackedBody)
	{
		TArray<UPrimitiveComponent*> PrimitiveComponents;
		Owner->GetComponents<UPrimitiveComponent>(PrimitiveComponents);

		for (UPrimitiveComponent* Primitive : PrimitiveComponents)
		{
			if (Primitive && Primitive->IsSimulatingPhysics())
			{
				TrackedBody = Primitive;
				break;
			}
		}
	}
	
	if (TrackedBody)
	{
		TrackedBody->SetNotifyRigidBodyCollision(true);
		TrackedBody->OnComponentHit.AddDynamic(this, &ThisClass::HandleOwnerHit);
	}
}


// Called every frame
void UPhysicalReactionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                               FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (TrackedBody && TrackedBody->IsSimulatingPhysics())
	{
		LastFrameVelocity = TrackedBody->GetPhysicsLinearVelocity();
	}
	else
	{
		LastFrameVelocity = FVector::ZeroVector;
	}
	// ...
}

void UPhysicalReactionComponent::HandleOwnerHit(UPrimitiveComponent* HitComp, AActor* Other,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!Other || !HitComp->IsSimulatingPhysics()) return;
	
	const double Now = GetWorld()->GetTimeSeconds();
	PruneHitTimestamps(Now);

	UPhysicalReactionComponent* OtherComp2 =
		Other->FindComponentByClass<UPhysicalReactionComponent>();

	if (!OtherComp2) return;

	double& Last = LastHitTime.FindOrAdd(Other);

	if (Now - Last < 0.15) return;
	Last = Now;

	const FVector Dir = LastFrameVelocity.GetSafeNormal();
	const FVector Rel = LastFrameVelocity - OtherComp2->GetLastFrameVelocity();

	FPhysicalImpactInfo Info;
	Info.ImpactSpeed = FMath::Max(0.f, FVector::DotProduct(Rel, Dir));
	Info.Impulse = Dir * Info.ImpactSpeed;
	Info.HitLocation = Hit.ImpactPoint;
	Info.OtherMass = GetMassClass();
	Info.Source = TrackedBody->GetOwner();

	OtherComp2->ReceiveImpact(Info);
	OnImpactInitiated.Broadcast(this, Other, Info);
}

void UPhysicalReactionComponent::PruneHitTimestamps(float Now)
{
	double HitTimestampLifetime = 2.0;

	for (auto It = LastHitTime.CreateIterator(); It; ++It)
	{
		if (Now - It.Value() > HitTimestampLifetime || !It.Key().IsValid())
		{
			It.RemoveCurrent();
		}
	}
}
