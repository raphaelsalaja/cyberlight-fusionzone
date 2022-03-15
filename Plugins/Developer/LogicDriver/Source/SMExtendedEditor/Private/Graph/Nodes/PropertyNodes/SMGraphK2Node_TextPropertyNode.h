// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_PropertyNode.h"
#include "SMTextGraphProperty.h"
#include "SMGraphK2Node_TextPropertyNode.generated.h"

UCLASS(MinimalAPI)
class USMGraphK2Node_TextPropertyNode : public USMGraphK2Node_PropertyNode_Base
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY()
	FSMTextGraphProperty_Runtime RuntimeTextProperty;
	
	UPROPERTY(EditAnywhere, Category = "Graph Property")
	FSMTextGraphProperty TextProperty;

	void NotifyFormatTextUpdated(const FText& NewText);

	// UObject
	virtual void Serialize(FArchive& Ar) override;
	virtual void PostLoad() override;
	// ~UObject
	
	// UEdGraphNode
	virtual void AllocateDefaultPins() override;
	virtual bool IsConnectionDisallowed(const UEdGraphPin* MyPin, const UEdGraphPin* OtherPin, FString& OutReason) const override;
	// ~UedGraphNode
	
	// USMGraphK2Node_PropertyNode
	virtual void ConfigureRuntimePropertyNode() override;
	virtual FSMGraphProperty_Base_Runtime* GetRuntimePropertyNode() override;
	virtual FSMGraphProperty_Base* GetPropertyNode() override { return &TextProperty; }
	virtual void SetPropertyNode(FSMGraphProperty_Base* NewNode) override { TextProperty = *(FSMTextGraphProperty*)NewNode; }
	virtual TSharedPtr<SSMGraphProperty_Base> GetGraphNodeWidget() const override;
	virtual bool IsConsideredForDefaultProperty() const override { return TextProperty.WidgetInfo.bConsiderForDefaultWidget; }
	virtual void DefaultPropertyActionWhenPlaced(TSharedPtr<SWidget> Widget) override;
	virtual void PinDefaultValueChanged(UEdGraphPin* Pin) override;
	virtual void SetPropertyDefaultsFromPin() override;
	virtual void SetPinValueFromPropertyDefaults(bool bUpdateTemplateDefaults, bool bUseArchetype, bool bForce) override;
protected:
	virtual void Internal_GetContextMenuActionsForOwningNode(const UEdGraph* CurrentGraph, const UEdGraphNode* InGraphNode, const UEdGraphPin* InGraphPin, FToolMenuSection& MenuSection, bool bIsDebugging) const override;
	// ~USMGraphK2Node_PropertyNode

private:
	/** True only for versions prior to supporting text graph defaults. */
	bool bUpgradingToSupportDefaults = false;
};