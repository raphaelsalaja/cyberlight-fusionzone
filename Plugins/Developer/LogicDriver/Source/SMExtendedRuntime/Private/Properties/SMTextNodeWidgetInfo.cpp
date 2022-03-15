// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMTextNodeWidgetInfo.h"
#include "Styling/CoreStyle.h"

FSMTextNodeWidgetInfo::FSMTextNodeWidgetInfo() : Super()
{
#if WITH_EDITORONLY_DATA
	MinWidth = 150;
	MaxWidth = 300;
	MinHeight = 50;
	MaxHeight = 250;
	DisplayOrder = 0;
	bConsiderForDefaultWidget = false;

	EditableTextStyle = FCoreStyle::Get().GetWidgetStyle<FInlineEditableTextBlockStyle>("InlineEditableTextBlockStyle");
	EditableTextStyle.EditableTextBoxStyle.Font.Size = 11;
	EditableTextStyle.EditableTextBoxStyle.BackgroundColor = FLinearColor(0.71f, 0.71f, 0.71f);
	EditableTextStyle.TextStyle.Font.Size = 11;
	EditableTextStyle.TextStyle.Font.OutlineSettings.OutlineSize = 2;
	WrapTextAt = 0;
#endif
}
