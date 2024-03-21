// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt16.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt32.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt64.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int8.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int16.h"

#include "BPLibrary_UEXTMIntegers_KismetSystem.generated.h"

// This class contains analogs of functions in UKismetSystemLibrary 

//** Kismet System Library */
UCLASS(DisplayName = "Kismet System Library (UEXTM Integers)", meta=(BlueprintThreadSafe, ScriptName = "UEXTMIntegers_SystemLibrary"))
class UEXTMINTEGERS_API UBPLibrary_UEXTMIntegers_KismetSystem final : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:

	//
	// MakeLiteral functions
	//
	
	/**
	 * Creates a literal unsigned 16-bit integer
	 * @param	Value	value to set the unsigned 16-bit integer to
	 * @return	The literal unsigned 16-bit integer
	 */
	UFUNCTION(BlueprintPure, Category="Math|Integer", meta=(BlueprintThreadSafe))
	static FUEXTMIntegers_UInt16 MakeLiteralUInt16(FUEXTMIntegers_UInt16 Value);
	
	/**
	 * Creates a literal unsigned integer
	 * @param	Value	value to set the integer to
	 * @return	The literal unsigned integer
	 */
	UFUNCTION(BlueprintPure, Category="Math|Integer", meta=(BlueprintThreadSafe))
	static FUEXTMIntegers_UInt32 MakeLiteralUInt(FUEXTMIntegers_UInt32 Value);

	/**
	 * Creates a literal unsigned 64-bit integer
	 * @param	Value	value to set the unsigned 64-bit integer to
	 * @return	The literal unsigned 64-bit integer
	 */
	UFUNCTION(BlueprintPure, Category = "Math|Integer", meta = (BlueprintThreadSafe))
	static FUEXTMIntegers_UInt64 MakeLiteralUInt64(FUEXTMIntegers_UInt64 Value);
	
	/**
	 * Creates a literal 8-bit integer
	 * @param	Value	value to set the 8-bit integer to
	 * @return	The literal 8-bit integer
	 */
	UFUNCTION(BlueprintPure, Category="Math|Integer", meta=(BlueprintThreadSafe))
	static FUEXTMIntegers_Int8 MakeLiteralInt8(FUEXTMIntegers_Int8 Value);

	/**
	 * Creates a literal 16-bit integer
	 * @param	Value	value to set the 16-bit integer to
	 * @return	The literal 16-bit integer
	 */
	UFUNCTION(BlueprintPure, Category="Math|Integer", meta=(BlueprintThreadSafe))
	static FUEXTMIntegers_Int16 MakeLiteralInt16(FUEXTMIntegers_Int16 Value);

	//
	// SetPropertyByName functions
	//

	/** Set an uint16 property by name */
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly = "true"))
	static void SetUInt16PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_UInt16 Value);
	
	/** Set an uint32 property by name */
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly = "true"))
	static void SetUIntPropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_UInt32 Value);
	
	/** Set an uint64 property by name */
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly = "true"))
	static void SetUInt64PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_UInt64 Value);

	/** Set an int8 property by name */
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly = "true"))
	static void SetInt8PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_Int8 Value);

	/** Set an int16 property by name */
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly = "true"))
	static void SetInt16PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_Int16 Value);
		
};