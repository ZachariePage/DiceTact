// © Justin Renaud-Gélinas, 2026


#include "EditorNCVSubsystem.h"

#include "EditorUtilityWidgetBlueprint.h"
#include "NCVEditorSettings.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Interfaces/IMainFrameModule.h"
#include "Widgets/EditorNCVTool.h"

void UEditorNCVSubsystem::StartQuickValidation()
{
	UE_LOG(LogTemp, Display, TEXT("NCV Module: Started Validation"));
	FString TargetDir = NCVEditorSettings->GetTargetValidationDirectory().Path;
	
	//UE_LOG(LogTemp, Display, TEXT("Project content converted %s"), *FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()));
	

	{
		//UE_LOG(LogTemp, Display, TEXT("TargetDir %s"), *TargetDir);
		FString WithoutGame = TargetDir;
		WithoutGame.RemoveFromStart("/Game/");
		
		FString TestedPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + WithoutGame;
		//UE_LOG(LogTemp, Display, TEXT("TestedPath: %s"), *TestedPath);
		
		if (TargetDir.IsEmpty() || FPaths::DirectoryExists(TestedPath) == false)
		{
			UE_LOG(LogLoad, Display, TEXT("NCV Module: Failed Validation: Invalid Directory!"));
			return;
		}
	}
	

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	TArray<FAssetData> AssetsData;
	//AssetRegistry.GetAssetsByClass(FTopLevelAssetPath(UTexture2D::StaticClass()->GetClassPathName()), AssetsData);
	AssetRegistry.GetAssetsByPath(FName(TargetDir), AssetsData, NCVEditorSettings->ShouldCheckSubDirectories());

	for (const auto& AssetData : AssetsData)
	{
		UE_LOG(LogTemp, Display, TEXT("Performing validation on asset %s, (Class %s)"), *AssetData.AssetName.ToString(), *AssetData.GetClass()->GetName());
		
		if (const FNamingConvention* FoundNamingConvention = NCVEditorSettings->FindNamingConvention(AssetData.GetClass()))
		{
			if (FoundNamingConvention->bAllowValidation == false) continue;
			
			PerformNamingValidationOnAsset(AssetData, *FoundNamingConvention);
		}
	}
}

