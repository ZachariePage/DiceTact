#include "DTMagicMissileAbility.h"
#include "Kismet/GameplayStatics.h"

void UDTMagicMissileAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
									const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);
	OnDiceActivation(ActorInfo->OwnerActor->GetActorLocation());
    
	FVector BaseTargetLocation = ActorInfo->OwnerActor->GetActorLocation();
	FVector SpawnLocation = ActorInfo->OwnerActor->GetActorLocation() + FVector(0, 0, 200);
	ProjectileNumber = AbilityData->BaseNumberOfProjectile + AbilityData->AdditionalProjectile * GetAbilityLevel();
	ProjectilesLeft = ProjectileNumber;
	float ExplosionRadius = AbilityData->BaseRadius + AbilityData->AdditionalRadius * GetAbilityLevel();

	AActor* OwnerActor = ActorInfo->OwnerActor.Get();
	
	FindClosestEnemies(OwnerActor, ProjectileNumber);

	if (Enemies.IsEmpty())
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
		return;
	}
	
	SpawnNextMagicMissile(0, ProjectileNumber, BaseTargetLocation, SpawnLocation, ExplosionRadius);
}

void UDTMagicMissileAbility::FindClosestEnemies(AActor* CenterActor, int MaxTargets)
{
	if (!AbilityData || !CenterActor || !GetWorld())
	{
		return;
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(
		GetWorld(),
		ADTEnemyUnit::StaticClass(),
		FoundActors);

	for (AActor* Actor : FoundActors)
	{
		ADTEnemyUnit* Enemy = Cast<ADTEnemyUnit>(Actor);

		if (!IsValid(Enemy))
		{
			continue;
		}

		UDTHealthComponent* HealthComponent = nullptr;
		Enemy->GetHealthComponent(HealthComponent);

		if (HealthComponent && !HealthComponent->IsAlive())
		{
			continue;
		}
		Enemies.Add(Enemy);
	}

	const FVector Origin = CenterActor->GetActorLocation();

	Algo::Sort(Enemies, [Origin](const ADTEnemyUnit* A, const ADTEnemyUnit* B)
	{
	return FVector::DistSquared(
		A->GetActorLocation(),
		Origin)
		<
		FVector::DistSquared(
		B->GetActorLocation(),
		Origin);
	});

	if (Enemies.Num() > MaxTargets)
	{
		Enemies.SetNum(MaxTargets);
	}
}

void UDTMagicMissileAbility::SpawnNextMagicMissile(int CurrentIndex, int TotalCount, FVector BaseTargetLocation, FVector SpawnLocation, float ExplosionRadius)
{
	if (!IsActive() || CurrentIndex >= TotalCount || !AbilityData)
	{
		return;
	}

	AActor* Avatar = GetAvatarActorFromActorInfo();
	if (!Avatar)
	{
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	ADTEnemyUnit* TargetEnemy = nullptr;
	
	if (Enemies.IsValidIndex(CurrentIndex))
	{
		TargetEnemy = Enemies[CurrentIndex];
	}
	else if (Enemies.Num() > ProjectileNumber)
	{
		TargetEnemy = Enemies[0];
	}

	const bool bHasTarget = IsValid(TargetEnemy);
	const FVector TargetLocation = bHasTarget ? TargetEnemy->GetActorLocation() : BaseTargetLocation;
	const FRotator SpawnRotation = (TargetLocation - SpawnLocation).Rotation();

	
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = GetOwningActorFromActorInfo();
	SpawnParams.Instigator = Cast<APawn>(Avatar);
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn; 
	
	ADTMagicMissileLauncherActor* MagicMissileLauncher = GetWorld()->SpawnActor<ADTMagicMissileLauncherActor>(
		AbilityData->MagicMissileLauncherToSpawn,
		SpawnLocation,
		SpawnRotation,
		SpawnParams);

	//Réduire le counter de Projectiles à lancer de 1, utilisé dans le TryEndAbility
	ProjectilesLeft -= 1;

	if (MagicMissileLauncher)
	{
		MagicMissileLauncher->SpawnedMagicMissile->ExplosionRadius = ExplosionRadius;
		MagicMissileLauncher->SetHomingTarget(bHasTarget ? static_cast<AActor*>(TargetEnemy) : nullptr, TargetLocation);
		SpawnedMagicMissileLaunchers.Add(MagicMissileLauncher);
		
		MagicMissileLauncher->OnDestroyed.AddDynamic(this, &UDTMagicMissileAbility::OnMagicMissileDestroyed);
	}

	int NextIndex = CurrentIndex + 1;
	if (NextIndex >= TotalCount)
	{
		GetWorld()->GetTimerManager().SetTimer(MagicMissileCheckTimerHandle, this, &UDTMagicMissileAbility::TryEndAbility,MagicMissileCheckInterval, true);
		return;
	}

	float Delay = FMath::FRandRange(AbilityData->MinDelayBetweenProjectiles, AbilityData->MaxDelayBetweenProjectiles);

	FTimerDelegate TimerDel;
	TimerDel.BindUObject(this, &UDTMagicMissileAbility::SpawnNextMagicMissile, NextIndex, TotalCount, BaseTargetLocation, SpawnLocation, ExplosionRadius);

	GetWorld()->GetTimerManager().SetTimer(MagicMissileSpawnTimerHandle, TimerDel, Delay, false);
}

void UDTMagicMissileAbility::TryEndAbility()
{
	if (ProjectilesLeft <= 0)
	{
		if (SpawnedMagicMissileLaunchers.IsEmpty())
		{
			GetWorld()->GetTimerManager().ClearTimer(MagicMissileCheckTimerHandle);
			EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
		}
	}
}

void UDTMagicMissileAbility::OnMagicMissileDestroyed(AActor* DestroyedActor)
{
	SpawnedMagicMissileLaunchers.RemoveAll([DestroyedActor](const TWeakObjectPtr<AActor>& Weak)
	{
		return Weak.Get() == DestroyedActor;
	});

	if (SpawnedMagicMissileLaunchers.IsEmpty() && GetWorld()->GetTimerManager().IsTimerActive(MagicMissileCheckTimerHandle) == false)
	{
		//shouldnt happen
	}
}

void UDTMagicMissileAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
								const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(MagicMissileSpawnTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(MagicMissileCheckTimerHandle);
	}

	if (AbilityData)
	{
		Enemies.Reset();
	}

	SpawnedMagicMissileLaunchers.Empty();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}