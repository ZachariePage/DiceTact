// Fill out your copyright notice in the Description page of Project Settings.


#include "BounceComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/Data/DTBounceData.h"
#include "JUE/System/JUEDevelopmentStatics.h"

UBounceComponent::UBounceComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UBounceComponent::BeginPlay()
{
	Super::BeginPlay();
	
	PhysicsComponent = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());//FindComponentByClass<UPrimitiveComponent>();
	if (PhysicsComponent)
	{
		PhysicsComponent->OnComponentHit.AddDynamic(
			this,
			&UBounceComponent::OnBounceHit
		);
	}
}

void UBounceComponent::InitializeBounceComponent(UDTBounceData* data)
{
	BounceData = data;
}

void UBounceComponent::OnBounceHit(
	UPrimitiveComponent* HitComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	FVector NormalImpulse,
	const FHitResult& Hit
)
{
	if (!PhysicsComponent || !BounceData)
	{
		return;
	}

	const float Speed = PhysicsComponent->GetPhysicsLinearVelocity().Length();

	if (Speed <= BounceData->MinimumSpeedToBounce)
	{
		return;
	}

	FVector Normal = Hit.ImpactNormal.GetSafeNormal();
	
	float DampingFactor = FMath::Pow(BounceData->BounceDamping, BounceCounter);
	float ImpulseStrength = FMath::Min(BounceData->BounceStrength * DampingFactor, Speed);

	FVector Impulse = Normal * ImpulseStrength;

	BounceCounter++;

	PhysicsComponent->AddImpulse(Impulse, NAME_None,true);
}

// Called every frame
void UBounceComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (PhysicsComponent->GetPhysicsLinearVelocity().Length() < 0.5f)
	{
		BounceCounter = 0;
		DestroyComponent();
	}
}