void UEditorNCVSubsystem::PerformNamingValidationOnAsset(const FAssetData& AssetData,
	const FNamingConvention& FoundNamingConvention) const
{

	FString AssetName = AssetData.AssetName.ToString();
	UClass* AssetClass = AssetData.GetClass(EResolveClass::No);
	FString AssetClassName = AssetClass->GetName();
	

	FMessageLog MessageLog = FMessageLog("Asset Tools");
	
	//Perform validation on the prefix if there are specified ones to check
	if (FoundNamingConvention.AllowedPrefixes.Num() > 0)
 	{
		bool bPrefixValid = false;

		//Save all the prefixes in a Formated string if none matches (Validation fails on Prefixes)
		FString ErrorPrefixesMessage;
		
		for (int i = 0; i < FoundNamingConvention.AllowedPrefixes.Num(); ++i)
		{
			//While checking for the prefix, prepare the message for the error if none matches
			FString Prefix = FoundNamingConvention.AllowedPrefixes[i];
			if (i == FoundNamingConvention.AllowedPrefixes.Num() - 2)
			{
				ErrorPrefixesMessage += "(" + Prefix + ")" + " or ";
			}
			else if (i == FoundNamingConvention.AllowedPrefixes.Num() - 1)
			{
				ErrorPrefixesMessage += "(" + Prefix + ")" + ".";
			}
			else
			{
				ErrorPrefixesMessage += "(" + Prefix + ")" + ", ";
			}
			
			if (AssetName.StartsWith(Prefix, ESearchCase::CaseSensitive))
			{
				bPrefixValid = true;
				break;
			}
		}

		if (bPrefixValid)
		{
			if (NCVEditorSettings->ShouldLogMatchingConventions())
			{
				MessageLog.Message(EMessageSeverity::Type::Info, FText::AsCultureInvariant(AssetName + " has valid prefix"));
			}
		}
		else
		{
			//Use the saved error messages earlier:
			FString ErrorMessage = "(" + AssetClassName + ") asset " + AssetName + " has an INCORRECT prefix!";
			ErrorMessage += "\nUse the correct one out of these prefixes: " + ErrorPrefixesMessage;
			ErrorMessage += "\nLocated at: " + AssetData.GetObjectPathString();
			
			MessageLog.Error(FText::AsCultureInvariant(ErrorMessage));
			MessageLog.Open();
		}
 	}

	//... And now on Suffixes
	int NmbSuffixes = FoundNamingConvention.AllowedSuffixes.Num();
	if (NmbSuffixes > 0)
	{
		bool bSuffixValid = false;
		//Save all the suffixes in a Formated string if none matches (Validation fails on Prefixes)
		FString ErrorSuffixesMessage;
		
		for (int j = 0; j < NmbSuffixes; ++j)
		{
			//While checking for the prefix, prepare the message for the error if none matches
			FString Suffix = FoundNamingConvention.AllowedSuffixes[j];
			
			if (j == NmbSuffixes - 2)
			{
				ErrorSuffixesMessage += "(" + Suffix + ")" + " or ";
			}
			else if (j == NmbSuffixes - 1)
			{
				ErrorSuffixesMessage += "(" + Suffix + ")" + ".";
			}
			else
			{
				ErrorSuffixesMessage += "(" + Suffix + ")" + ", ";
			}
			
			if (AssetName.EndsWith(Suffix, ESearchCase::CaseSensitive) || Suffix.IsEmpty())
			{
				bSuffixValid = true;
				break;
			}
		}

		if (!bSuffixValid)
		{
			//Use the saved error messages earlier:
			FString ErrorMessage = "(" + AssetClassName + ") asset " + AssetName + " has an INCORRECT suffix!";
			ErrorMessage += "\nUse the correct one out of these suffixes: " + ErrorSuffixesMessage;
			ErrorMessage += "\nLocated at: " + AssetData.PackagePath.ToString();
			
			MessageLog.Error(FText::AsCultureInvariant(ErrorMessage));
			MessageLog.Open();
		}
		else if (NCVEditorSettings->ShouldLogMatchingConventions())
		{
			MessageLog.Message(EMessageSeverity::Type::Info, FText::AsCultureInvariant(AssetName + " has valid suffix"));
		}
	}
}

void UEditorNCVSubsystem::OnEditorInitialized(TSharedPtr<SWindow> InRootWindow, 
	bool bIsRunningStartupDialog)
{
	OpenAndPerformAutoValidation();
}

void UEditorNCVSubsystem::OpenAndPerformAutoValidation()
{
	if (NCVEditorSettings && NCVEditorSettings->ShouldPerformValidationOnLoad())
	{
		UEditorUtilityWidget* EUW = OpenNCVWidgetTool();

		if (UEditorNCVTool* NCVTool = Cast<UEditorNCVTool>(EUW))
		{
			NCVTool->StartValidation();	
		}
	}
}

UEditorUtilityWidget* UEditorNCVSubsystem::OpenNCVWidgetTool()
{
	const UNCVEditorSettings* NCVSettings = GetDefault<UNCVEditorSettings>();
	UEditorUtilityWidgetBlueprint* NCVToolWidget = NCVSettings->GetNCVWidgetTool();

	if (IsValid(NCVToolWidget))
	{
		return SpawnAndRegisterTab(NCVToolWidget);
	}

	//The asset was not specified in the Settings.
	//Trying to find the NCVTool EUW asset in the browser while Warning the user to specify one.
	FMessageLog NewMessageLog = FMessageLog("NCV Plugin");
	
	NewMessageLog.Error(FText::AsCultureInvariant("NCV Plugin: Editor Utility Widget Blueprint tool is not specified!\nYou can specify which one to use in the Project Settings/Plugins/Naming Convention Validator Settings."));
	NewMessageLog.Open(EMessageSeverity::Type::Error);

	return nullptr;
}

void UEditorNCVSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	IMainFrameModule& MainFrameModule = IMainFrameModule::Get();
	if (MainFrameModule.IsWindowInitialized())
	{
		OpenAndPerformAutoValidation();
	}
	else
	{
		MainFrameModule.OnMainFrameCreationFinished().AddUObject(this, &UEditorNCVSubsystem::OnEditorInitialized);
	}
	
}
