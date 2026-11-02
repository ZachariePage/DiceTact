// Tornado.cpp

#include "DTTornadoAbility.h"

#include "DiceTact/Abilities/Definitions/DTTornadoData.h"
#include "Components/PrimitiveComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/EngineTypes.h"
#include "Engine/OverlapResult.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

namespace
{
	constexpr float TornadoTwoPi = 2.f * PI;
}

float UDTTornadoAbility::GetTornadoRadius() const
{
	if (!data)
	{
		return 0.f;
	}
	const float Level = static_cast<float>(FMath::Max(1, GetAbilityLevel()));
	return data->BaseRadius + data->AdditionalRadius * Level;
}

float UDTTornadoAbility::GetTornadoHeight() const
{
	return data ? data->MaxLiftHeight : 0.f;
}

float UDTTornadoAbility::GetTornadoLifetime() const
{
	if (!data)
	{
		return 0.f;
	}
	const float Level = static_cast<float>(FMath::Max(1, GetAbilityLevel()));
	return FMath::Max(0.1f, data->BaseLifetime + data->AdditionalLifetime * Level);
}

FVector UDTTornadoAbility::GetTornadoCenter() const
{
	const AActor* Owner = GetOwningActorFromActorInfo();
	return Owner ? Owner->GetActorLocation() : FVector::ZeroVector;
}

FVector UDTTornadoAbility::GetTornadoCylinderScale() const
{
	const float Diameter = GetTornadoRadius() * 2.f;
	return FVector(Diameter / 100.f, Diameter / 100.f, GetTornadoHeight() / 100.f);
}

void UDTTornadoAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                               const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	AActor* DiceActor = ActorInfo ? ActorInfo->OwnerActor.Get() : nullptr;
	AActor* HeroActor = ActorInfo ? ActorInfo->AvatarActor.Get() : nullptr;
	UWorld* World = GetWorld();

	if (!DiceActor || !World || !data)
	{
		K2_EndAbility();
		return;
	}

	const float Level = static_cast<float>(FMath::Max(1, GetAbilityLevel()));

	TornadoCenter = DiceActor->GetActorLocation();
	TornadoRadius = GetTornadoRadius();
	TornadoLifetime = GetTornadoLifetime();
	TotalRotations = data->RotationsPerLevel * Level;

	TornadoStartTime = World->GetTimeSeconds();
	LastUpdateTime = TornadoStartTime;
	ReleaseTime = 0.f;
	bReleased = false;

	OnDiceActivation(TornadoCenter);

	FCollisionObjectQueryParams ObjectQueryParams;
	for (const TEnumAsByte<EObjectTypeQuery>& ObjectType : LiftedObjectTypes)
	{
		ObjectQueryParams.AddObjectTypesToQuery(UEngineTypes::ConvertToCollisionChannel(ObjectType));
	}

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(DiceActor);
	if (HeroActor)
	{
		QueryParams.AddIgnoredActor(HeroActor);
	}

	TArray<FOverlapResult> Overlaps;
	World->OverlapMultiByObjectType(
		Overlaps,
		TornadoCenter,
		FQuat::Identity,
		ObjectQueryParams,
		FCollisionShape::MakeSphere(TornadoRadius),
		QueryParams);

	Anchors.Reset();
	LiftedTargets.Reset();

	TSet<UPrimitiveComponent*> AlreadyHandled;

	for (const FOverlapResult& Result : Overlaps)
	{
		UPrimitiveComponent* Comp = Result.GetComponent();
		if (!IsValid(Comp) || !Comp->IsSimulatingPhysics())
		{
			continue;
		}

		AActor* CompOwner = Comp->GetOwner();
		if (CompOwner == DiceActor || CompOwner == HeroActor)
		{
			continue;
		}

		bool bAlreadyInSet = false;
		AlreadyHandled.Add(Comp, &bAlreadyInSet);
		if (bAlreadyInSet)
		{
			continue;
		}

		const FVector Offset = Comp->GetComponentLocation() - TornadoCenter;

		FWindAnchor Anchor;
		Anchor.Target = Comp;
		Anchor.StartAngle = (Offset.SizeSquared2D() > KINDA_SMALL_NUMBER)
			? FMath::Atan2(Offset.Y, Offset.X)
			: FMath::FRandRange(0.f, TornadoTwoPi);
		Anchor.HeightFactor = FMath::FRandRange(data->MinHeightFactor, 1.f);
		Anchor.LastLocation = TornadoCenter; // anchors are born at the center (progress = 0)

		Anchors.Add(Anchor);
		LiftedTargets.Add(Comp);

		if (CompOwner)
		{
			OnDiceHitTarget(TornadoCenter, Comp->GetComponentLocation(), CompOwner);
		}
	}

	if (Anchors.Num() == 0)
	{
		K2_EndAbility();
		return;
	}

	FTimerManager& TimerManager = World->GetTimerManager();

	TimerManager.SetTimer(
		AnchorTickTimerHandle, this, &UDTTornadoAbility::UpdateAnchors, AnchorUpdateInterval, true);

	// Safety net: the ability ends no matter what (turn system depends on it!)
	TimerManager.SetTimer(
		MaxWaitTimerHandle, this, &UDTTornadoAbility::K2_EndAbility, TornadoLifetime + MaxSettleWaitTime, false);
}

