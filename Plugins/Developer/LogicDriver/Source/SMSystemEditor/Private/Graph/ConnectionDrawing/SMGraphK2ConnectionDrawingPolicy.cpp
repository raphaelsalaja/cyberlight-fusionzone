// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMGraphK2ConnectionDrawingPolicy.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Graph/Schema/SMGraphK2Schema.h"
#include "Blueprints/SMBlueprint.h"

FSMGraphK2ConnectionDrawingPolicy::FSMGraphK2ConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
	: FKismetConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj)
{
}