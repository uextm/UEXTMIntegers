// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/Macros/UEXTMIntegers_WrapperMacros.h"

#include "UEXTMIntegers_UInt16.generated.h"

/** uint16 wrapper  */
USTRUCT(BlueprintType, DisplayName = "Unsigned Integer16", meta=( DisableSplitPin, HasNativeMake = "/Script/UEXTMIntegers.BPLibrary_UEXTMIntegers_KismetSystem:MakeLiteralUInt16" ))
struct UEXTMINTEGERS_API FUEXTMIntegers_UInt16 final
{
	
	GENERATED_BODY()

private:

	// This UPROPERTY is required due to how
	// FScriptBuilderBase::EmitTermExpr handles literal UStructs
	// It should always match Value
	UPROPERTY()
	FString Internal_ValueString;

	WRAPPER_PROPERTIES(uint16)
	
public:

	WRAPPER_BODY(FUEXTMIntegers_UInt16, uint16, Internal_ValueString)
	
};

WRAPPER_TRAITS(FUEXTMIntegers_UInt16)