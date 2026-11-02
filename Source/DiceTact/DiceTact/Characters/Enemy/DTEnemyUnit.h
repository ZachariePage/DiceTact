// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "DiceTact/Characters/DTTurnBaseUnit.h"
#include "DiceTact/Interface/DTDamageable.h"
#include "DiceTact/Interface/DTPushable.h"
#include "DiceTact/Projectiles/DTDice.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnReceiver.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "DTEnemyUnit.generated.h"

class UDTDamageModifierAttributes;
struct FEnemyCombatData;
class UDTEnemyAttackAbility;
class UDTBounceData;
class UDTEnemyDefinition;
class UDTActorDiceCollisionData;
class UDTDiceCollisionData;
class UAbilitySystemComponent;

UCLASS()
class DICETACT_API ADTEnemyUnit : public ADTTurnBaseUnit, public IDTDamageable, public IDTPushable, public IDTPhysicalUnitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADTEnemyUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//hold obsolete interface
	virtual bool PushToward_Implementation(const FPushData& PushData) override;
	virtual bool PushTowardBlackHole_Implementation(const FPushData& PushData) override;

	//new physic interface
	virtual void ApplyImpulse_Implementation(const FPushData& Info) override;
	
	virtual FDamageInfo TakeDamage_Implementation(AActor* Dealer, int Damage) override;
	
	virtual void FellOutOfWorld(const class UDamageType& dmgType) override;

	UFUNCTION(BlueprintCallable)
	void UnregisterFromGame();
	
	//idamageable
	virtual void GetHealthComponent(UDTHealthComponent*& HealthComponent) override;
	

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTEnemyDefinition* GetEnemyDefinition() const;

	UFUNCTION(BlueprintCallable)
	FVector GetCachedVelocity() const;
	
protected:
	UPROPERTY()
	TObjectPtr<UDTDamageModifierAttributes> DamageModifierAttributeSet;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UDTActorDiceCollisionData> CollisionData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UDTBounceData> BounceData;

	//abilities
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY()
	FGameplayAbilitySpecHandle AttackHandle;

	UFUNCTION(BlueprintCallable)
	void TryAttack();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const FEnemyCombatData& GetEnemyCombatData() const;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UDTEnemyDefinition> EnemyDefinition;

	//physics
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UPhysicalReactionComponent> PhysicalReaction;
	UFUNCTION()
	void HandleImpactReceived(UPhysicalReactionComponent* Comp, const FPhysicalImpactInfo& Info);
	UFUNCTION()
	bool CanProcessHit(AActor* OtherDice);
	const float HitCooldown = 1.f;
	UPROPERTY()
	TMap<TWeakObjectPtr<AActor>, float> RecentHitTimestamps;

	UPROPERTY(VisibleAnywhere)
	bool bRagdolling = false;

	UPROPERTY()
	float RagdollTimer = 0.f;

	void BeginRagdoll(FVector LaunchVelocity, FVector Torque);
	void TickRagdoll(float DeltaTime);
	void EndRagdoll();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void PlayDeathAnim();

	FVector DefaultMeshRelativeLocation;
	FRotator DefaultMeshRelativeRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UDTHealthComponent> HealthComp;

	UPROPERTY()
	FVector CachedVelocity = FVector::ZeroVector;
};
