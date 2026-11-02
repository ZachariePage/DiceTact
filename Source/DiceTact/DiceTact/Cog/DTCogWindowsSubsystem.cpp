// Fill out your copyright notice in the Description page of Project Settings.

#include "DTCogWindowsSubsystem.h"

#include "CogCommon.h"
#include "DTCogWindow_CombatPlayerController.h"
#include "DTCogWindow_SaveSystem.h"

#if ENABLE_COG
#include "CogAll.h"
#include "DTCogWindow_TurnBasedSystem.h"
#include "CogSubsystem.h"
#endif


bool UDTCogWindowsSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (Super::ShouldCreateSubsystem(Outer) == false)
	{ return false; }

#if ENABLE_COG
	return true;
#else
	return false;
#endif
}

void UDTCogWindowsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
#if ENABLE_COG
	CogSubsystem = Collection.InitializeDependency<UCogSubsystem>();
#endif
}

void UDTCogWindowsSubsystem::PostInitialize() 
{
	Super::PostInitialize();

#if ENABLE_COG
	UCogSubsystem* CogSubsystemPtr = Cast<UCogSubsystem>(CogSubsystem.Get());
	if (IsValid(CogSubsystemPtr) == false)
	{
		return;
	}

	// Add all the built-in windows. You can copy and paste this function code to organize the main menu differently.
	Cog::AddAllWindows(*CogSubsystemPtr);
    
	// Add a custom window
	CogSubsystemPtr->AddWindow<FDTCogWindow_TurnBasedSystem>("Turn-Based system");
	CogSubsystemPtr->AddWindow<FDTCogWindow_CombatPlayerController>("Combat Player Controller");
	CogSubsystemPtr->AddWindow<FDTCogWindow_SaveSystem>("Save System");
#endif
}