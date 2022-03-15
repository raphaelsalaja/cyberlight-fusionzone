// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMSystemEditorModule.h"
#include "Graph/Pins/SGraphPin_ActorSoftReferencePin.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/SMGraphFactory.h"
#include "Commands/SMEditorCommands.h"
#include "Compilers/SMKismetCompiler.h"
#include "Blueprints/SMBlueprintAssetTypeActions.h"
#include "Blueprints/SMBlueprintFactory.h"
#include "Configuration/SMEditorStyle.h"
#include "Configuration/SMProjectEditorSettings.h"
#include "Customization/SMEditorCustomization.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Utilities/SMVersionUtils.h"
#include "SMSystemEditorLog.h"

#include "ISMSystemModule.h"
#include "Blueprints/SMBlueprint.h"

#include "AssetRegistryModule.h"
#include "EdGraphUtilities.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "KismetCompilerModule.h"
#include "MessageLogInitializationOptions.h"
#include "MessageLogModule.h"
#include "ISettingsModule.h"
#include "PropertyEditorModule.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Interfaces/IPluginManager.h"


#define LOCTEXT_NAMESPACE "SMSystemEditorModule"

DEFINE_LOG_CATEGORY(LogLogicDriverEditor);

void FSMSystemEditorModule::StartupModule()
{
	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);

	FSMEditorStyle::Initialize();
	FSMEditorCommands::Register();
	RegisterSettings();

	const USMEditorSettings* EditorSettings = FSMBlueprintEditorUtils::GetEditorSettings();
	
	// Register blueprint compiler -- primarily seems to be used when creating a new BP.
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::LoadModuleChecked<IKismetCompilerInterface>(KISMET_COMPILER_MODULENAME);
	KismetCompilerModule.GetCompilers().Add(&SMBlueprintCompiler);
	KismetCompilerModule.GetCompilers().Add(&SMNodeBlueprintCompiler);

	// This is needed for actually pressing compile on the BP.
	FKismetCompilerContext::RegisterCompilerForBP(USMBlueprint::StaticClass(), &FSMSystemEditorModule::GetCompilerForStateMachineBP);
	FKismetCompilerContext::RegisterCompilerForBP(USMNodeBlueprint::StaticClass(), &FSMSystemEditorModule::GetCompilerForNodeBP);
	
	// Register graph related factories.
	SMGraphPanelNodeFactory = MakeShareable(new FSMGraphPanelNodeFactory());
	FEdGraphUtilities::RegisterVisualNodeFactory(SMGraphPanelNodeFactory);

	SMGraphPinNodeFactory = MakeShareable(new FSMGraphPinFactory());
	FEdGraphUtilities::RegisterVisualPinFactory(SMGraphPinNodeFactory);

	if (EditorSettings->OverrideActorSoftReferencePins != ESMPinOverride::None)
	{
		SMGraphPinSoftActorReferenceFactory = MakeShareable(new FSMActorSoftReferencePinFactory());
		FEdGraphUtilities::RegisterVisualPinFactory(SMGraphPinSoftActorReferenceFactory);
	}
	
	RefreshAllNodesDelegateHandle = FSMBlueprintEditorUtils::OnRefreshAllNodesEvent.AddStatic(&FSMBlueprintEditorUtils::HandleRefreshAllNodes);
	
	// Register details customization.
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout(USMGraphNode_StateNode::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FSMNodeCustomization::MakeInstance));
	PropertyModule.RegisterCustomClassLayout(USMGraphNode_StateMachineStateNode::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FSMStateMachineReferenceCustomization::MakeInstance));
	PropertyModule.RegisterCustomClassLayout(USMGraphNode_TransitionEdge::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FSMTransitionEdgeCustomization::MakeInstance));
	PropertyModule.RegisterCustomClassLayout(USMGraphNode_ConduitNode::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FSMNodeCustomization::MakeInstance));
	PropertyModule.RegisterCustomClassLayout(USMGraphNode_AnyStateNode::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FSMNodeCustomization::MakeInstance));

	// Covers all node instances.
	PropertyModule.RegisterCustomClassLayout(USMNodeInstance::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FSMNodeInstanceCustomization::MakeInstance));

	// State stack.. forwards off requests to FSMNodeInstanceCustomization.
	FSMStateStackCustomization::RegisterNewStruct(FStateStackContainer::StaticStruct()->GetFName());
	
	// Register asset categories.
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	// Create a custom menu category.
	const EAssetTypeCategories::Type AssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(
		FName(TEXT("StateMachine")), LOCTEXT("StateMachineAssetCategory", "State Machines"));
	// Register state machines under our own category menu and under the Blueprint menu.
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FSMBlueprintAssetTypeActions(EAssetTypeCategories::Blueprint | AssetCategoryBit)));

	// Default configuration for node classes.
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FSMNodeInstanceAssetTypeActions(AssetCategoryBit)));
	
	// Hide base instance from showing up in misc menu.
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FSMInstanceAssetTypeActions(EAssetTypeCategories::None)));
	
	/* // We need to call FMessageLog for registering this log module to have any effect.
	FMessageLogModule& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
	FMessageLogInitializationOptions InitOptions;
	InitOptions.bShowFilters = true;
	InitOptions.bShowPages = true;
	MessageLogModule.RegisterLogListing("LogLogicDriver", LOCTEXT("LogicDriverLog", "Logic Driver Log"), InitOptions);
	*/
	
	BeginPieHandle = FEditorDelegates::BeginPIE.AddRaw(this, &FSMSystemEditorModule::BeginPIE);
	EndPieHandle = FEditorDelegates::EndPIE.AddRaw(this, &FSMSystemEditorModule::EndPie);

	IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
	AssetAddedHandle = AssetRegistry.OnAssetAdded().AddRaw(this, &FSMSystemEditorModule::OnAssetAdded);
	
	const USMProjectEditorSettings* ProjectEditorSettings = FSMBlueprintEditorUtils::GetProjectEditorSettings();
	if (ProjectEditorSettings->bUpdateAssetsOnStartup)
	{
		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
		FilesLoadedHandle = AssetRegistryModule.Get().OnFilesLoaded().AddStatic(&FSMVersionUtils::UpdateBlueprintsToNewVersion);
	}

	CheckForNewInstalledVersion();
}

