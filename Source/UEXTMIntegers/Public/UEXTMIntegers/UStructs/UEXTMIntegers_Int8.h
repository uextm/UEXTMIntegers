// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/Macros/UEXTMIntegers_WrapperMacros.h"

#include "UEXTMIntegers_Int8.generated.h"

/** int8 wrapper */
USTRUCT(BlueprintType, DisplayName = "Integer8", meta=( DisableSplitPin, HasNativeMake = "/Script/UEXTMIntegers.BPLibrary_UEXTMIntegers_KismetSystem:MakeLiteralInt8" ))
struct UEXTMINTEGERS_API FUEXTMIntegers_Int8 final
{
	
	GENERATED_BODY()

private:

	// This UPROPERTY is required due to how
	// FScriptBuilderBase::EmitTermExpr handles literal UStructs
	// It should always match Value
	UPROPERTY()
	FString Internal_ValueString;

	WRAPPER_PROPERTIES(int8)
	
public:

	WRAPPER_BODY(FUEXTMIntegers_Int8, int8, Internal_ValueString)

};

WRAPPER_TRAITS(FUEXTMIntegers_Int8)