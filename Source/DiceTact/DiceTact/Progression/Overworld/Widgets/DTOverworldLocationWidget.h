// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "DTOverworldLocationWidget.generated.h"

class UDTOverworldLocationDefinition;
class UDTOverworldLocationData;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocationSelected, UDTOverworldLocationWidget*, LocationWidget);


/**
 * This class represents a visible location in the Overworld Map.
 * It also holds information concerning this location:
 * Its identifier, the Connected Nodes/Locations, and "payload" data.
 */

UCLASS(Blueprintable, PrioritizeCategories="Location Details", DisplayName="Overworld Location Widget")
class DICETACT_API UDTOverworldLocationWidget : public UCommonUserWidget
{
	GENERATED_BODY()

public:

#if WITH_EDITORONLY_DATA
	void NativePreConstruct() override;
#endif
	
	void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
	bool TryTravel();

	/*
	 * I wanted this function to return a delegate but it's too complicated.
	 * Reason:
	 * Calling this function should mean that you are expecting this location be selected (by returning a delegate).
	 * Therefore, we are expecting a feedback to let the player know it can be selected.
	 * Think of it like a transaction:
	 *		if you want to listen to when I get selected,
	 *		expect me to react to this call by giving a feedback to the player
	 *		to show that I can be selected.
	 *
	 *	In the end I just added a bool that you need to change by calling this
	 *	to be able to receive a callback from the delegate.
	 */
	UFUNCTION(BlueprintCallable)
	void SetSelectable(bool bNewSelectable);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsSelectableLocation() const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UDTOverworldLocationData* GetOverworldLocation() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FName GetLocationIdentifier() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasBeenVisited() const;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, meta=(ToolTip="Only called if it was set to be selectable before."))
	FOnLocationSelected OnLocationSelected;

	UPROPERTY(BlueprintAssignable)
	FOnLocationSelected OnTravelEnd;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:

	UFUNCTION(BlueprintImplementableEvent, meta=(ToolTip="Event called when the player travels to this location."))
	void OnPlayerTravel();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSelectableChanged();
	
	UFUNCTION()
	void Bound_OnPlayerFinishedTravel();

	UFUNCTION(BlueprintImplementableEvent)
	void OnTravelFinished();

	/* Member properties here */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Location Details", DisplayName="Location Type")
	TObjectPtr<const UDTOverworldLocationDefinition> BaseLocationDefinition;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Instanced, Category="Location Details")
	TObjectPtr<UDTOverworldLocationData> LocationData = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Location Details", DisplayName="Location Identifier",
		meta=(ToolTip="Unique identifier used to track the progress of the player."))
	FName LocationIdentifier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Location Details", DisplayName="Is Visited")
	bool bVisited = false;

	//The connected nodes to this location.
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, DisplayName="Connected Locations", Category="Location Details")
	TArray<TObjectPtr<UDTOverworldLocationWidget>> ConnectedNodes;

	bool bSelectableLocation = false;
};
