// Fill out your copyright notice in the Description page of Project Settings.


#include "DTTestPhysicUnit.h"

#include "AIController.h"
#include "Components/CapsuleComponent.h"
#include "DiceTact/Interface/DTPushable.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JUE/System/JUEDevelopmentStatics.h"


// Sets default values
ADTTestPhysicUnit::ADTTestPhysicUnit()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PhysicalReaction = CreateDefaultSubobject<UPhysicalReactionComponent>(TEXT("PhysicalReaction"));
}

// Called when the game starts or when spawned
void ADTTestPhysicUnit::BeginPlay()
{
	Super::BeginPlay();

	DefaultMeshRelativeLocation = GetMesh()->GetRelativeLocation();
	DefaultMeshRelativeRotation = GetMesh()->GetRelativeRotation();

	PhysicalReaction->OnImpactReceived.AddDynamic(this, &ADTTestPhysicUnit::HandleImpactReceived);
}

// Called every frame
void ADTTestPhysicUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRagdolling)
	{
		TickRagdoll(DeltaTime);
	}
}

// Called to bind functionality to input
void ADTTestPhysicUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ADTTestPhysicUnit::ApplyImpulse_Implementation(const FPushData& Info)
{
	BeginRagdoll(Info.Direction * Info.Strength, FMath::VRand() * TumbleSpeed);
}

float ADTTestPhysicUnit::GetMassMultiplier(EPhysMassClass HitterMass) const
{
	switch (HitterMass)
	{
		case EPhysMassClass::Light: return LightHitMultiplier;
		case EPhysMassClass::Heavy: return HeavyHitMultiplier;
		case EPhysMassClass::Medium: return MediumHitMultiplier;
	default:return MediumHitMultiplier;
	}
}

void ADTTestPhysicUnit::BeginRagdoll(FVector LaunchVelocity, FVector Torque)
{
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (!Capsule) return;
 
	bRagdolling = true;
	RagdollTimer = 0.f;
	
	if (AAIController* AI = Cast<AAIController>(GetController()))
	{
		AI->StopMovement();
	}
 
	UCharacterMovementComponent* CMC = GetCharacterMovement();
	CMC->StopMovementImmediately();
	CMC->DisableMovement();
 
	Capsule->SetSimulatePhysics(true);
	Capsule->WakeAllRigidBodies();
	Capsule->SetAllPhysicsLinearVelocity(LaunchVelocity);
	Capsule->SetAllPhysicsAngularVelocityInDegrees(Torque);
}

void ADTTestPhysicUnit::TickRagdoll(float DeltaTime)
{
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (!Capsule) return;
 
	RagdollTimer += DeltaTime;
 
	const bool bSlowEnough =
		Capsule->GetPhysicsLinearVelocity().Size() <= RagdollSettleSpeed &&
		Capsule->GetPhysicsAngularVelocityInDegrees().Size() <= RagdollSettleAngularSpeed;
 
	const bool bSettled = RagdollTimer >= RagdollMinDuration && bSlowEnough;
 
	if (bSettled || RagdollTimer >= RagdollMaxDuration)
	{
		EndRagdoll();
	}
}

void ADTTestPhysicUnit::EndRagdoll()
{
	UCapsuleComponent* Capsule = GetCapsuleComponent();
	if (!Capsule) return;
 
	Capsule->SetSimulatePhysics(false);
 
	FRotator Upright = GetActorRotation();
	Upright.Pitch = 0.f;
	Upright.Roll = 0.f;
	SetActorRotation(Upright, ETeleportType::TeleportPhysics);
 
	GetMesh()->SetRelativeLocationAndRotation(DefaultMeshRelativeLocation, DefaultMeshRelativeRotation);
	
	GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	bRagdolling = false;
}

void ADTTestPhysicUnit::HandleImpactReceived(UPhysicalReactionComponent* Comp, const FPhysicalImpactInfo& Info)
{
	if (bRagdolling || !CollisionData) return;
 
	const AActor* Source = Info.Source.Get();
	if (!Source) return;

	FVector Direction = (GetActorLocation() - Source->GetActorLocation()).GetSafeNormal();
	Direction.Z = 0.f;
	Direction.Normalize();
	if (Info.ImpactSpeed < CollisionData->MinimumSpeed) return;
	
	const float PusherSpeed = Info.ImpactSpeed + BaseStrengthBonus;
 
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("Speed collision = %f (raw %f)"), PusherSpeed, Info.ImpactSpeed));
 
	float Intensity = FMath::Clamp(Info.ImpactSpeed / FMath::Max(CollisionData->MaxSpeed, KINDA_SMALL_NUMBER) * GetMassMultiplier(Info.OtherMass),0.f, 1.f);
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("intensity (raw %f)"), Intensity));
	switch (CollisionData->ImpulseCurve)
	{
	case EImpulseCurve::Exponential:
		Intensity = FMath::Pow(Intensity, CollisionData->CurveExponent);
		break;
 
	case EImpulseCurve::Custom:
		if (CollisionData->IntensityCurve)
		{
			Intensity = FMath::Clamp(CollisionData->IntensityCurve->GetFloatValue(Intensity), 0.f, 1.f);
		}
		break;
 
	case EImpulseCurve::Linear:
	default:
		break;
	}
 
	const float ImpulseStrength = FMath::Lerp(CollisionData->MinDiceImpulseSpeed, CollisionData->MaxDiceImpulseSpeed, Intensity);
	UJUEDevelopmentStatics::ReportDebugMessage(FString::Printf(TEXT("Speed end = %f"), ImpulseStrength));
	if (ImpulseStrength <= 0)return;
	
	FVector LaunchVelocity = Direction * ImpulseStrength;
	LaunchVelocity.Z += CollisionData->UpwardImpulseStrength;
	
	
	//torgue
	FVector Torque(
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueX, CollisionData->RandomTorqueX),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueY, CollisionData->RandomTorqueY),
			CollisionData->RandomSignedRange(CollisionData->MinimumRandomTorqueZ, CollisionData->RandomTorqueZ)
		);

	float TorqueImpulse = CollisionData->Torque * Intensity;
	//to replace torgue with the one inside data asset
	BeginRagdoll(LaunchVelocity, TorqueImpulse * Torque);
}

