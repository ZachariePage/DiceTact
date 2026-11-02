#include "DTSeismicWaveComponent.h"

#include "Components/PrimitiveComponent.h"
#include "DiceTact/Abilities/Definitions/DTSeismicData.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "DiceTact/Characters/DTTurnBaseUnit.h"
#include "DiceTact/Interface/DTDamageable.h"
#include "DiceTact/Interface/DTPushable.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"

// Set the radius from the dice face and start the wave
bool UDTSeismicWaveComponent::StartWave(UDTSeismicData* Settings, FVector Origin, int32 DiceFace, int32 RingCount, float RingDelay)
{
	if (bRunning || !GetWorld() || !IsValid(GetOwner()) || !IsValid(Settings))
	{
		return false;
	}

	MaximumRadius = Settings->BaseRadius + Settings->RadiusPerFace * FMath::Max(1, DiceFace);
	
	if (MaximumRadius <= 0.f || Settings->PropagationSpeed <= 0.f)
	{
		UE_LOG(LogTemp, Warning, TEXT("Seismic wave requires a positive radius and propagation speed."));
		return false;
	}

	AbilityData = Settings;
	WaveOrigin = Origin;
	CurrentRadius = 0.f;
	RingsRemaining = FMath::Clamp(RingCount, 1, 10);
	DelayBetweenRings = FMath::Max(0.f, RingDelay);
	HitActors.Reset();
	WaveStartTime = GetWorld()->GetTimeSeconds();
	bRunning = true;
	
	//To check how often the timer calls UpdateWave
	const float UpdateInterval = FMath::Max(0.01f, AbilityData->UpdateInterval);
	
	GetWorld()->GetTimerManager().SetTimer(UpdateTimerHandle, this,
		&UDTSeismicWaveComponent::UpdateWave, UpdateInterval, true);
	
	OnWaveUpdated.Broadcast(WaveOrigin, 0.f);

	return true;
}

// Expand the ring, then move on to the next one
void UDTSeismicWaveComponent::UpdateWave()
{
	//How long since the ring started
	const float ElapsedTime = GetWorld()->GetTimeSeconds() - WaveStartTime;
	
	if (ElapsedTime < 0.f)
	{
		return;
	}

	const float PreviousRadius = CurrentRadius;
	CurrentRadius = FMath::Min(MaximumRadius, ElapsedTime * AbilityData->PropagationSpeed);
	OnWaveUpdated.Broadcast(WaveOrigin, CurrentRadius);

	if (!bRunning)
	{
		return;
	}

	AffectTargets(PreviousRadius);

	if (!bRunning || CurrentRadius < MaximumRadius)
	{
		return;
	}
	else
	{
		// This ring has finished expanding.
		OnRingFinished.Broadcast(WaveOrigin);

		if (!bRunning)
		{
			return;
		}

		RingsRemaining--;
		
		if (RingsRemaining > 0)
		{
			// The next ring can hit these actors again
			HitActors.Reset();
			CurrentRadius = 0.f;
			WaveStartTime = GetWorld()->GetTimeSeconds() + DelayBetweenRings;
			return;
		}

		// All rings are finished; notify the ability.
		FinishEffect();
	}
}

// Find targets the ring has reached since the last update
void UDTSeismicWaveComponent::AffectTargets(float PreviousRadius)
{
	//Create a search box around the rings
	const FVector HalfExtent(CurrentRadius, CurrentRadius, AbilityData->WaveHalfHeight);
	
	//List to hold detected objects hit by rings
	TArray<UPrimitiveComponent*> Components;
	
	//Unreal finds components overlapping the box that match our search filters
	UKismetSystemLibrary::BoxOverlapComponents(this, WaveOrigin, HalfExtent, AbilityData->HitObjectTypes, nullptr, {GetOwner()}, Components);

	for (UPrimitiveComponent* Component : Components)
	{
		if (!bRunning)
		{
			return;
		}

		//Get eh Actor that owns the component
		AActor* Target = IsValid(Component) ? Component->GetOwner() : nullptr;
		
		if (!CanAffectTarget(Target, Component))
		{
			continue;
		}

		const FVector HitLocation = Component->Bounds.Origin;
		const float Distance = FVector::Dist2D(WaveOrigin, HitLocation);

		// Only hit targets crossed by the ring
		if (Distance < PreviousRadius || Distance > CurrentRadius ||
			FMath::Abs(HitLocation.Z - WaveOrigin.Z) > AbilityData->WaveHalfHeight)
		{
			continue;
		}

		HitActors.Add(Target);
		ApplyImpact(Target, Component, HitLocation);
	}
}

// Skip allies and actors already hit by this ring
bool UDTSeismicWaveComponent::CanAffectTarget(AActor* Target, UPrimitiveComponent* Component) const
{
	if (!IsValid(Target) || HitActors.Contains(Target) ||
		(Target->IsA<ADTTurnBaseUnit>() && !Target->IsA<ADTEnemyUnit>()))
	{
		return false;
	}

	return Target->Implements<UDTPushable>() || Target->Implements<UDTDamageable>() ||
		Component->IsSimulatingPhysics();
}


// Push the target outward and apply damage
void UDTSeismicWaveComponent::ApplyImpact(AActor* Target, UPrimitiveComponent* Component,
	const FVector& HitLocation)
{
	FVector Direction = HitLocation - WaveOrigin;
	Direction.Z = 0.f;
	const bool bHasDirection = Direction.Normalize();

	if (!bHasDirection)
	{
		Direction = FVector::ForwardVector;
	}
	const FVector PushVelocity = Direction * FMath::Max(0.f, AbilityData->PushStrength) + 
		FVector::UpVector * FMath::Max(0.f, AbilityData->UpwardStrength);

	
	//Use the actor’s push system if it has one, otherwise, push its physics component directly
	if (!PushVelocity.IsNearlyZero())
	{
		if (Target->Implements<UDTPushable>())
		{
			IDTPushable::Execute_PushToward(Target, FPushData(PushVelocity, GetOwner()));
		}
		else if (Component->IsSimulatingPhysics())
		{
			Component->AddImpulse(PushVelocity, NAME_None, true);
		}
	}

	if (!bRunning)
	{
		return;
	}

	if (IsValid(Target) && Target->Implements<UDTDamageable>() && AbilityData->Damage > 0)
	{
		IDTDamageable::Execute_TakeDamage(Target, GetOwner(), AbilityData->Damage);
	}

	if (bRunning)
	{
		OnTargetHit.Broadcast(WaveOrigin, HitLocation, IsValid(Target) ? Target : nullptr);
	}
}

// Stop the wave and notify the ability
void UDTSeismicWaveComponent::FinishEffect()
{
	StopWave();
	OnEffectFinished.Broadcast();
}

// Clear the timers and tracked targets
void UDTSeismicWaveComponent::StopWave()
{
	bRunning = false;

	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(UpdateTimerHandle);
	}

	HitActors.Reset();
}

// Stop the timers when the component is removed
void UDTSeismicWaveComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	StopWave();
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}
