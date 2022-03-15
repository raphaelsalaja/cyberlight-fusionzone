// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#pragma once

#include "SMGraphProperty_Base.h"
#include "SMTextNodeWidgetInfo.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "SMTextGraphProperty.generated.h"

/**
 * Helper for converting object data to text in FSMTextGraphProperty.
 */
USTRUCT()
struct SMEXTENDEDRUNTIME_API FSMTextSerializer
{
	GENERATED_BODY()

	/**
	* When an object is placed in the text graph this function will be dynamically found from the object and executed.
	* The function should be pure and return only text.
	*
	* This is dynamically looked up during run-time.
	*
	* If empty no function is looked up.
	*/
	UPROPERTY(EditDefaultsOnly, Category = "Text Conversion")
	FName ToTextDynamicFunctionName;

	/**
	 * When an object is placed in the text graph this function will be looked up from the object and executed.
	 * The function should be pure and return only text.
	 *
	 * This function must exist on the class of the object placed in the text graph.
	 *
	 * If empty no function is looked up.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Text Conversion")
	TArray<FName> ToTextFunctionNames;

	bool HasToTextFunctions() const
	{
		return ToTextFunctionNames.Num() > 0 || ToTextDynamicFunctionName != NAME_None;
	}
};

/**
 * DO NOT USE THIS DIRECTLY. Use FSMTextGraphProperty instead.
 * 
 * Runtime variant of the text graph property for Logic Driver state machines.
 * This is automatically placed in state machine blueprints when FSMTextGraphProperty is used.
 */
USTRUCT(BlueprintInternalUseOnly)
struct SMEXTENDEDRUNTIME_API FSMTextGraphProperty_Runtime : public FSMGraphProperty_Base_Runtime
{
public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = Result, meta = (AlwaysAsPin))
	FText Result;

	// FSMGraphProperty_Base_Runtime
	virtual uint8* GetResult() const override { return (uint8*)&Result; }
	virtual void SetResult(uint8* Value) override;
	// ~FSMGraphProperty_Base_Runtime
	
	UPROPERTY(EditDefaultsOnly, Category = "Text Serializer")
	FSMTextSerializer TextSerializer;
};

/**
	For Logic Driver node classes only.
	
	The state machine graph node which owns the class will display this property
	as an editable text box directly on the node and create a blueprint graph
	to parse the text.
 */
USTRUCT(BlueprintType, meta = (DisplayName = "SM Text Graph Property", HasNativeBreak = "SMExtendedRuntime.SMExtendedGraphPropertyHelpers.BreakTextGraphProperty"))
struct SMEXTENDEDRUNTIME_API FSMTextGraphProperty : public FSMGraphProperty_Base
{
public:
	GENERATED_BODY()

	FSMTextGraphProperty();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Result, meta = (AlwaysAsPin))
	FText Result;

	// FSMGraphProperty_Base_Runtime
	virtual uint8* GetResult() const override { return (uint8*)&Result; }
	virtual void SetResult(uint8* Value) override;
	// ~FSMGraphProperty_Base_Runtime
	
	// FSMGraphProperty_Base
	virtual bool ShouldAutoAssignVariable() const override { return false; }
	virtual bool ShouldCompileReadOnlyVariables() const override { return true; }
	// ~FSMGraphProperty_Base
	
#if WITH_EDITORONLY_DATA
public:
	virtual int32 GetVerticalDisplayOrder() const override { return WidgetInfo.DisplayOrder; }
	virtual bool ShouldDefaultToEditMode() const override { return false; }
	virtual bool AllowToggleGraphEdit() const override { return !IsVariableReadOnly(); }

#endif

	UPROPERTY(EditDefaultsOnly, Category = "Text Serializer")
	FSMTextSerializer TextSerializer;
	
	// WidgetInfo should be EDITORONLY_DATA but bp nativization will throw warnings unless it's always included.
	/** Configure the widget display properties. */
	UPROPERTY(EditDefaultsOnly, Category = "Node Widget")
	FSMTextNodeWidgetInfo WidgetInfo;
};