void FSMSystemEditorModule::ShutdownModule()
{
	FKismetEditorUtilities::UnregisterAutoBlueprintNodeCreation(this);

	// Unregister all the asset types that we registered.
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index)
		{
			AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
		}
	}

	FEdGraphUtilities::UnregisterVisualNodeFactory(SMGraphPanelNodeFactory);
	FEdGraphUtilities::UnregisterVisualPinFactory(SMGraphPinNodeFactory);

	if (SMGraphPinSoftActorReferenceFactory.IsValid())
	{
		FEdGraphUtilities::UnregisterVisualPinFactory(SMGraphPinSoftActorReferenceFactory);
	}
	
	FSMBlueprintEditorUtils::OnRefreshAllNodesEvent.Remove(RefreshAllNodesDelegateHandle);
	
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.UnregisterCustomClassLayout(USMGraphNode_StateNode::StaticClass()->GetFName());
	PropertyModule.UnregisterCustomClassLayout(USMGraphNode_StateMachineStateNode::StaticClass()->GetFName());
	PropertyModule.UnregisterCustomClassLayout(USMGraphNode_TransitionEdge::StaticClass()->GetFName());
	PropertyModule.UnregisterCustomClassLayout(USMGraphNode_ConduitNode::StaticClass()->GetFName());
	PropertyModule.UnregisterCustomClassLayout(USMGraphNode_AnyStateNode::StaticClass()->GetFName());
	PropertyModule.UnregisterCustomClassLayout(USMNodeInstance::StaticClass()->GetFName());
	
	FSMStateStackCustomization::UnregisterAllStructs();
	FSMGraphPropertyCustomization::UnregisterAllStructs();
	
	IKismetCompilerInterface& KismetCompilerModule = FModuleManager::GetModuleChecked<IKismetCompilerInterface>("KismetCompiler");
	KismetCompilerModule.GetCompilers().Remove(&SMBlueprintCompiler);
	KismetCompilerModule.GetCompilers().Remove(&SMNodeBlueprintCompiler);
	
	/*
	FMessageLogModule& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
	MessageLogModule.UnregisterLogListing("LogLogicDriver");
	*/
	
	FSMEditorCommands::Unregister();
	FSMEditorStyle::Shutdown();
	UnregisterSettings();

	MenuExtensibilityManager.Reset();
	ToolBarExtensibilityManager.Reset();

	FEditorDelegates::BeginPIE.Remove(BeginPieHandle);
	FEditorDelegates::EndPIE.Remove(EndPieHandle);

	if (AssetAddedHandle.IsValid() && FModuleManager::Get().IsModuleLoaded("AssetRegistry"))
	{
		IAssetRegistry& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry").Get();
		AssetRegistry.OnAssetAdded().Remove(AssetAddedHandle);
	}
	
	if (FilesLoadedHandle.IsValid() && FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
		AssetRegistryModule.Get().OnFilesLoaded().Remove(FilesLoadedHandle);
	}
}

void FSMSystemEditorModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}

TSharedPtr<FKismetCompilerContext> FSMSystemEditorModule::GetCompilerForStateMachineBP(UBlueprint* BP,
	FCompilerResultsLog& InMessageLog, const FKismetCompilerOptions& InCompileOptions)
{
	return TSharedPtr<FKismetCompilerContext>(new FSMKismetCompilerContext(CastChecked<USMBlueprint>(BP), InMessageLog, InCompileOptions));
}

TSharedPtr<FKismetCompilerContext> FSMSystemEditorModule::GetCompilerForNodeBP(UBlueprint* BP, FCompilerResultsLog& InMessageLog, const FKismetCompilerOptions& InCompileOptions)
{
	return TSharedPtr<FKismetCompilerContext>(new FSMNodeKismetCompilerContext(CastChecked<USMNodeBlueprint>(BP), InMessageLog, InCompileOptions));
}

void FSMSystemEditorModule::RegisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Editor", "Plugins", "StateMachineEditor",
			LOCTEXT("SMEditorSettingsName", "Logic Driver Editor"),
			LOCTEXT("SMEditorSettingsDescription", "Configure the state machine editor."),
			GetMutableDefault<USMEditorSettings>());

		SettingsModule->RegisterSettings("Project", "Plugins", "StateMachineEditor",
			LOCTEXT("SMProjectEditorSettingsName", "Logic Driver"),
			LOCTEXT("SMProjectEditorSettingsDescription", "Configure the state machine editor."),
			GetMutableDefault<USMProjectEditorSettings>());
	}
}

void FSMSystemEditorModule::UnregisterSettings()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Editor", "ContentEditors", "StateMachineEditor");
		SettingsModule->UnregisterSettings("Project", "Editor", "StateMachineEditor");
	}
}

void FSMSystemEditorModule::OnAssetAdded(const FAssetData& InAssetData)
{
	// This is a very slow task! Only check if the asset is already loaded!
	if (InAssetData.IsValid() && !InAssetData.IsRedirector() && InAssetData.IsAssetLoaded())
	{
		if(InAssetData.AssetClass == USMBlueprint::StaticClass()->GetFName())
		{
			/*
			* Newly created blueprints need their SM graphs initially set up.
			* Creating blueprints from content menus, blueprint menus, or child menus
			* all trigger OnAssetAdded, but don't go through the same factory routines.
			*/
			
			USMBlueprint* Blueprint = CastChecked<USMBlueprint>(InAssetData.GetAsset());

			if(Blueprint->bIsNewlyCreated)
			{
				USMBlueprintFactory::CreateGraphsForBlueprintIfMissing(Blueprint);
				// Prevents REINST class ensures in 4.27+ with child blueprints.
				FKismetEditorUtilities::CompileBlueprint(Blueprint);
			}
		}
		else if (InAssetData.AssetClass == USMNodeBlueprint::StaticClass()->GetFName())
		{
			USMNodeBlueprint* NodeBlueprint = CastChecked<USMNodeBlueprint>(InAssetData.GetAsset());
			if(NodeBlueprint->bIsNewlyCreated)
			{
				USMNodeBlueprintFactory::SetupNewBlueprint(NodeBlueprint);
			}
		}
	}
}

void FSMSystemEditorModule::BeginPIE(bool bValue)
{
	bPlayingInEditor = true;
}

void FSMSystemEditorModule::EndPie(bool bValue)
{
	bPlayingInEditor = false;
}

