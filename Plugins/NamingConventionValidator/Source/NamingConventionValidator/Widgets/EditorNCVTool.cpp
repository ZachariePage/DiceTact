// © Justin Renaud-Gélinas, 2026


#include "EditorNCVTool.h"

#include "AssetToolsModule.h"
#include "AssetViewUtils.h"
#include "NCVResultsSorterWidget.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/DetailsView.h"
#include "NamingConventionValidator/NCVEditorSettings.h"

void UEditorNCVTool::NativeConstruct()
{
	Super::NativeConstruct();

	if (ValidationParametersDetailsView)
	{
		ValidationParametersDetailsView->SetObject(this);
	}

	ValidationParameters.bCheckSubDirectories = NCVEditorSettings->ShouldCheckSubDirectories();
	ValidationParameters.TargetValidationDirectory = NCVEditorSettings->GetTargetValidationDirectory();
	ValidationParameters.bLogMatchingConventions = NCVEditorSettings->ShouldLogMatchingConventions();
	
}

FNCValidationResult UEditorNCVTool::PerformNamingValidationOnAsset(const FAssetData& AssetData,
	const FNamingConvention* NamingConvention) const
{
	FString AssetName = AssetData.AssetName.ToString();
	UClass* AssetClass = AssetData.GetClass(EResolveClass::No);
	FString AssetClassName = AssetClass->GetName();

	FNCValidationResult Result = FNCValidationResult();
	

	FMessageLog MessageLog = FMessageLog("Asset Tools");
	
	//Perform validation on the prefix if there are specified ones to check
	if (NamingConvention->AllowedPrefixes.Num() > 0)
 	{
		Result.PrefixResult = EValidationResult::Error;
		
		for (const auto& Prefix : NamingConvention->AllowedPrefixes)
		{
			if (AssetName.StartsWith(Prefix, ESearchCase::CaseSensitive))
			{
				Result.PrefixResult = EValidationResult::Success;
				break;
			}
		}

		if (Result.PrefixResult == EValidationResult::Success)
		{
			if (NCVEditorSettings->ShouldLogMatchingConventions())
			{
				MessageLog.Message(EMessageSeverity::Type::Info, FText::AsCultureInvariant(AssetName + " has valid prefix"));
			}
		}
 	}

	//... And now on Suffixes
	int NmbSuffixes = NamingConvention->AllowedSuffixes.Num();
	if (NmbSuffixes > 0)
	{

		Result.SuffixResult = EValidationResult::Error;
		
		for (const auto& Suffix : NamingConvention->AllowedSuffixes)
		{			
			if (AssetName.EndsWith(Suffix, ESearchCase::CaseSensitive) || Suffix.IsEmpty())
			{
				Result.SuffixResult = EValidationResult::Success;
				break;
			}
		}

		if (Result.SuffixResult == EValidationResult::Error)
		{
			//Do nothing
		}
		else if (NCVEditorSettings->ShouldLogMatchingConventions())
		{
			MessageLog.Message(EMessageSeverity::Type::Info, FText::AsCultureInvariant(AssetName + " has valid suffix"));
		}
	}

	return Result;
}

void UEditorNCVTool::TryAddIncorrectAssetEntry(const FAssetData& AssetData, const FNamingConvention* NamingConvention,
	const FNCValidationResult& ValidationResult)
{
	if (ValidationResult.PrefixResult == EValidationResult::Error
		|| ValidationResult.SuffixResult == EValidationResult::Error)
	{
		VResultsSorterWidget->AddIncorrectEntry(AssetData, NamingConvention, ValidationResult);
	}
}


void UEditorNCVTool::StartValidation()
{
	UE_LOG(LogTemp, Display, TEXT("NCV Module: Started Validation"));
	FString TargetDir = ValidationParameters.TargetValidationDirectory.Path;
	

	{
		//UE_LOG(LogTemp, Display, TEXT("TargetDir %s"), *TargetDir);
		FString WithoutGame = TargetDir;
		WithoutGame.RemoveFromStart("/Game/");
		
		FString TestedPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + WithoutGame;
		//UE_LOG(LogTemp, Display, TEXT("TestedPath: %s"), *TestedPath);
		
		if (TargetDir.IsEmpty() || FPaths::DirectoryExists(TestedPath) == false)
		{
			UE_LOG(LogLoad, Display, TEXT("NCV Module: Failed Validation: Invalid Directory!"));
			OnDirectoryValidation(EValidationResult::Error);
			return;
		}
	}
	OnDirectoryValidation(EValidationResult::Success);
	
	//Erase all registered data if Validation was Done before
	if (VResultsSorterWidget->IsEmpty() == false)
	{
		VResultsSorterWidget->RemoveEntries();
		AssetsData.Empty();
	}

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();
	
	
	AssetRegistry.GetAssetsByPath(FName(TargetDir), AssetsData, ValidationParameters.bCheckSubDirectories);

	for (const auto& AssetData : AssetsData)
	{
		if (ValidationParameters.bLogMatchingConventions)
		{
			UE_LOG(LogTemp, Display, TEXT("Performing validation on asset %s, (Class %s)"), *AssetData.AssetName.ToString(), *AssetData.GetClass()->GetName());
		}
		
		if (const FNamingConvention* FoundNamingConvention = NCVEditorSettings->FindNamingConvention(AssetData.GetClass()))
		{
			if (FoundNamingConvention->bAllowValidation == false) continue;
			
			FNCValidationResult NCVResult = PerformNamingValidationOnAsset(AssetData, FoundNamingConvention);

			TryAddIncorrectAssetEntry(AssetData, FoundNamingConvention, NCVResult);
			
		}
	}
}

void UEditorNCVTool::FixUpAllRedirectors()
{

	if (AssetsData.IsEmpty())
	{
		return;
	}

	//Taken from AssetFolderContextMenu.cpp, line 155
	
	AssetViewUtils::FLoadAssetsSettings Settings{
		.bFollowRedirectors = false,
		.bAllowCancel = true,
	};
	
	TArray<UObject*> LoadedObjects;
	AssetViewUtils::ELoadAssetsResult Result = AssetViewUtils::LoadAssetsIfNeeded(AssetsData, LoadedObjects, Settings);
	if (Result != AssetViewUtils::ELoadAssetsResult::Cancelled)
	{
		TArray<UObjectRedirector*> Redirectors;
		for (UObject* Object : LoadedObjects)
		{
			if (UObjectRedirector* Redirector = Cast<UObjectRedirector>(Object))
			{
				Redirectors.Add(Redirector);
			}
		}
		
		// Load the asset tools module
		FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
		AssetToolsModule.Get().FixupReferencers(Redirectors, true, ERedirectFixupMode::PromptForDeletingRedirectors);
	}
}
