// Fill out your copyright notice in the Description page of Project Settings.


#include "DTMeterMetrics.h"

#include "Components/InstancedStaticMeshComponent.h"
#include "Components/TextRenderComponent.h"


// Sets default values
ADTMeterMetrics::ADTMeterMetrics()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	Lines = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Lines"));
	Lines->SetupAttachment(RootComponent);
	Lines->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cube(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (Cube.Succeeded()) Lines->SetStaticMesh(Cube.Object);
}

// Called when the game starts or when spawned
void ADTMeterMetrics::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADTMeterMetrics::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADTMeterMetrics::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	Lines->ClearInstances();
	for (UTextRenderComponent* L : Labels) if (L) L->DestroyComponent();
	Labels.Empty();

	const int32 Step = FMath::Max(1, StepMeters);
	const int32 StartM = bStartAtOrigin ? 0 : -(LengthMeters / 2);
	const int32 EndM   = bStartAtOrigin ? LengthMeters : (LengthMeters / 2);

	const float HalfWidthCm = WidthMeters * 100.f * 0.5f;
	const float WidthCm = WidthMeters * 100.f;
	const float Z = 2.f;
	const float LabelOffset = 80.f; // distance outside the edges

	for (int32 m = StartM; m <= EndM; m += Step)
	{
		const float X = m * 100.f;

		// One line per step, running across the full width (along Y)
		Lines->AddInstance(FTransform(FRotator::ZeroRotator, FVector(X, 0.f, Z),
			FVector(LineThickness / 100.f, WidthCm / 100.f, 0.02f)));

		// Distance labels on both sides of the square
		const FString Txt = FString::Printf(TEXT("%d"), m);
		AddLabel(Txt, FVector(X, -HalfWidthCm - LabelOffset, Z + 3.f));
		AddLabel(Txt, FVector(X,  HalfWidthCm + LabelOffset, Z + 3.f));
	}
}

void ADTMeterMetrics::AddLabel(const FString& Text, const FVector& Loc)
{
	UTextRenderComponent* T = NewObject<UTextRenderComponent>(this);
	T->SetupAttachment(RootComponent);
	T->RegisterComponent();
	T->SetRelativeLocation(Loc);
	T->SetRelativeRotation(FRotator(90.f, 90.f, 0.f)); // lies flat; tweak if mirrored/upside down
	T->SetWorldSize(LabelSize);
	T->SetTextRenderColor(LabelColor);
	T->SetHorizontalAlignment(EHTA_Center);
	T->SetVerticalAlignment(EVRTA_TextCenter);
	T->SetText(FText::FromString(Text));
	Labels.Add(T);
}

