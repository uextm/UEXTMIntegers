// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/Macros/UEXTMIntegers_WrapperMacros.h"

#include "UEXTMIntegers_UInt64.generated.h"

/** uint64 wrapper */
USTRUCT(BlueprintType, DisplayName = "Unsigned Integer64", meta=( DisableSplitPin, HasNativeMake = "/Script/UEXTMIntegers.BPLibrary_UEXTMIntegers_KismetSystem:MakeLiteralUInt64" ))
struct UEXTMINTEGERS_API FUEXTMIntegers_UInt64 final
{
	
	GENERATED_BODY()

private:

	// This UPROPERTY is required due to how
	// FScriptBuilderBase::EmitTermExpr handles literal UStructs
	// It should always match Value
	UPROPERTY()
	FString Internal_ValueString;

	WRAPPER_PROPERTIES(uint64)
	
public:

	WRAPPER_BODY(FUEXTMIntegers_UInt64, uint64, Internal_ValueString)
	
};

WRAPPER_TRAITS(FUEXTMIntegers_UInt64)