#include "DTSmashAbility.h"

#include "DiceTact/Abilities/Definitions/DTSmashData.h"
#include "DiceTact/Abilities/DTSeismicWaveComponent.h"
#include "DiceTact/Characters/Hero/DTHeroCharacter.h"
#include "DiceTact/Dice/Definitions/DTDiceResolveDefinition.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "Engine/World.h"

// Each resolving dice owns its own Smash sequence
UDTSmashAbility::UDTSmashAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

// Prepare Smash from the resolving dice without reading the cursor or selected hero
void UDTSmashAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	bCommitted = false;
	bWaitingForLanding = false;
	bEndingSmash = false;
	WaveOrigin = FVector::ZeroVector;
	SourceDice.Reset();
	Hero.Reset();

	SourceDice = Cast<ADTDice>(ActorInfo->OwnerActor.Get());

	if (!SourceDice.IsValid() || !IsValid(AbilityData))
	{
		UE_LOG(LogTemp, Warning, TEXT("Smash needs a source dice and jump settings"));
		FinishSmash(true);
		return;
	}

	Hero = Cast<ADTHeroCharacter>(SourceDice->GetInstigator());
	ResolveDefinition = SourceDice->GetDiceResolveDefinition();
	DiceFace = FMath::Max(1, GetAbilityLevel());
	
	if (!Hero.IsValid() || ActorInfo->AvatarActor.Get() != Hero.Get() || !IsValid(ResolveDefinition))
	{
		UE_LOG(LogTemp, Warning, TEXT("Smash needs its throwing hero and a valid dice resolve definition"));
		FinishSmash(true);
		return;
	}

	const bool bJumpPrepared = Hero->PrepareAbilityJump(SourceDice->GetActorLocation(),
		AbilityData->ArcParam, SourceDice.Get(), LaunchVelocity, JumpTargetLocation);
	
	if (!bJumpPrepared)
	{
		UE_LOG(LogTemp, Warning, TEXT("Smash needs valid settings and walkable ground below its dice"));
		FinishSmash(true);
		return;
	}

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
	if (!IsActive() || bCommitted)
	{
		return;
	}
     //Unreal uses CommitAbility to call CommitExecute
	const bool bCommitSucceeded = CommitAbility(Handle, ActorInfo, ActivationInfo);
	
	if (!bCommitSucceeded)
	{
		FinishSmash(true);
	}
}

// Start the prepared jump once and keep the dice in place until resolution finishes
void UDTSmashAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	if (bCommitted || !IsActive() || bEndingSmash)
	{
		return;
	}

	bCommitted = true;

	if (!SourceDice.IsValid() || !Hero.IsValid())
	{
		FinishSmash(true);
		return;
	}

	SourceDice->OnDestroyed.AddUniqueDynamic(this, &UDTSmashAbility::OnParticipantDestroyed);
	Hero->OnDestroyed.AddUniqueDynamic(this, &UDTSmashAbility::OnParticipantDestroyed);
	
	ADTDice* ResolvingDice = SourceDice.Get();
	
	ResolvingDice->DisablePhysic();
	ResolvingDice->SetActorEnableCollision(false);
	
	OnDiceActivation(ResolvingDice->GetActorLocation());
	
	ADTHeroCharacter* JumpingHero = Hero.Get();
	
	if (!SourceDice.IsValid() || !IsValid(JumpingHero))
	{
		FinishSmash(true);
		return;
	}

	FOnAbilityJumpFinished JumpFinished;
	
	JumpFinished.AddUObject(this, &UDTSmashAbility::OnHeroJumpFinished);
	
	const bool bJumpStarted = JumpingHero->BeginAbilityJump(LaunchVelocity, AbilityData->MaxJumpDuration, AbilityData->CollisionLookAheadTime, SourceDice.Get(), JumpFinished);
	
	if (!bJumpStarted || !SourceDice.IsValid() || !Hero.IsValid())
	{
		if (bJumpStarted && IsValid(JumpingHero))
		{
			JumpingHero->CancelAbilityJump();
		}
		FinishSmash(true);
		return;
	}

	bWaitingForLanding = true;

	OnJumpStarted(Hero->GetActorLocation(), JumpTargetLocation);

	if (!bWaitingForLanding || !SourceDice.IsValid() || !Hero.IsValid())
	{
		return;
	}

	Hero->CheckAbilityJump();
}

// Only an actual landing starts the wave a cancelled jump ends the ability
void UDTSmashAbility::OnHeroJumpFinished(const FHitResult& Hit, bool bCancelled)
{
	if (bEndingSmash || !bWaitingForLanding)
	{
		return;
	}

	if (bCancelled || !SourceDice.IsValid() || !Hero.IsValid())
	{
		FinishSmash(true);
		return;
	}

	bWaitingForLanding = false;

	WaveOrigin = Hit.ImpactPoint;
	
	OnSmashImpact(WaveOrigin);
	
	if (!SourceDice.IsValid() || !Hero.IsValid())
	{
		FinishSmash(true);
		return;
	}

	// The dice owns the wave so pushes and damage keep the correct source
	WaveComponent = NewObject<UDTSeismicWaveComponent>(SourceDice.Get());
	WaveComponent->RegisterComponent();

	WaveComponent->OnWaveUpdated.AddUObject(this, &UDTSmashAbility::OnWaveUpdated);
	WaveComponent->OnRingFinished.AddUObject(this, &UDTSmashAbility::OnWaveFinished);
	WaveComponent->OnTargetHit.AddUObject(this, &UDTSmashAbility::OnWaveHitTarget);
	WaveComponent->OnEffectFinished.AddUObject(this, &UDTSmashAbility::FinishSmash, false);

	const bool bWaveStarted = WaveComponent->StartWave(AbilityData, WaveOrigin, DiceFace, AbilityData->RingCount, AbilityData->RingDelay);
	
	if (!bWaveStarted)
	{
		FinishSmash(true);
	}
}

// Release the resolution queue if the hero or source dice is destroyed unexpectedly
void UDTSmashAbility::OnParticipantDestroyed(AActor* DestroyedActor)
{
	FinishSmash(true);
}

// Let the normal dice ability-ended callback finish resolution
void UDTSmashAbility::FinishSmash(bool bCancelled)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, bCancelled);
}

// Remove callbacks first so restoring the hero cannot start a wave during cancellation
void UDTSmashAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	if (!IsActive() || bEndingSmash)
	{
		return;
	}

	if (ScopeLockCount > 0)
	{
		WaitingToExecute.Add(FPostLockDelegate::CreateUObject(this, &UDTSmashAbility::EndAbility,
			Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled));
		return;
	}

	bEndingSmash = true;

	if (SourceDice.IsValid())
	{
		SourceDice->OnDestroyed.RemoveDynamic(this, &UDTSmashAbility::OnParticipantDestroyed);
	}

	if (Hero.IsValid())
	{
		Hero->OnDestroyed.RemoveDynamic(this, &UDTSmashAbility::OnParticipantDestroyed);
		if (bWaitingForLanding)
		{
			Hero->CancelAbilityJump();
		}
	}

	bWaitingForLanding = false;
	Hero.Reset();
	SourceDice.Reset();

	if (IsValid(WaveComponent))
	{
		WaveComponent->OnWaveUpdated.RemoveAll(this);
		WaveComponent->OnRingFinished.RemoveAll(this);
		WaveComponent->OnTargetHit.RemoveAll(this);
		WaveComponent->OnEffectFinished.RemoveAll(this);
		WaveComponent->DestroyComponent();
		WaveComponent = nullptr;
	}

	//Lets Gas end the ability
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
