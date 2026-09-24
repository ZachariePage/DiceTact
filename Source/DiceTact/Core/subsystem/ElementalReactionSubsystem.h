// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Dice/Definitions/DTDiceElementDefinition.h"
#include "Core/Element/ElementalEffect.h"
#include "JUE/System/JUEDevelopmentStatics.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ElementalReactionSubsystem.generated.h"

class UElementalEffect;
/**
 * 
 */
USTRUCT()
struct FElementalReactionKey
{
	GENERATED_BODY()
	EDiceElementType A = EDiceElementType::Neutral;
	EDiceElementType B = EDiceElementType::Neutral;

	bool operator==(const FElementalReactionKey& Other) const
	{
		return (A == Other.A && B == Other.B) || (A == Other.B && B == Other.A);
	}
};

FORCEINLINE uint32 GetTypeHash(const FElementalReactionKey& Key)
{
	uint8 Lo = FMath::Min((uint8)Key.A, (uint8)Key.B);
	uint8 Hi = FMath::Max((uint8)Key.A, (uint8)Key.B);
	return HashCombine(::GetTypeHash(Lo), ::GetTypeHash(Hi));
}

USTRUCT(BlueprintType)
struct FElementalReactionRow : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) EDiceElementType ElementA;
	UPROPERTY(EditAnywhere) EDiceElementType ElementB;
	UPROPERTY(EditAnywhere) TObjectPtr<UElementalEffect> Effect;
};

UCLASS()
class DICETACT_API UElementalReactionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere) UDataTable* ReactionTable;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override
	{
		//BuildLookup();
	}

	UFUNCTION(BlueprintCallable, Category="Init")
	void LateInit(UDataTable* newTable)
	{
		UJUEDevelopmentStatics::ReportDebugMessage("init", this);
		ReactionTable = newTable;
		BuildLookup();
	}
	void BuildLookup()
	{
		if (!ReactionTable)
		{
			UJUEDevelopmentStatics::ReportDebugMessage("no table", this);
			return;
		}
			

		TArray<FElementalReactionRow*> Rows;
		ReactionTable->GetAllRows<FElementalReactionRow>(TEXT(""), Rows);

		for (FElementalReactionRow* Row : Rows)
		{
			if (Row && Row->Effect)
			{
				ReactionMap.Add(
					{ Row->ElementA, Row->ElementB },
					Row->Effect
				);
			}
		}
	}

	UFUNCTION(BlueprintCallable, Category="Reaction")
	bool TryReact(
		AActor* Source,
		AActor* Target,
		EDiceElementType A,
		EDiceElementType B,
		FVector Location)
	{
		if (TObjectPtr<UElementalEffect>* Found = ReactionMap.Find({A, B}))
		{
			if (*Found)
			{
				(*Found)->Execute(Source, Target, Location, GetWorld());
				return true;
			}
			else
			{
				UJUEDevelopmentStatics::ReportDebugMessage("not found", this);
			}
		}

		return false;
	}

private:
	TMap<FElementalReactionKey, TObjectPtr<UElementalEffect>> ReactionMap;
};
