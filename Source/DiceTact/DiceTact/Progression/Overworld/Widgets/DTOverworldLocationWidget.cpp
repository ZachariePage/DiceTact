// Fill out your copyright notice in the Description page of Project Settings.


#include "DTOverworldLocationWidget.h"

#include "DiceTact/Progression/Overworld/Locations/DTOverworldLocationData.h"
#include "DiceTact/Progression/Overworld/Locations/DTOverworldLocationDefinition.h"

#if WITH_EDITOR
void UDTOverworldLocationWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	

	if (IsValid(LocationData) == false
		&& IsValid(BaseLocationDefinition)
		&& IsValid(BaseLocationDefinition->LocationDataClass))
	{
		LocationData = NewObject<UDTOverworldLocationData>(this, BaseLocationDefinition->LocationDataClass);
	}
}
#endif


void UDTOverworldLocationWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (IsValid(LocationData))
	{
		LocationData->Init();
	}

	LocationData->OnTravelEnd.AddUniqueDynamic(this,
		&UDTOverworldLocationWidget::Bound_OnPlayerFinishedTravel);
}

bool UDTOverworldLocationWidget::TryTravel()
{
	if (IsSelectableLocation() == false)
	{
		return false;
	}
	
	if (IsValid(LocationData))
	{
		LocationData->TryTravel();
	}
	OnPlayerTravel();
	return true;
}

void UDTOverworldLocationWidget::SetSelectable(bool bNewSelectable)
{
	//Only changes are allowed to avoid firing unecessary events.
	if (bSelectableLocation == bNewSelectable)
	{
		return;
	}

	bSelectableLocation = bNewSelectable;
	OnSelectableChanged();
}

bool UDTOverworldLocationWidget::IsSelectableLocation() const
{
	return bSelectableLocation;
}

UDTOverworldLocationData* UDTOverworldLocationWidget::GetOverworldLocation() const
{
	return LocationData;
}

FName UDTOverworldLocationWidget::GetLocationIdentifier() const
{
	return LocationIdentifier;
}

bool UDTOverworldLocationWidget::HasBeenVisited() const
{
	return bVisited;
}

void UDTOverworldLocationWidget::Bound_OnPlayerFinishedTravel()
{
	OnTravelEnd.Broadcast(this);
	OnTravelFinished();
}

#if WITH_EDITOR
void UDTOverworldLocationWidget::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	
	if (PropertyChangedEvent.Property
		&& PropertyChangedEvent.Property->GetNameCPP() == GET_MEMBER_NAME_CHECKED(UDTOverworldLocationWidget, BaseLocationDefinition)
		&& PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
	{
		if (IsValid(BaseLocationDefinition) && BaseLocationDefinition->LocationDataClass)
		{
			LocationData = NewObject<UDTOverworldLocationData>(this, BaseLocationDefinition->LocationDataClass, NAME_None, RF_Transactional);
		}
		else
		{
			LocationData = nullptr;
		}
	}
}

#endif
