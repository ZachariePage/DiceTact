// Fill out your copyright notice in the Description page of Project Settings.


#include "DTBaseAIController.h"

#include "DTEnemyUnit.h"
#include "DiceTact/Subsystem/DTCombatBridgeSubsystem.h"


// Sets default values
ADTBaseAIController::ADTBaseAIController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

AActor* ADTBaseAIController::GetControlledActor_Implementation()
{
	return GetPawn();
}

// Called when the game starts or when spawned
void ADTBaseAIController::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld() == nullptr)
	{
		return;
	}
	
	UDTCombatBridgeSubsystem* CombatSub = GetWorld()->GetSubsystem<UDTCombatBridgeSubsystem>();
	if (IsValid(CombatSub) == false)
	{
		return;
	}
	CombatSub->RegisterTurnReceiverToCombat(this, ECombatUnitType::Enemy);

	APawn* ControlledActor = GetPawn();

	if (ADTEnemyUnit* EnemyUnit = Cast<ADTEnemyUnit>(ControlledActor))
	{
		CombatSub->RegisterUnitToCombat(EnemyUnit, ECombatUnitType::Enemy);
	}
}

