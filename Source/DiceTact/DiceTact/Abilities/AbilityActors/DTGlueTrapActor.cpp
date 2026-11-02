// Fill out your copyright notice in the Description page of Project Settings.


#include "DTGlueTrapActor.h"

#include "DiceTact/subsystem/DTCombatBridgeSubsystem.h"


// Sets default values
ADTGlueTrapActor::ADTGlueTrapActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	TrapCollider = CreateDefaultSubobject<USphereComponent>("Collider");
	SetRootComponent(TrapCollider);
}

// Called when the game starts or when spawned
void ADTGlueTrapActor::BeginPlay()
{
	Super::BeginPlay();
	
	RemainingTurns = FMath::Max(TrapDuration, 1);
	
	if (!GetWorld())
		return;
	if (UDTCombatBridgeSubsystem* BridgeSubsystem = GetWorld()->GetSubsystem<UDTCombatBridgeSubsystem>())
	{
		BridgeSubsystem->OnTurnPhaseChanged.AddUniqueDynamic(this, &ADTGlueTrapActor::HandleTurnPhaseChanged);
		BridgeSubsystem->OnCombatEnded.AddUniqueDynamic(this, &ADTGlueTrapActor::HandleCombatEnded);
	}
}

void ADTGlueTrapActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (UWorld* World = GetWorld())
		if (UDTCombatBridgeSubsystem* BridgeSubsystem = World->GetSubsystem<UDTCombatBridgeSubsystem>())
		{
			BridgeSubsystem->OnTurnPhaseChanged.RemoveDynamic(this, &ADTGlueTrapActor::HandleTurnPhaseChanged);
			BridgeSubsystem->OnCombatEnded.RemoveDynamic(this, &ADTGlueTrapActor::HandleCombatEnded);
		}
	
	CleanupTrap();
	
	Super::EndPlay(EndPlayReason);
}

void ADTGlueTrapActor::HandleTurnPhaseChanged(FName PhaseName, bool bEntered)
{
	if (bEntered || PhaseName != CountedPhase)
		return;
	if (--RemainingTurns > 0)
		return;
	Destroy();
}

void ADTGlueTrapActor::HandleCombatEnded(bool bHeroesWon)
{
	Destroy();
}

void ADTGlueTrapActor::SetTrapRadius(const float Radius)
{
	TrapRadius = Radius;
	TrapCollider->SetSphereRadius(Radius);
}

void ADTGlueTrapActor::SetTrapDuration(const int Duration)
{
	TrapDuration = Duration;
}

void ADTGlueTrapActor::SetTrapEffect(const TSubclassOf<UGameplayEffect> Effect)
{
	TrapEffect = Effect;
}