void FSMSystemEditorModule::CheckForNewInstalledVersion()
{
	const FString PluginName = PLUGIN_NAME;
	IPluginManager& PluginManager = IPluginManager::Get();

	const TSharedPtr<IPlugin> Plugin = PluginManager.FindPlugin(PluginName);
	if (Plugin->IsEnabled())
	{
		const FPluginDescriptor& Descriptor = Plugin->GetDescriptor();

		USMProjectEditorSettings* ProjectEditorSettings = FSMBlueprintEditorUtils::GetMutableProjectEditorSettings();
		if (ProjectEditorSettings->InstalledVersion != Descriptor.VersionName)
		{
			const bool bIsUpdate = ProjectEditorSettings->InstalledVersion.Len() > 0;

			const FString OldVersion = ProjectEditorSettings->InstalledVersion;
			ProjectEditorSettings->InstalledVersion = Descriptor.VersionName;
			ProjectEditorSettings->SaveConfig();

			if (!bIsUpdate)
			{
				return;
			}

			FSMVersionUtils::UpdateProjectToNewVersion(OldVersion);

			if (ProjectEditorSettings->bDisplayUpdateNotification)
			{
				DisplayUpdateNotification(Descriptor, bIsUpdate);
			}
		}
	}
}

void FSMSystemEditorModule::DisplayUpdateNotification(const FPluginDescriptor& Descriptor, bool bIsUpdate)
{
	TArray<FString> PreviousInstalledPlugins;
	GConfig->GetArray(TEXT("PluginBrowser"), TEXT("InstalledPlugins"), PreviousInstalledPlugins, GEditorPerProjectIni);

	if (PreviousInstalledPlugins.Contains(PLUGIN_NAME))
	{
		// We only want to display the popup if the plugin was previously installed. Not always accurate so we check if there was a previous version.
		
		const FString DisplayString = !bIsUpdate ? FString::Printf(TEXT("Logic Driver Pro version %s installed"), *Descriptor.VersionName) :
												FString::Printf(TEXT("Logic Driver Pro updated to version %s"), *Descriptor.VersionName);
		FNotificationInfo Info(FText::FromString(DisplayString));
		Info.bFireAndForget = false;
		Info.bUseLargeFont = true;
		Info.bUseThrobber = false;
		Info.FadeOutDuration = 0.25f;
		Info.ButtonDetails.Add(FNotificationButtonInfo(LOCTEXT("LogicDriverUpdateViewPatchNotes", "View Patch Notes..."), LOCTEXT("LogicDriverUpdateViewPatchTT", "Open the webbrowser to view patch notes"), FSimpleDelegate::CreateRaw(this, &FSMSystemEditorModule::OnViewNewPatchNotesClicked)));
		Info.ButtonDetails.Add(FNotificationButtonInfo(LOCTEXT("LogicDriverUpdatePopupDismiss", "Dismiss"), LOCTEXT("LogicDriverUpdatePopupDismissTT", "Dismiss this notification"), FSimpleDelegate::CreateRaw(this, &FSMSystemEditorModule::OnDismissUpdateNotificationClicked)));

		NewVersionNotification = FSlateNotificationManager::Get().AddNotification(Info);
		NewVersionNotification.Pin()->SetCompletionState(SNotificationItem::CS_Pending);
	}
}

void FSMSystemEditorModule::OnViewNewPatchNotesClicked()
{
	FString Version = FSMBlueprintEditorUtils::GetProjectEditorSettings()->InstalledVersion;

	// Strip '.' out of version.
	TArray<FString> VersionArray;
	Version.ParseIntoArray(VersionArray, TEXT("."));
	Version = FString::Join(VersionArray, TEXT(""));
	
	const FString Url = FString::Printf(TEXT("https://logicdriver.com/docs/pages/prochangelog/#version-%s"), *Version);
	FPlatformProcess::LaunchURL(*Url, nullptr, nullptr);
	NewVersionNotification.Pin()->ExpireAndFadeout();
}

void FSMSystemEditorModule::OnDismissUpdateNotificationClicked()
{
	NewVersionNotification.Pin()->ExpireAndFadeout();
}

#undef LOCTEXT_NAMESPACE

