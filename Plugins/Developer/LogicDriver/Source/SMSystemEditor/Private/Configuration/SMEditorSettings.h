// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "SMEditorSettings.generated.h"

UENUM()
enum class ESMPinOverride : uint8
{
	/** Override is disabled for all assets. Restart required. */
	None,
	/** Override is only for Logic Driver assets. */
	LogicDriverOnly,
	/** Override is for all blueprint types. */
	AllBlueprints
};

UCLASS(config = EditorPerProjectUserSettings)
class SMSYSTEMEDITOR_API USMEditorSettings : public UObject
{
	GENERATED_BODY()

public:
	USMEditorSettings();

	UPROPERTY(config, EditAnywhere, Category = "States")
	FLinearColor StateDefaultColor;

	/** When a state has internal logic. */
	UPROPERTY(config, EditAnywhere, Category = "States")
	FLinearColor StateWithLogicColor;

	/** When a node is an end state. */
	UPROPERTY(config, EditAnywhere, Category = "States")
	FLinearColor EndStateColor;

	UPROPERTY(config, EditAnywhere, Category = "States")
	FLinearColor StateMachineDefaultColor;

	UPROPERTY(config, EditAnywhere, Category = "States")
	FLinearColor StateMachineParentDefaultColor;
	
	/** When a state machine has states. */
	UPROPERTY(config, EditAnywhere, Category = "States")
	FLinearColor StateMachineWithLogicColor;

	UPROPERTY(config, EditAnywhere, Category = "States")
	FLinearColor AnyStateDefaultColor;
	
	/** The buffer size which accepts pins to create transitions. Open editors will need to be refreshed. */
	UPROPERTY(config, EditAnywhere, Category = "States", meta = (ClampMin = "4.0", ClampMax="15.0"))
	float StateConnectionSize;
	
	/** The padding around the main content box for state machines. */
	UPROPERTY(config, EditAnywhere, Category = "States")
	FMargin StateMachineContentPadding;
	
	/** The padding around the main content box. */
	UPROPERTY(config, EditAnywhere, Category = "States")
	FMargin StateContentPadding;

	/** Displays the class name above state stack classes. */
	UPROPERTY(config, EditAnywhere, Category = "States")
	bool bDisplayStateStackClassNames;
	
	/** Prevent nodes from displaying overlay widgets indicating a special status, such as for intermediate graphs or waiting for an end state. */
	UPROPERTY(config, EditAnywhere, Category = "States")
	bool bDisableVisualCues;
	
	/** When a transition evaluator has no input. */
	UPROPERTY(config, EditAnywhere, Category = "Transitions")
	FLinearColor TransitionEmptyColor;

	/** When the transition evaluator has input. */
	UPROPERTY(config, EditAnywhere, Category = "Transitions")
	FLinearColor TransitionValidColor;

	/** When a transition is hovered. */
	UPROPERTY(config, EditAnywhere, Category = "Transitions")
	FLinearColor TransitionHoverColor;

	/** Allow transitions with On Transition Entered logic to have a special color. */
	UPROPERTY(config, EditAnywhere, Category = "Transitions")
	bool bEnableTransitionWithEntryLogicColor;
	
	/** When a transition has On Transition Entered logic. */
	UPROPERTY(config, EditAnywhere, Category = "Transitions", meta = (EditCondition = "bEnableTransitionWithEntryLogicColor"))
	FLinearColor TransitionWithEntryLogicColor;
	
	/** When a state is active during debug. */
	UPROPERTY(config, EditAnywhere, Category = "Debug")
	FLinearColor ActiveStateColor;

	/** When a transition is active during debug. */
	UPROPERTY(config, EditAnywhere, Category = "Debug")
	FLinearColor ActiveTransitionColor;
	
	/** Time in seconds before the last state starts to fade. */
	UPROPERTY(config, EditAnywhere, Category = "Debug", meta = (ClampMin = "0.0"))
	float TimeToDisplayLastActiveState;

	/** The fade time in seconds to hide the last active state. */
	UPROPERTY(config, EditAnywhere, Category = "Debug", meta = (ClampMin = "0.0"))
	float TimeToFadeLastActiveState;

	/** The fade time in seconds to hide the last active transition. */
	UPROPERTY(config, EditAnywhere, Category = "Debug", meta = (ClampMin = "0.0"))
	float TimeToFadeLastActiveTransition;

	/** Transitions that are evaluating will be highlighted in the editor during debug. */
	UPROPERTY(config, EditAnywhere, Category = "Debug")
	bool bDisplayTransitionEvaluation;
	
	/** When a transition is evaluating during debug. */
	UPROPERTY(config, EditAnywhere, Category = "Debug", meta = (EditCondition = "bDisplayTransitionEvaluation"))
	FLinearColor EvaluatingTransitionColor;

	/** Show quick animations such as when a state is placed on a graph. */
	UPROPERTY(config, EditAnywhere, Category = "Visual")
	bool bEnableAnimations;

	/**
	 * Logic Driver can add support to select soft actor references from UEdGraphPins. Unreal by default does not support this.
	 * You can add support only to Logic Driver assets, to all blueprint assets, or disable completely.
	 **/
	UPROPERTY(config, EditAnywhere, Category = "Pins")
	ESMPinOverride OverrideActorSoftReferencePins;
	
	/**
	 * Add all Kismet toolbar extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver.
	 */
	UPROPERTY(config, EditAnywhere, Category = "Plugin Compatibility")
	bool bEnableBlueprintToolbarExtenders;

	/**
	 * Add all Kismet menu extenders to the state machine editor. This allows items from third party plugins to be visible in Logic Driver.
	 */
	UPROPERTY(config, EditAnywhere, Category = "Plugin Compatibility")
	bool bEnableBlueprintMenuExtenders;
};
