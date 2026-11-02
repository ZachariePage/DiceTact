// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiceTact/Dice/DTActorDiceCollisionData.h"
#include "DiceTact/Interface/DTPhysicalUnitInterface.h"
#include "GameFramework/Character.h"
#include "DTTestPhysicUnit.generated.h"

UCLASS()
class DICETACT_API ADTTestPhysicUnit : public ACharacter, public IDTPhysicalUnitInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADTTestPhysicUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void ApplyImpulse_Implementation(const FPushData& Info) override;

	//TO DO magic numbers to separate inside a data asset
	UPROPERTY(EditAnywhere, Category = "Ragdoll") float TumbleSpeed = 360.f;
	UPROPERTY(EditAnywhere, Category = "Ragdoll") float RagdollMinDuration = 0.4f;
	UPROPERTY(EditAnywhere, Category = "Ragdoll") float RagdollMaxDuration = 6.f;
	UPROPERTY(EditAnywhere, Category = "Ragdoll") float RagdollSettleSpeed = 30.f;
	UPROPERTY(EditAnywhere, Category = "Ragdoll") float RagdollSettleAngularSpeed = 45.f;

	UPROPERTY(EditAnywhere, Category = "Collision") float LightHitMultiplier  = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Collision") float MediumHitMultiplier = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Collision") float HeavyHitMultiplier  = 1.5f;
	UPROPERTY(EditAnywhere, Category = "Collision") float BaseStrengthBonus = 400.f;
	UPROPERTY(EditDefaultsOnly, Category = "Collision")
	TObjectPtr<UDTActorDiceCollisionData> CollisionData;

	float GetMassMultiplier(EPhysMassClass HitterMass) const;
	
	UPROPERTY(VisibleAnywhere)
	bool bRagdolling = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UPhysicalReactionComponent> PhysicalReaction;

	UPROPERTY()
	float RagdollTimer = 0.f;

	void BeginRagdoll(FVector LaunchVelocity, FVector Torque);
	void TickRagdoll(float DeltaTime);
	void EndRagdoll();

	FVector DefaultMeshRelativeLocation;
	FRotator DefaultMeshRelativeRotation;

	UFUNCTION()
	void HandleImpactReceived(UPhysicalReactionComponent* Comp, const FPhysicalImpactInfo& Info);
};
