#pragma once

#include "CoreMinimal.h"
#include "DTResolveGameplayAbility.h"
#include "DiceTact/Characters/Enemy/DTEnemyUnit.h"
#include "GameFramework/Pawn.h"
#include "DiceTact/Abilities/Definitions/DTMagicMissileData.h"
#include "Algo/Sort.h"
#include "DTMagicMissileAbility.generated.h"

class UDTMagicMissileData;
/**
 * 
 */
UCLASS()
class DICETACT_API UDTMagicMissileAbility : public UDTResolveGameplayAbility
{
	GENERATED_BODY()

public:
	virtual void CommitExecute(const FGameplayAbilitySpecHandle Handle,const FGameplayAbilityActorInfo* ActorInfo,const FGameplayAbilityActivationInfo ActivationInfo) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

protected:
	void FindClosestEnemies(AActor* CenterActor, int MaxTargets);
	void SpawnNextMagicMissile(int CurrentIndex, int TotalCount, FVector BaseTargetLocation, FVector SpawnLocation, float ExplosionRadius);
	
	void TryEndAbility();
	
	UFUNCTION()
	void OnMagicMissileDestroyed(AActor* DestroyedActor);
	
	UPROPERTY()
	TArray<TWeakObjectPtr<ADTMagicMissileLauncherActor>> SpawnedMagicMissileLaunchers;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Throw")
	float MagicMissileCheckInterval = 0.1f;
	
	UPROPERTY()
	FTimerHandle MagicMissileSpawnTimerHandle;
	FTimerHandle MagicMissileCheckTimerHandle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	const TObjectPtr<UDTMagicMissileData> AbilityData;
	UPROPERTY(EditAnywhere, Category = "Targets")
	TArray<ADTEnemyUnit*> Enemies;
	
	int ProjectileNumber;
	int ProjectilesLeft;
};
