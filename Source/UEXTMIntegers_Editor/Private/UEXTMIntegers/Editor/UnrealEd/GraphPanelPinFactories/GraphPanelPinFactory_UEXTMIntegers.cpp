// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#include "UEXTMIntegers/Editor/UnrealEd/GraphPanelPinFactories/GraphPanelPinFactory_UEXTMIntegers.h"

#include "EdGraphSchema_K2.h"
#include "KismetPins/SGraphPinNum.h"

#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int16.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int8.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt16.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt32.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt64.h"

TSharedPtr<SGraphPin> FGraphPanelPinFactory_UEXTMIntegers::CreatePin(UEdGraphPin* InPin) const
{
	const UEdGraphSchema_K2* K2Schema = GetDefault<UEdGraphSchema_K2>();
	if (InPin->PinType.PinCategory != K2Schema->PC_Struct)
	{
		return nullptr;
	}
		
	if (InPin->PinType.PinSubCategoryObject == FUEXTMIntegers_UInt16::StaticStruct())
	{
		return SNew(SGraphPinNum<uint16>, InPin);
	}

	if (InPin->PinType.PinSubCategoryObject == FUEXTMIntegers_UInt32::StaticStruct())
	{
		return SNew(SGraphPinNum<uint32>, InPin);
	}

	if (InPin->PinType.PinSubCategoryObject == FUEXTMIntegers_UInt64::StaticStruct())
	{
		return SNew(SGraphPinNum<uint64>, InPin);
	}

	if (InPin->PinType.PinSubCategoryObject == FUEXTMIntegers_Int8::StaticStruct())
	{
		return SNew(SGraphPinNum<int8>, InPin);
	}

	if (InPin->PinType.PinSubCategoryObject == FUEXTMIntegers_Int16::StaticStruct())
	{
		return SNew(SGraphPinNum<int16>, InPin);
	}

	return nullptr;
}