FVector UDTTornadoAbility::ComputeAnchorLocation(const FWindAnchor& Anchor, float Progress) const
{
	// Center -> edge ramp (ease out), then the anchor stays on the edge while it keeps rotating
	const float RampAlpha = (data->RadialRampFraction > KINDA_SMALL_NUMBER)
		? FMath::Clamp(Progress / data->RadialRampFraction, 0.f, 1.f)
		: 1.f;
	const float EasedRamp = 1.f - FMath::Square(1.f - RampAlpha);

	const float Direction = data->bClockwise ? -1.f : 1.f;
	const float Angle = Anchor.StartAngle + Direction * Progress * TotalRotations * TornadoTwoPi;
	const float Distance = TornadoRadius * EasedRamp;

	return TornadoCenter + FVector(
		FMath::Cos(Angle) * Distance,
		FMath::Sin(Angle) * Distance,
		data->MaxLiftHeight * Anchor.HeightFactor * EasedRamp);
}

void UDTTornadoAbility::UpdateAnchors()
{
	UWorld* World = GetWorld();
	if (!World || !data || bReleased)
	{
		return;
	}

	const float Now = World->GetTimeSeconds();
	const float RawDelta = Now - LastUpdateTime;
	if (RawDelta <= KINDA_SMALL_NUMBER)
	{
		return;
	}
	LastUpdateTime = Now;

	const float Elapsed = Now - TornadoStartTime;
	if (Elapsed >= TornadoLifetime)
	{
		ReleaseTargets();
		return;
	}

	const float Progress = Elapsed / TornadoLifetime;
	const float ImpulseDelta = FMath::Min(RawDelta, 0.1f);
	const float GravityZ = World->GetGravityZ();

	// ---- DEBUG DRAW ----
	DebugDrawVolume();
	// ---- END DEBUG DRAW ----

	for (int32 i = Anchors.Num() - 1; i >= 0; --i)
	{
		FWindAnchor& Anchor = Anchors[i];
		UPrimitiveComponent* Target = Anchor.Target.Get();

		if (!IsValid(Target) || !Target->IsSimulatingPhysics())
		{
			Anchors.RemoveAtSwap(i);
			continue;
		}

		const FVector AnchorLocation = ComputeAnchorLocation(Anchor, Progress);
		const FVector AnchorVelocity = (AnchorLocation - Anchor.LastLocation) / RawDelta;

		const FVector TargetLocation = Target->GetComponentLocation();
		const FVector TargetVelocity = Target->GetPhysicsLinearVelocity();

		// ---- DEBUG DRAW (must stay before LastLocation is updated: it draws the trail) ----
		DebugDrawAnchor(Anchor, AnchorLocation, TargetLocation);
		// ---- END DEBUG DRAW ----

		Anchor.LastLocation = AnchorLocation;

		// Spring + damper towards the anchor (acceleration, so it does not depend on the object's mass)
		FVector Acceleration =
			data->PullStiffness * (AnchorLocation - TargetLocation) +
			data->PullDamping * (AnchorVelocity - TargetVelocity);

		Acceleration.Z -= GravityZ; // cancel gravity so lifted objects can really float
		Acceleration = Acceleration.GetClampedToMaxSize(data->MaxPullAcceleration);

		Target->AddImpulse(Acceleration * ImpulseDelta, NAME_None, true);
	}
}

