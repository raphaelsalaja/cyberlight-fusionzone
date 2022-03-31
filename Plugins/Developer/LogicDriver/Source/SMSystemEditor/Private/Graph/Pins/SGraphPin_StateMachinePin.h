// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "SGraphPin.h"

class SSMGraphPin_StateMachinePin : public SGraphPin
{
public:
	SLATE_BEGIN_ARGS(SSMGraphPin_StateMachinePin) {}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs, UEdGraphPin* InPin)
	{
		SGraphPin::Construct(SGraphPin::FArguments(), InPin);
	}

protected:

	const FSlateBrush* GetPinBorder() const
	{
		return IsHovered()
			? FEditorStyle::GetBrush(TEXT("Graph.StateNode.Pin.BackgroundHovered"))
			: FEditorStyle::GetBrush(TEXT("Graph.StateNode.Pin.Background"));
	}
};
