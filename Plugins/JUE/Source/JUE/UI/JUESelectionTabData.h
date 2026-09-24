#pragma once

#include "JUESelectionTabData.generated.h"

USTRUCT(BlueprintType)
struct FJUESelectionTabData
{

	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category="Data", BlueprintReadWrite, meta=(ToolTip= "The text that will be displayed on the tab."))
	FText TabDisplayName = FText();

	UPROPERTY(EditAnywhere, Category="Data", BlueprintReadWrite)
	FName TabValue = FName(NAME_None);
};
