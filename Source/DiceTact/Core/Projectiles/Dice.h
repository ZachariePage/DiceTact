// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AbilitySystemInterface.h"
#include "DicePointCalculation.h"
#include "GameFramework/Actor.h"
#include "Dice.generated.h"

class UDTDiceElementDefinition;
class UDiceCollision;
class UThrowType;
class UDTDiceResolveDefinition;
class UGameplayAbility;
class AHeroCharacter;
class ADiceCamera;
class UAbilitySystemComponent;

UENUM(Blueprintable)
enum class EDiceReadingDirection : uint8
{
	Top,
	Bottom
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSingleEvent);
UCLASS()
class DICETACT_API ADice : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADice();
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	
	void InitializeDice(const UDTDiceElementDefinition* ElementDefinition, const UDTDiceResolveDefinition* ResolveDefinition);
	void InitializeDiceCamera();

	UFUNCTION(BlueprintCallable)
	void ThrowDice(FVector Direction, const UThrowType* data, float additionalStrength = 0);

	//Resolve means Triggering the resolve ability.
	UFUNCTION(BlueprintCallable)
	void ResolveDice();
	
	UFUNCTION(BlueprintCallable)
	virtual int CalculateDiceSide() const;

	UFUNCTION(BlueprintCallable)
	int GetNumberOfSide() const;

	UFUNCTION(BlueprintCallable)
	void DisablePhysic();
	UFUNCTION(BlueprintCallable)
	void EnablePhysic(FVector InitialVelocity);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsImmobile() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasSettled() const;

	UFUNCTION(BlueprintCallable)
	void SetSettled(bool _bSettled);

	ADiceCamera* GetDiceCamera() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UPrimitiveComponent* GetDicePhysicalComponent() const;

	UFUNCTION()
	const UDTDiceResolveDefinition* GetDiceResolveDefinition() const;

	UFUNCTION(BlueprintCallable)
	void OnDiceHit(ADice* OtherDice, const FHitResult& Hit);
	void FractureDice(ADice* OtherDice);
	void ApplyImpulseToDice(ADice* OtherDice, const FHitResult& Hit, float ComingSpeedDice);
	UFUNCTION(BlueprintCallable)
	void OnCollisionWithDice(ADice* otherDice);

	
	bool CanProcessHit(ADice* OtherDice);
	
	void SetPlayerUnit(AHeroCharacter* playerUnit);

	UFUNCTION(BlueprintCallable, Category = "destruction")
	void DestroyDice();

	UFUNCTION()
	void OnResolveFinished(UGameplayAbility* Ability);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "destruction")
	void OnBeforeDiceDestroyed();

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnDiceSettled();

	UFUNCTION(BlueprintCallable)
	FVector GetCachedVelocity() const;

	//delagates
	UPROPERTY(BlueprintAssignable, Category = "Collisions")
	FOnSingleEvent OnFirstCollision;

	UPROPERTY(BlueprintAssignable, Category = "Collisions")
	FOnSingleEvent OnDiceSettle;

	UFUNCTION()
	void OnHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit
	);

	
	UStaticMeshComponent* GetStaticMeshComponent() const;
	UDiceCollision* GetDiceCollision() const;
	UPROPERTY()
	float latestHit = 0.f;
protected:
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> DiceMesh;
	
	UPROPERTY()
	TObjectPtr<const UDTDiceResolveDefinition> ResolveDefinition;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dice")
	TObjectPtr<const UThrowType> ThrowData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dice")
	TObjectPtr<UDiceCollision> DiceCollisionData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TSubclassOf<ADiceCamera> DiceCameraToSpawn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<ADiceCamera> DiceCamera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
	TArray<UDicePointCalculation*> DiceFaces;

	UPROPERTY()
	AHeroCharacter* CasterUnit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EDiceReadingDirection DiceReadingDirection = EDiceReadingDirection::Top;
	FVector ReadingDirection;
	
	/* Local temporary variables */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Side")
	int numberOfSide = 4;
	UPROPERTY()
	int currentSide;
	UPROPERTY()
	FVector CachedVelocity = FVector::ZeroVector;

	UPROPERTY()
	bool bDivisionPending = false;

	float settledTimer = 10.f;
	float lastSettledTimer;

	UPROPERTY(VisibleAnywhere)
	bool bSettled = false;
	UPROPERTY()
	bool bSentAbility = false;
	
	UPROPERTY()
	TMap<TWeakObjectPtr<ADice>, float> RecentHitTimestamps;
	const float HitCooldown = 1.f;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	float CameraBlendTime = 0.75f;
	FTimerHandle CleanupTimerHandle;
	bool bShouldChangeCamera;

	bool bFirstCollisionHappened;
	UFUNCTION()
	void FinishDestroy_Internal();
};
