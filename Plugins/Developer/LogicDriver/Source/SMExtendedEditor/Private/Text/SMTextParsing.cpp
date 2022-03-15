// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "SMTextParsing.h"
#include "Framework/Text/RichTextMarkupProcessing.h"
#include "Framework/Text/IRichTextMarkupWriter.h"
#include "Kismet2/Kismet2NameValidators.h"
#include "SMRunTypes.h"
#include "Utilities/SMBlueprintEditorUtils.h"


SMTextParser::FParserResults SMTextParser::ConvertToRichText(const FText& InText, UBlueprint* InBlueprint, TMap<FName, FGuid>* ExistingVariables, TMap<FName, FGuid>* ExistingFunctions)
{
	static TSharedRef<FDefaultRichTextMarkupWriter> MarkupWriter = FDefaultRichTextMarkupWriter::Create();

	FParserResults Result;
	const FString& AsString = InText.ToString();

	FString OutPlainString;
	FString OutRichString;
	FString CurrentNameAsStr;
	int32 OpeningBracket = -1;
	for(int32 i = 0; i < AsString.Len(); i++)
	{
		const TCHAR& CurrentChar = AsString[i];

		// Start of variable. The key ` should prevent this from being parsed according to UE4 spec.
		if(CurrentChar == '{' && !(i > 0 && AsString[i - 1] == '`'))
		{
			CurrentNameAsStr.Empty();
			OpeningBracket = i;
		}
		// Looking for variable
		else if(OpeningBracket >= 0)
		{
			// End of variable
			if (CurrentChar == '}')
			{
				FRunInfo RunInfo;

				const FName CurrentName = FName(*CurrentNameAsStr);
				FString FinalNameAsStr = CurrentNameAsStr;

				if(UFunction* Function = FindFunction(CurrentName, InBlueprint, ExistingFunctions))
				{
					RunInfo = FRunTypeUtils::CreateFunctionRunInfo(Function);
					FinalNameAsStr = Function->GetName();
					Result.Functions.Add(Function);
				}
				else
				{
					FBPVariableDescription Variable;
					bool bIsVarNameInvalid = false;
					bool bVarExists = FindVariable(CurrentName, InBlueprint, ExistingVariables, Variable, bIsVarNameInvalid);

					if (bVarExists)
					{
						FinalNameAsStr = Variable.VarName.ToString();
						Result.Variables.Add(Variable.VarName, Variable.VarGuid);
					}
					else
					{
						// Invalid, just add what was there originally.
						if (bIsVarNameInvalid)
						{
							FinalNameAsStr = "";
							OutPlainString.Append(*AsString, i - OpeningBracket);
							OutRichString.Append(*AsString, i - OpeningBracket);
						}

						Result.Variables.Add(CurrentName, FGuid());
					}

					RunInfo = FRunTypeUtils::CreatePropertyRunInfo(FName(*FinalNameAsStr), bVarExists ? &Variable : nullptr);
				}
				
				// Plain text is just the variable name in case it has changed.
				OutPlainString.Append(FString::Printf(TEXT("{%s}"), *FinalNameAsStr));

				IRichTextMarkupWriter::FRichTextLine RichLine;
				TArray<IRichTextMarkupWriter::FRichTextLine> RichLines;

				RichLine.Runs.Add(IRichTextMarkupWriter::FRichTextRun(RunInfo, ""));
				RichLines.Add(RichLine);

				MarkupWriter->Write(RichLines, OutRichString);

				OpeningBracket = -1;
				continue;
			}

			CurrentNameAsStr += CurrentChar;
		}
		// Regular character.
		else
		{
			OutPlainString += CurrentChar;
			OutRichString += CurrentChar;
		}
	}

	Result.PlainText = FText::FromString(OutPlainString);
	Result.RichText = FText::FromString(OutRichString);
	return Result;
}

bool SMTextParser::FindVariable(const FName& VarName, UBlueprint* InBlueprint, TMap<FName, FGuid>* ExistingVariables,
	FBPVariableDescription& OutVariable, bool& bIsNameInvalid)
{
	bool bVarExists = false;
	if (ExistingVariables != nullptr)
	{
		// Find a saved variable for the current written var name.
		if (FGuid* ExistingGuid = ExistingVariables->Find(VarName))
		{
			// We found one, let's check if this original guid still exists.
			bVarExists = FSMBlueprintEditorUtils::TryGetVariableByGuid(InBlueprint, *ExistingGuid, OutVariable);
		}
	}

	// Find the current variable based on the current name.
	if (!bVarExists)
	{
		if (IsVariableNameValid(VarName.ToString()))
		{
			bVarExists = FSMBlueprintEditorUtils::TryGetVariableByName(InBlueprint, VarName, OutVariable);
		}
		else
		{
			bIsNameInvalid = true;
		}
	}

	return bVarExists;
}

UFunction* SMTextParser::FindFunction(const FName& Name, UBlueprint* InBlueprint, TMap<FName, FGuid>* ExistingFunctions)
{
	// Look for an existing function which may have been renamed.
	if(ExistingFunctions != nullptr)
	{
		if(FGuid* ExistingGuid = ExistingFunctions->Find(Name))
		{
			const FName FunctionName = InBlueprint->GetFunctionNameFromClassByGuid(InBlueprint->SkeletonGeneratedClass, *ExistingGuid);
			if(!FunctionName.IsNone())
			{
				if(UFunction* Function = FindUField<UFunction>(InBlueprint->SkeletonGeneratedClass, FunctionName))
				{
					return Function;
				}
			}
		}
	}
	
	UFunction* Function = FindUField<UFunction>(InBlueprint->SkeletonGeneratedClass, Name);
	if(!Function)
	{
		Function = FMemberReference::FindRemappedField<UFunction>(InBlueprint->GeneratedClass, Name);
	}
	
	return Function;
}

bool SMTextParser::IsVariableNameValid(const FString& InName)
{
	return FName::IsValidXName(InName, UE_BLUEPRINT_INVALID_NAME_CHARACTERS);
}
