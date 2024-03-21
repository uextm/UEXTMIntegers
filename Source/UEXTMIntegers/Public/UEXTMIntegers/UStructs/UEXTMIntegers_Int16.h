// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/Macros/UEXTMIntegers_WrapperMacros.h"

#include "UEXTMIntegers_Int16.generated.h"

/** int16 wrapper  */
USTRUCT(BlueprintType, DisplayName = "Integer16", meta=( DisableSplitPin, HasNativeMake = "/Script/UEXTMIntegers.BPLibrary_UEXTMIntegers_KismetSystem:MakeLiteralInt16" ))
struct UEXTMINTEGERS_API FUEXTMIntegers_Int16 final
{
	
	GENERATED_BODY()

private:

	// This UPROPERTY is required due to how
	// FScriptBuilderBase::EmitTermExpr handles literal UStructs
	// It should always match Value
	UPROPERTY()
	FString Internal_ValueString = "";

	WRAPPER_PROPERTIES(int16)
	
public:

	WRAPPER_BODY(FUEXTMIntegers_Int16, int16, Internal_ValueString)
	
};

WRAPPER_TRAITS(FUEXTMIntegers_Int16)