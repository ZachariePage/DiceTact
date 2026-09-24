// © Justin Renaud-Gélinas, 2026


#include "NamingConventionEntryWidget.h"

#include "Subsystems/EditorAssetSubsystem.h"

void UNamingConventionEntryWidget::RemoveEntry()
{
	RemoveFromParent();
}

void UNamingConventionEntryWidget::InitializeEntry(const FAssetData& AssetData,
	const FNamingConvention& NamingConvention, const FNCValidationResult& ValidationResult)
{
	EntryAssetData = AssetData;
	EntryNamingConvention = &NamingConvention;
	EntryValidationResult = ValidationResult;
	
	OnEntryInitialized(GetEntryAssetData(), GetEntryNamingConvention(), GetEntryValidationResult());
}

const FAssetData& UNamingConventionEntryWidget::GetEntryAssetData() const
{
	return EntryAssetData;
}

const FNamingConvention& UNamingConventionEntryWidget::GetEntryNamingConvention() const
{
	return *EntryNamingConvention;
}

const FNCValidationResult& UNamingConventionEntryWidget::GetEntryValidationResult() const
{
	return EntryValidationResult;
}

void UNamingConventionEntryWidget::BrowseToAsset()
{
	if (GEditor)
	{
		GEditor->SyncBrowserToObject(GetEntryAssetData());
	}
}

void UNamingConventionEntryWidget::FixAssetSuffix(const FString& TargetConvention, FString& FromName)
{
	int32 FoundPos = 0;//AssetName.Find("_", ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	FromName.FindLastChar('_', FoundPos);

	//There is no "_"
	if (FoundPos == INDEX_NONE)
	{
			
	}
	//If the found position is in the right part of the string
	else if (FoundPos > FromName.Len() / 2)
	{
		// Remove the last part of the string.
		// No shrinking since we are going to fit in our suffix after.
		FromName.RemoveAt(FoundPos, 999, EAllowShrinking::No);
	}		
	FromName += TargetConvention;
}

void UNamingConventionEntryWidget::FixAssetPrefix(const FString& TargetConvention, FString& FromName)
{
	int32 MaxPrefixLength = 5;
		
	int32 FoundPos = 0;
	FromName.FindChar('_', FoundPos);


	//If the found position is in the right part of the string
	if (FoundPos == INDEX_NONE)
	{
	}
	else if (FoundPos < MaxPrefixLength)
	{
		// Remove the first part of the string.
		// No shrinking since we are going to fit in our prefix after.
		FromName.RemoveAt(0, FoundPos + 1, EAllowShrinking::No);
	}

	FromName = TargetConvention + FromName;
}

void UNamingConventionEntryWidget::RenameAsset(const FString& NewAssetName)
{
	RenameAssetInternal(NewAssetName);
	EntryValidationResult.PrefixResult = EValidationResult::Success;
	EntryValidationResult.SuffixResult = EValidationResult::Success;
	OnEntryUpdated();
}

void UNamingConventionEntryWidget::TryMatchAssetToConvention(const FString& TargetConvention, bool bSuffix)
{

	FString AssetName = EntryAssetData.AssetName.ToString();
	
	FString FixedName = AssetName;
	if (bSuffix)
	{
		FixAssetSuffix(TargetConvention, FixedName);
		EntryValidationResult.SuffixResult = EValidationResult::Success;
	}
	else
	{
		FixAssetPrefix(TargetConvention, FixedName);
		EntryValidationResult.PrefixResult = EValidationResult::Success;
	}

	/*
	 * My debugs
	UE_LOG(LogTemp, Warning, TEXT("%s"), *EntryAssetData.PackagePath.ToString());
	UE_LOG(LogTemp, Warning, TEXT("%s"), *EntryAssetData.AssetName.ToString());
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FixedName);
	*/
	
	RenameAssetInternal(FixedName);
	OnEntryUpdated();
}

void UNamingConventionEntryWidget::RenameAssetInternal(const FString& NewName)
{
	FString CurrentAssetName = EntryAssetData.AssetName.ToString();
	
	FString NewAssetName = EntryAssetData.PackagePath.ToString() + "/" + NewName;
	
	UEditorAssetSubsystem* EditorAssetSubsystem = GEditor->GetEditorSubsystem<UEditorAssetSubsystem>();
	EditorAssetSubsystem->RenameAsset(EntryAssetData.PackagePath.ToString() + "/" + CurrentAssetName,
		NewAssetName);

	EntryAssetData = EditorAssetSubsystem->FindAssetData(NewAssetName);
}
