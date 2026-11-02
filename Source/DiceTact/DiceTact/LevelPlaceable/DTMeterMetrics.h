// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DTMeterMetrics.generated.h"
class UTextRenderComponent;
UCLASS()
class DICETACT_API ADTMeterMetrics : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADTMeterMetrics();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	// Length along X, in meters (the direction the lines are counted in)
	UPROPERTY(EditAnywhere, Category="Grid") int32 LengthMeters = 40;
	// Width along Y, in meters (independent of length). Each line spans this.
	UPROPERTY(EditAnywhere, Category="Grid") int32 WidthMeters = 20;
	// Distance between lines, in meters
	UPROPERTY(EditAnywhere, Category="Grid") int32 StepMeters = 1;
	// If true, X runs from 0 to Length. If false, it's centered on the origin (-Length/2 to +Length/2).
	UPROPERTY(EditAnywhere, Category="Grid") bool bStartAtOrigin = false;
	UPROPERTY(EditAnywhere, Category="Grid") float LineThickness = 4.f;
	UPROPERTY(EditAnywhere, Category="Grid") float LabelSize = 40.f;
	UPROPERTY(EditAnywhere, Category="Grid") FColor LabelColor = FColor::Yellow;

private:
	UPROPERTY() UInstancedStaticMeshComponent* Lines;
	UPROPERTY(Transient) TArray<UTextRenderComponent*> Labels;

	void AddLabel(const FString& Text, const FVector& Loc);
};
