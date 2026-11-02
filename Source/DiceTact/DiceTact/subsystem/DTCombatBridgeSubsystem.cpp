// Fill out your copyright notice in the Description page of Project Settings.


#include "DTCombatBridgeSubsystem.h"

#include "DiceTact/Combat/DTCombatGameMode.h"
#include "DiceTact/Combat/DTCombatGameState.h"
#include "DiceTact/Combat/TurnBaseSystem/DTTurnReceiver.h"
#include "JUE/System/JUEDevelopmentStatics.h"

bool UDTCombatBridgeSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	UWorld* World = CastChecked<UWorld>(Outer);

	if (!World)
	{
		return false;
	}

	AWorldSettings* WorldSettings = World->GetWorldSettings();
	if (IsValid(WorldSettings) == false)
	{
		return false;
	}

	TSubclassOf<AGameModeBase> BaseGameMode = WorldSettings->DefaultGameMode;
	if (IsValid(BaseGameMode) == false)
	{
		return false;
	}

	//Do not spawn if the Level is not a combat level
	bool bCombatLevel = BaseGameMode->IsChildOf(ADTCombatGameMode::StaticClass());
		
	return bCombatLevel &&
		Super::ShouldCreateSubsystem(Outer);
}

void UDTCombatBridgeSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	ADTCombatGameMode* GMCombat = Cast<ADTCombatGameMode>(GetWorld()->GetAuthGameMode());

	if (IsValid(GMCombat) == false)
	{
		UJUEDevelopmentStatics::ReportErrorMessage("Could not find Combat Game State!", this);
		return;
	}
	
	TurnBasedSystem = GMCombat->GetTurnManager();
	SetupTurnSystem(TurnBasedSystem);
}

void UDTCombatBridgeSubsystem::RegisterNewFocus(AActor* NewFocus, EFocusActorMethod FocusMethod)
{
	if (FocusedActor == NewFocus)
	{
		return;
	}

	if (FocusMethod == EFocusActorMethod::Attach)
	{
		FocusedActor = NewFocus;
	}
	OnNewActorFocus.Broadcast(FocusedActor, FocusMethod, true);
}

void UDTCombatBridgeSubsystem::UnregisterNewFocus(AActor* FocusRemovedFrom)
{
	if (FocusRemovedFrom != FocusedActor)
	{
		return;
	}

	OnNewActorFocus.Broadcast(FocusedActor, EFocusActorMethod::Attach, false);
	FocusedActor = nullptr;
}

void UDTCombatBridgeSubsystem::AskFocusOnActors(const TArray<AActor*>& InActors)
{
	OnActorsFocused.Broadcast(InActors);
}

bool UDTCombatBridgeSubsystem::IsFocused() const
{
	return IsValid(FocusedActor);
}

AActor* UDTCombatBridgeSubsystem::GetFocusedActor() const
{
	return FocusedActor;
}

void UDTCombatBridgeSubsystem::RegisterTurnReceiverToCombat(TScriptInterface<IDTTurnReceiver> TurnReceiver, ECombatUnitType TurnType)
{
	TurnBasedSystem->AddTurnReceiver(TurnReceiver, TurnType);
}

void UDTCombatBridgeSubsystem::UnregisterTurnReceiverFromCombat(TScriptInterface<IDTTurnReceiver> TurnReceiver,
	ECombatUnitType TurnType)
{
	TurnBasedSystem->RemoveTurnReceiver(TurnReceiver, TurnType);
}

void UDTCombatBridgeSubsystem::RegisterUnitToCombat(ADTTurnBaseUnit* NewUnit, ECombatUnitType TurnType)
{
	TurnBasedSystem->AddUnitToCombat(NewUnit, TurnType);
}

void UDTCombatBridgeSubsystem::UnregisterUnitFromCombat(ADTTurnBaseUnit* NewUnit, ECombatUnitType TurnType)
{
	TurnBasedSystem->RemoveUnitFromCombat(NewUnit, TurnType);
}

void UDTCombatBridgeSubsystem::AddPendingAbility(const FDTPendingAbility& NewPendingAbility)
{
	TurnBasedSystem->AddPendingAbility(NewPendingAbility);
}

const TArray<FDTPendingAbility>& UDTCombatBridgeSubsystem::GetAllPendingAbilities() const
{
	return TurnBasedSystem->GetAllPendingAbilities();
}

void UDTCombatBridgeSubsystem::OnCombatEndedBridged(bool bWon)
{
	OnCombatEnded.Broadcast(bWon);
}

void UDTCombatBridgeSubsystem::OnPhaseChangedBridged(FName NewPhase, bool bEntering)
{
	OnTurnPhaseChanged.Broadcast(NewPhase, bEntering);
}

void UDTCombatBridgeSubsystem::OnAuthorityChangedBridged(AActor* ActorWithAuthority)
{
	OnNewActorFocus.Broadcast(ActorWithAuthority, EFocusActorMethod::Attach, true);
}

void UDTCombatBridgeSubsystem::SetupTurnSystem(UDTTurnBaseComponent* TurnBaseComponent)
{
	TurnBaseComponent->OnCombatEnded.AddUniqueDynamic(this, &UDTCombatBridgeSubsystem::OnCombatEndedBridged);
	//TurnBaseComponent->OnUnitTurnStarted.AddUniqueDynamic(this, &UDTCombatBridgeSubsystem::OnAuthorityChangedBridged);
	TurnBaseComponent->OnTurnPhaseChanged.AddUniqueDynamic(this, &UDTCombatBridgeSubsystem::OnPhaseChangedBridged);
}