void UDTTornadoAbility::ReleaseTargets()
{
	UWorld* World = GetWorld();
	if (!World || bReleased)
	{
		return;
	}

	bReleased = true;
	ReleaseTime = World->GetTimeSeconds();

	// ---- DEBUG DRAW (must stay before Anchors.Reset()) ----
	DebugDrawRelease();
	// ---- END DEBUG DRAW ----

	Anchors.Reset();

	FTimerManager& TimerManager = World->GetTimerManager();
	TimerManager.ClearTimer(AnchorTickTimerHandle);
	TimerManager.SetTimer(CheckRestTimerHandle, this, &UDTTornadoAbility::CheckIfAtRest, RestCheckInterval, true);
}

void UDTTornadoAbility::CheckIfAtRest()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	if (World->GetTimeSeconds() - ReleaseTime < MinSettleTime)
	{
		return;
	}

	const float ThresholdSq = FMath::Square(RestVelocityThreshold);
	bool bAllAtRest = true;

	for (int32 i = LiftedTargets.Num() - 1; i >= 0; --i)
	{
		UPrimitiveComponent* Target = LiftedTargets[i].Get();

		if (!IsValid(Target))
		{
			LiftedTargets.RemoveAtSwap(i);
			continue;
		}

		if (Target->IsSimulatingPhysics()
			&& Target->GetPhysicsLinearVelocity().SizeSquared() > ThresholdSq)
		{
			bAllAtRest = false;
		}
	}

	if (bAllAtRest)
	{
		FTimerManager& TimerManager = World->GetTimerManager();
		TimerManager.ClearTimer(CheckRestTimerHandle);
		TimerManager.ClearTimer(MaxWaitTimerHandle);
		K2_EndAbility();
	}
}

void UDTTornadoAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                          const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (UWorld* World = GetWorld())
	{
		FTimerManager& TimerManager = World->GetTimerManager();
		TimerManager.ClearTimer(AnchorTickTimerHandle);
		TimerManager.ClearTimer(CheckRestTimerHandle);
		TimerManager.ClearTimer(MaxWaitTimerHandle);
	}

	Anchors.Reset();
	LiftedTargets.Reset();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

// ---- DEBUG DRAW (sponsored by ClaudeAI) ----
// Red sphere   : detection volume (the overlap sphere)
// Orange cyl.  : the cylinder the BP visual should match
// Cyan sphere  : a WindAnchor
// Yellow line  : anchor -> lifted object (the pull)
// Green line   : anchor trail (stays for DebugTrailDuration seconds)
// Big red sphere: where each anchor was deleted at the end of the lifetime
void UDTTornadoAbility::DebugDrawVolume() const
{
#if ENABLE_DRAW_DEBUG
	UWorld* World = GetWorld();
	if (!bDrawDebug || !World)
	{
		return;
	}

	const float FrameLife = AnchorUpdateInterval * 2.f;

	DrawDebugSphere(World, TornadoCenter, TornadoRadius, 24, FColor::Red, false, FrameLife, 0, 1.f);
	DrawDebugCylinder(
		World,
		TornadoCenter,
		TornadoCenter + FVector(0.f, 0.f, GetTornadoHeight()),
		TornadoRadius,
		32,
		FColor::Orange,
		false,
		FrameLife,
		0,
		1.f);
#endif
}

void UDTTornadoAbility::DebugDrawAnchor(const FWindAnchor& Anchor, const FVector& NewLocation, const FVector& TargetLocation) const
{
#if ENABLE_DRAW_DEBUG
	UWorld* World = GetWorld();
	if (!bDrawDebug || !World)
	{
		return;
	}

	const float FrameLife = AnchorUpdateInterval * 2.f;

	DrawDebugSphere(World, NewLocation, 20.f, 12, FColor::Cyan, false, FrameLife, SDPG_Foreground, 2.f);
	DrawDebugLine(World, NewLocation, TargetLocation, FColor::Yellow, false, FrameLife, SDPG_Foreground, 1.f);
	DrawDebugLine(World, Anchor.LastLocation, NewLocation, FColor::Green, false, DebugTrailDuration, 0, 2.f);
#endif
}

void UDTTornadoAbility::DebugDrawRelease() const
{
#if ENABLE_DRAW_DEBUG
	UWorld* World = GetWorld();
	if (!bDrawDebug || !World)
	{
		return;
	}

	for (const FWindAnchor& Anchor : Anchors)
	{
		DrawDebugSphere(World, Anchor.LastLocation, 35.f, 12, FColor::Red, false, 2.f, SDPG_Foreground, 3.f);
	}
#endif
}
// ---- END DEBUG DRAW ----