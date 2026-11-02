// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicalReactionComponent.generated.h"

UENUM(BlueprintType)
enum class EPhysMassClass : uint8 { Light, Medium, Heavy };

USTRUCT(BlueprintType)
struct FPhysicalImpactInfo
{
	GENERATED_BODY()
 
	UPROPERTY(BlueprintReadWrite) FVector Impulse = FVector::ZeroVector;
	UPROPERTY(BlueprintReadWrite) FVector HitLocation = FVector::ZeroVector;
	UPROPERTY(BlueprintReadWrite) float ImpactSpeed = 0.f;
	UPROPERTY(BlueprintReadWrite) EPhysMassClass OtherMass = EPhysMassClass::Light;
	UPROPERTY(BlueprintReadWrite) TWeakObjectPtr<AActor> Instigator;
	UPROPERTY(BlueprintReadWrite) TWeakObjectPtr<AActor> Source;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImpactReceived,
	UPhysicalReactionComponent*, Comp, const FPhysicalImpactInfo&, Info);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnImpactInitiated,
	UPhysicalReactionComponent*, Comp, AActor*, HitActor, const FPhysicalImpactInfo&, Info);



UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DICETACT_API UPhysicalReactionComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPhysicalReactionComponent();
	
	UFUNCTION(BlueprintCallable) void ReceiveImpact(const FPhysicalImpactInfo& Info);
	
	FVector GetLastFrameVelocity() const { return LastFrameVelocity; }
	EPhysMassClass GetMassClass() const;

	UPROPERTY(BlueprintAssignable) FOnImpactReceived OnImpactReceived;
	UPROPERTY(BlueprintAssignable) FOnImpactInitiated OnImpactInitiated;

	UPROPERTY(BlueprintReadWrite) TObjectPtr<UPrimitiveComponent> TrackedBody;
protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DT, ELevelTick, FActorComponentTickFunction*) override;
 
	UFUNCTION()
	void HandleOwnerHit(UPrimitiveComponent* HitComp, AActor* Other, UPrimitiveComponent* OtherComp,
						FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Physical Reaction")
	EPhysMassClass MassType = EPhysMassClass::Light;
private:
	FVector LastFrameVelocity = FVector::ZeroVector;
	TMap<TWeakObjectPtr<AActor>, double> LastHitTime;

	void PruneHitTimestamps(float Now);
};
