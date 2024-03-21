// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/Macros/UEXTMIntegers_WrapperMacros.h"

#include "UEXTMIntegers_UInt32.generated.h"

/** uint32 wrapper */
USTRUCT(BlueprintType, DisplayName = "Unsigned Integer", meta=( DisableSplitPin, HasNativeMake = "/Script/UEXTMIntegers.BPLibrary_UEXTMIntegers_KismetSystem:MakeLiteralUInt" ))
struct UEXTMINTEGERS_API FUEXTMIntegers_UInt32 final
{
	
	GENERATED_BODY()

private:

	// This UPROPERTY is required due to how
	// FScriptBuilderBase::EmitTermExpr handles literal UStructs
	// It should always match Value
	UPROPERTY()
	FString Internal_ValueString = "";

	WRAPPER_PROPERTIES(uint32)
	
public:

	WRAPPER_BODY(FUEXTMIntegers_UInt32, uint32, Internal_ValueString)
	
};

WRAPPER_TRAITS(FUEXTMIntegers_UInt32)