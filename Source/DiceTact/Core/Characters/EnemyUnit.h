// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "TurnBaseUnit.h"
#include "Core/Interface/IDamageable.h"
#include "Core/Interface/Pushable.h"
#include "Core/Projectiles/Dice.h"
#include "Core/TurnBaseSystem/DTTurnReceiver.h"
#include "GameFramework/Character.h"
#include "EnemyUnit.generated.h"

class UEnemybaseAttack;
class UDTBounceData;
class UDTEnemyDefinition;
class UActorDiceCollision;
class UDiceCollision;
class UAbilitySystemComponent;

UCLASS()
class DICETACT_API AEnemyUnit : public ATurnBaseUnit, public IDTTurnReceiver ,public IIDamageable, public IPushable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual bool PushToward_Implementation(FVector direction, float strength, AActor* pushingActor = nullptr) override;
	virtual bool PushTowardWithAdditionalZVelocity_Implementation(FVector direction, float strength, float additionalZVelocity, AActor* pushingActor = nullptr) override;
	virtual bool PushTowardVelocity_Implementation(FVector direction, AActor* pushingActor = nullptr) override;

	/* IDTTurnReceiver Interface begin */
	UFUNCTION()
	virtual FOnTurnFinished& GetFinishedTurnDelegate() override
	{return OnTurnFinished;}

	UPROPERTY(BlueprintAssignable)
	FOnTurnFinished OnTurnFinished;
	
	
	//idamageable
	virtual FDamageInfo TakeDamage_Implementation(AActor* Dealer,int Damage) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UActorDiceCollision> CollisionData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UDTBounceData> BounceData;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const UDTEnemyDefinition* GetEnemyDefinition() const;
	
protected:

	//abilities
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
	TSubclassOf<UEnemybaseAttack> BaseAttack;
	UPROPERTY()
	FGameplayAbilitySpecHandle AttackHandle;

	UFUNCTION(BlueprintCallable)
	void Attack(AHeroCharacter* heros);
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Collision")
	TObjectPtr<UDTEnemyDefinition> EnemyDefinition;
	
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

	FVector DefaultMeshRelativeLocation;
	FRotator DefaultMeshRelativeRotation;

	UPROPERTY()
	TObjectPtr<UHealthComponent> HealthComp;
};
