// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AbilitySystemInterface.h"
#include "DTDicePointCalculationComp.h"
#include "GameplayAbilitySpecHandle.h"
#include "DiceTact/subsystem/DTActorFactorySubSystem.h"
#include "GameFramework/Actor.h"
#include "DTDice.generated.h"

class UDTBounceData;
class UDTDiceElementDefinition;
class UDTDiceCollisionData;
class UDTThrowTypeData;
class UDTDiceResolveDefinition;
class UGameplayAbility;
class ADTHeroCharacter;
class ADTDiceCamera;
class UAbilitySystemComponent;

UENUM(Blueprintable)
enum class EDiceReadingDirection : uint8
{
	Top,
	Bottom
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSingleEvent);
UCLASS()
class DICETACT_API ADTDice : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTDice();
	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	void InitializeDice(const UDTDiceElementDefinition* ElementDefinition, const UDTDiceResolveDefinition* ResolveDefinition);
	void InitializeDiceCamera();

	UFUNCTION(BlueprintCallable)
	void ThrowDice(FVector Direction, const UDTThrowTypeData* data, float additionalStrength = 0, float AdditionalTorgue = 0);

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

	ADTDiceCamera* GetDiceCamera() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	UPrimitiveComponent* GetDicePhysicalComponent() const;

	UFUNCTION()
	const UDTDiceResolveDefinition* GetDiceResolveDefinition() const;

	UFUNCTION(BlueprintCallable)
	void OnDiceHit(ADTDice* OtherDice, const FHitResult& Hit);
	void FractureDice(ADTDice* OtherDice);
	void ApplyImpulseToDice(ADTDice* OtherDice, const FHitResult& Hit, float ComingSpeedDice);
	UFUNCTION(BlueprintCallable)
	void OnCollisionWithDice(ADTDice* otherDice);

	
	bool CanProcessHit(ADTDice* OtherDice);
	
	void SetAvatarOwner(AActor* AvatarOwner) const;

	UFUNCTION(BlueprintCallable, Category = "destruction")
	void DestroyDice();

	bool IsDiceRemoved() const { return bDiceRemoved; }

	UFUNCTION(BlueprintImplementableEvent)
	void OnResolutionStarted();

	UFUNCTION()
	void Internal_OnResolutionFinished(UGameplayAbility* Ability);

	UFUNCTION(BlueprintImplementableEvent)
	void OnResolutionFinished();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "destruction")
	void OnBeforeDiceDestroyed();

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnDiceSettled();

	UFUNCTION(BlueprintImplementableEvent, Category = "Bounce")
	void OnBounceGround(FVector Location);

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnDiceFractured(EDiceType MyTypeSide, const TArray<EDiceType>& DiceToSpawn);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInitializationFinished();

	UFUNCTION(BlueprintCallable)
	FVector GetCachedVelocity() const;

	//delagates
	UPROPERTY(BlueprintAssignable, Category = "Collisions")
	FOnSingleEvent OnFirstCollision;
	UPROPERTY(BlueprintAssignable)
	FOnSingleEvent OnDiceResolveEnded;
	UPROPERTY(BlueprintAssignable, Category = "Collisions")
	FOnSingleEvent OnDiceSettle;
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnSingleEvent OnDiceRemoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounce")
	TObjectPtr<UDTBounceData> BounceData;

	UFUNCTION()
	void OnHit(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit
	);

	
	UStaticMeshComponent* GetStaticMeshComponent() const;
	UDTDiceCollisionData* GetDiceCollision() const;
	
	const TArray<FVector>& GetBouncePoints() const { return BouncePoints; }
	void ClearBouncePoints() { BouncePoints.Reset(); }
public:
	
protected:
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UStaticMeshComponent> DiceMesh;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	TObjectPtr<const UDTDiceResolveDefinition> ResolveDefinition;
	FGameplayAbilitySpecHandle ResolveHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dice")
	TObjectPtr<const UDTThrowTypeData> ThrowData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Dice")
	TObjectPtr<UDTDiceCollisionData> DiceCollisionData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TSubclassOf<ADTDiceCamera> DiceCameraToSpawn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TObjectPtr<ADTDiceCamera> DiceCamera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ability")
	TArray<UDTDicePointCalculationComp*> DiceFaces;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EDiceReadingDirection DiceReadingDirection = EDiceReadingDirection::Top;
	FVector ReadingDirection;

	
	
	// hit collision safeguard
	UPROPERTY()
	float latestHit = -BIG_NUMBER;
	void PruneHitTimestamps(float Now);
	UPROPERTY()
	TMap<TWeakObjectPtr<ADTDice>, float> RecentHitTimestamps;
	const float HitCooldown = 1.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Bounce")
	FName GroundTag = "Ground";
	UPROPERTY(EditDefaultsOnly, Category = "Bounce")
	float MinBounceImpulseToRecord = 50.f;
	UPROPERTY(EditDefaultsOnly, Category = "Bounce")
	float MinDistanceBetweenBouncePoints = 50.f;

	UPROPERTY()
	TArray<FVector> BouncePoints;
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
	
	
	


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	float CameraBlendTime = 0.75f;
	FTimerHandle CleanupTimerHandle;
	bool bShouldChangeCamera;

	bool bDiceRemoved = false;
	bool bFirstCollisionHappened;
	UFUNCTION()
	void FinishDestroy_Internal();
};
