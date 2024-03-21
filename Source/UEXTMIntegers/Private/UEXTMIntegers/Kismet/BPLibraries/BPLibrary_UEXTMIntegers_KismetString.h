// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt16.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt32.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt64.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int8.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int16.h"

#include "BPLibrary_UEXTMIntegers_KismetString.generated.h"

// This class contains analogs of functions in UKismetStringLibrary 

/** Kismet String Library */
UCLASS(DisplayName = "Kismet String Library (UEXTM Integers)", meta=(BlueprintThreadSafe, ScriptName = "UEXTMIntegers_StringLibrary"))
class UEXTMINTEGERS_API UBPLibrary_UEXTMIntegers_KismetString final : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	//
	// ToString functions
	//

	/** Converts an unsigned 16-bit integer value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (Unsigned Integer16)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
	static FString Conv_UInt16ToString(FUEXTMIntegers_UInt16 InInt);

	/** Converts an unsigned integer value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (Unsigned Integer)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
	static FString Conv_UInt32ToString(FUEXTMIntegers_UInt32 InInt);
	
	/** Converts an unsigned 64-bit integer value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (Unsigned Integer64)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
	static FString Conv_UInt64ToString(FUEXTMIntegers_UInt64 InInt);

	/** Converts an 8-bit integer value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (Integer8)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
	static FString Conv_Int8ToString(FUEXTMIntegers_Int8 InInt);

	/** Converts an 16-bit integer value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To String (Integer16)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
	static FString Conv_Int16ToString(FUEXTMIntegers_Int16 InInt);
		
};