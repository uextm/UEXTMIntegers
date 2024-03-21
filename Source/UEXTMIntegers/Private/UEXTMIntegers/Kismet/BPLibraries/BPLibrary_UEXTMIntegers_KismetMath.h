// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int16.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int8.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt16.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt32.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt64.h"

#include "BPLibrary_UEXTMIntegers_KismetMath.generated.h"

// This class contains analogs of functions in UKismetMathLibrary 

/** Kismet Math Library */
UCLASS(DisplayName = "Kismet Math Library (UEXTM Integers)", meta=(BlueprintThreadSafe, ScriptName = "UEXTMIntegers_MathLibrary"))
class UEXTMINTEGERS_API UBPLibrary_UEXTMIntegers_KismetMath final : public UBlueprintFunctionLibrary
{
	
	GENERATED_BODY()

public:
	
	//
	// Unsigned Integer16 functions.
	//
	
	/** Multiplication (A * B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 * Unsigned Integer16", CompactNodeTitle = "*", Keywords = "* multiply", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Multiply_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Division (A / B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 / Unsigned Integer16", CompactNodeTitle = "/", Keywords = "/ divide division"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Divide_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);
	
	/** Modulo (A % B) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "% (Unsigned Integer16)", CompactNodeTitle = "%", Keywords = "% modulus"), Category = "Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Percent_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Addition (A + B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 + Unsigned Integer16", CompactNodeTitle = "+", Keywords = "+ add plus", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Add_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Subtraction (A - B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 - Unsigned Integer16", CompactNodeTitle = "-", Keywords = "- subtract minus"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Subtract_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns true if A is less than B (A < B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 < Unsigned Integer16", CompactNodeTitle = "<", Keywords = "< less"), Category="Math|Unsigned Integer16")
	static bool Less_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns true if A is greater than B (A > B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 > Unsigned Integer16", CompactNodeTitle = ">", Keywords = "> greater"), Category="Math|Unsigned Integer16")
	static bool Greater_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns true if A is less than or equal to B (A <= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 <= Unsigned Integer16", CompactNodeTitle = "<=", Keywords = "<= less"), Category="Math|Unsigned Integer16")
	static bool LessEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns true if A is greater than or equal to B (A >= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer16 >= Unsigned Integer16", CompactNodeTitle = ">=", Keywords = ">= greater"), Category="Math|Unsigned Integer16")
	static bool GreaterEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns true if A is equal to B (A == B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Equal (Unsigned Integer16)", CompactNodeTitle = "==", Keywords = "== equal"), Category="Math|Unsigned Integer16")
	static bool EqualEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns true if A is not equal to B (A != B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Not Equal (Unsigned Integer16)", CompactNodeTitle = "!=", Keywords = "!= not equal"), Category="Math|Unsigned Integer16")
	static bool NotEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);
	
	/** Returns true if value is between Min and Max (V >= Min && V <= Max)
	 * If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
	 * If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
	 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "In Range (Unsigned Integer16)", Min = "0", Max = "10"), Category = "Math|Unsigned Integer16")
	static bool InRange_UInt16UInt16(FUEXTMIntegers_UInt16 Value, FUEXTMIntegers_UInt16 Min, FUEXTMIntegers_UInt16 Max, bool InclusiveMin = true, bool InclusiveMax = true);

	/** Bitwise AND (A & B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise AND", CompactNodeTitle = "&", Keywords = "& and", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 And_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Bitwise XOR (A ^ B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise XOR", CompactNodeTitle = "^", Keywords = "^ xor"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Xor_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Bitwise OR (A | B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise OR", CompactNodeTitle = "|", Keywords = "| or", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Or_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Bitwise NOT (~A) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Bitwise NOT", CompactNodeTitle = "~", Keywords = "~ not"), Category = "Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 Not_UInt16(FUEXTMIntegers_UInt16 A);
	
	/** Returns the minimum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Min (Unsigned Integer16)", CompactNodeTitle = "MIN", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 MinUInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns the maximum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Max (Unsigned Integer16)", CompactNodeTitle = "MAX", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 MaxUInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B);

	/** Returns Value clamped to be between A and B (inclusive) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Clamp (Unsigned Integer16)"), Category="Math|Unsigned Integer16")
	static FUEXTMIntegers_UInt16 ClampUInt16(FUEXTMIntegers_UInt16 Value, FUEXTMIntegers_UInt16 Min, FUEXTMIntegers_UInt16 Max);
	
	//
	// Unsigned Integer functions.
	//
	
	/** Multiplication (A * B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer * Unsigned Integer", CompactNodeTitle = "*", Keywords = "* multiply", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Multiply_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Division (A / B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer / Unsigned Integer", CompactNodeTitle = "/", Keywords = "/ divide division"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Divide_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);
	
	/** Modulo (A % B) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "% (Unsigned Integer)", CompactNodeTitle = "%", Keywords = "% modulus"), Category = "Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Percent_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Addition (A + B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer + Unsigned Integer", CompactNodeTitle = "+", Keywords = "+ add plus", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Add_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Subtraction (A - B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer - Unsigned Integer", CompactNodeTitle = "-", Keywords = "- subtract minus"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Subtract_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns true if A is less than B (A < B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer < Unsigned Integer", CompactNodeTitle = "<", Keywords = "< less"), Category="Math|Unsigned Integer")
	static bool Less_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns true if A is greater than B (A > B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer > Unsigned Integer", CompactNodeTitle = ">", Keywords = "> greater"), Category="Math|Unsigned Integer")
	static bool Greater_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns true if A is less than or equal to B (A <= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer <= Unsigned Integer", CompactNodeTitle = "<=", Keywords = "<= less"), Category="Math|Unsigned Integer")
	static bool LessEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns true if A is greater than or equal to B (A >= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer >= Unsigned Integer", CompactNodeTitle = ">=", Keywords = ">= greater"), Category="Math|Unsigned Integer")
	static bool GreaterEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns true if A is equal to B (A == B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Equal (Unsigned Integer)", CompactNodeTitle = "==", Keywords = "== equal"), Category="Math|Unsigned Integer")
	static bool EqualEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns true if A is not equal to B (A != B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Not Equal (Unsigned Integer)", CompactNodeTitle = "!=", Keywords = "!= not equal"), Category="Math|Unsigned Integer")
	static bool NotEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);
	
	/** Returns true if value is between Min and Max (V >= Min && V <= Max)
	 * If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
	 * If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
	 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "In Range (Unsigned Integer)", Min = "0", Max = "10"), Category = "Math|Unsigned Integer")
	static bool InRange_UIntUInt(FUEXTMIntegers_UInt32 Value, FUEXTMIntegers_UInt32 Min, FUEXTMIntegers_UInt32 Max, bool InclusiveMin = true, bool InclusiveMax = true);

	/** Bitwise AND (A & B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise AND", CompactNodeTitle = "&", Keywords = "& and", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 And_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Bitwise XOR (A ^ B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise XOR", CompactNodeTitle = "^", Keywords = "^ xor"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Xor_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Bitwise OR (A | B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise OR", CompactNodeTitle = "|", Keywords = "| or", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Or_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Bitwise NOT (~A) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Bitwise NOT", CompactNodeTitle = "~", Keywords = "~ not"), Category = "Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 Not_UInt(FUEXTMIntegers_UInt32 A);

	/** Returns the minimum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Min (Unsigned Integer)", CompactNodeTitle = "MIN", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 MinUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns the maximum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Max (Unsigned Integer)", CompactNodeTitle = "MAX", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 MaxUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B);

	/** Returns Value clamped to be between A and B (inclusive) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Clamp (Unsigned Integer)"), Category="Math|Unsigned Integer")
	static FUEXTMIntegers_UInt32 ClampUInt(FUEXTMIntegers_UInt32 Value, FUEXTMIntegers_UInt32 Min, FUEXTMIntegers_UInt32 Max);

	//
	// Unsigned Integer64 functions.
	//
	
	/** Multiplication (A * B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 * Unsigned Integer64", CompactNodeTitle = "*", Keywords = "* multiply", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Multiply_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Division (A / B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 / Unsigned Integer64", CompactNodeTitle = "/", Keywords = "/ divide division"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Divide_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);
	
	/** Modulo (A % B) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "% (Unsigned Integer64)", CompactNodeTitle = "%", Keywords = "% modulus"), Category = "Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Percent_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Addition (A + B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 + Unsigned Integer64", CompactNodeTitle = "+", Keywords = "+ add plus", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Add_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Subtraction (A - B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 - Unsigned Integer64", CompactNodeTitle = "-", Keywords = "- subtract minus"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Subtract_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns true if A is less than B (A < B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 < Unsigned Integer64", CompactNodeTitle = "<", Keywords = "< less"), Category="Math|Unsigned Integer64")
	static bool Less_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns true if A is greater than B (A > B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 > Unsigned Integer64", CompactNodeTitle = ">", Keywords = "> greater"), Category="Math|Unsigned Integer64")
	static bool Greater_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns true if A is less than or equal to B (A <= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 <= Unsigned Integer64", CompactNodeTitle = "<=", Keywords = "<= less"), Category="Math|Unsigned Integer64")
	static bool LessEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns true if A is greater than or equal to B (A >= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Unsigned Integer64 >= Unsigned Integer64", CompactNodeTitle = ">=", Keywords = ">= greater"), Category="Math|Unsigned Integer64")
	static bool GreaterEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns true if A is equal to B (A == B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Equal (Unsigned Integer64)", CompactNodeTitle = "==", Keywords = "== equal"), Category="Math|Unsigned Integer64")
	static bool EqualEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns true if A is not equal to B (A != B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Not Equal (Unsigned Integer64)", CompactNodeTitle = "!=", Keywords = "!= not equal"), Category="Math|Unsigned Integer64")
	static bool NotEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);
	
	/** Returns true if value is between Min and Max (V >= Min && V <= Max)
	 * If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
	 * If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
	 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "In Range (Unsigned Integer64)", Min = "0", Max = "10"), Category = "Math|Unsigned Integer64")
	static bool InRange_UInt64UInt64(FUEXTMIntegers_UInt64 Value, FUEXTMIntegers_UInt64 Min, FUEXTMIntegers_UInt64 Max, bool InclusiveMin = true, bool InclusiveMax = true);

	/** Bitwise AND (A & B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise AND", CompactNodeTitle = "&", Keywords = "& and", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 And_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Bitwise XOR (A ^ B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise XOR", CompactNodeTitle = "^", Keywords = "^ xor"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Xor_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Bitwise OR (A | B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise OR", CompactNodeTitle = "|", Keywords = "| or", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Or_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Bitwise NOT (~A) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Bitwise NOT", CompactNodeTitle = "~", Keywords = "~ not"), Category = "Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 Not_UInt64(FUEXTMIntegers_UInt64 A);

	/** Returns the minimum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Min (Unsigned Integer64)", CompactNodeTitle = "MIN", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 MinUInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns the maximum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Max (Unsigned Integer64)", CompactNodeTitle = "MAX", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 MaxUInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B);

	/** Returns Value clamped to be between A and B (inclusive) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Clamp (Unsigned Integer64)"), Category="Math|Unsigned Integer64")
	static FUEXTMIntegers_UInt64 ClampUInt64(FUEXTMIntegers_UInt64 Value, FUEXTMIntegers_UInt64 Min, FUEXTMIntegers_UInt64 Max);

	//
	// Integer8 functions.
	//
	
	/** Multiplication (A * B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 * integer8", CompactNodeTitle = "*", Keywords = "* multiply", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 Multiply_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Division (A / B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 / integer8", CompactNodeTitle = "/", Keywords = "/ divide division"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 Divide_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);
	
	/** Modulo (A % B) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "% (integer8)", CompactNodeTitle = "%", Keywords = "% modulus"), Category = "Math|Integer8")
	static FUEXTMIntegers_Int8 Percent_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Addition (A + B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 + integer8", CompactNodeTitle = "+", Keywords = "+ add plus", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 Add_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Subtraction (A - B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 - integer8", CompactNodeTitle = "-", Keywords = "- subtract minus"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 Subtract_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns true if A is less than B (A < B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 < integer8", CompactNodeTitle = "<", Keywords = "< less"), Category="Math|Integer8")
	static bool Less_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns true if A is greater than B (A > B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 > integer8", CompactNodeTitle = ">", Keywords = "> greater"), Category="Math|Integer8")
	static bool Greater_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns true if A is less than or equal to B (A <= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 <= integer8", CompactNodeTitle = "<=", Keywords = "<= less"), Category="Math|Integer8")
	static bool LessEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns true if A is greater than or equal to B (A >= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer8 >= integer8", CompactNodeTitle = ">=", Keywords = ">= greater"), Category="Math|Integer8")
	static bool GreaterEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns true if A is equal to B (A == B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Equal (Integer8)", CompactNodeTitle = "==", Keywords = "== equal"), Category="Math|Integer8")
	static bool EqualEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns true if A is not equal to B (A != B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Not Equal (Integer8)", CompactNodeTitle = "!=", Keywords = "!= not equal"), Category="Math|Integer8")
	static bool NotEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);
	
	/** Returns true if value is between Min and Max (V >= Min && V <= Max)
	 * If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
	 * If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
	 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "In Range (Integer8)", Min = "0", Max = "10"), Category = "Math|Integer8")
	static bool InRange_Int8Int8(FUEXTMIntegers_Int8 Value, FUEXTMIntegers_Int8 Min, FUEXTMIntegers_Int8 Max, bool InclusiveMin = true, bool InclusiveMax = true);

	/** Bitwise AND (A & B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise AND", CompactNodeTitle = "&", Keywords = "& and", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 And_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Bitwise XOR (A ^ B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise XOR", CompactNodeTitle = "^", Keywords = "^ xor"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 Xor_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Bitwise OR (A | B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise OR", CompactNodeTitle = "|", Keywords = "| or", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 Or_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Bitwise NOT (~A) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Bitwise NOT", CompactNodeTitle = "~", Keywords = "~ not"), Category = "Math|Integer8")
	static FUEXTMIntegers_Int8 Not_Int8(FUEXTMIntegers_Int8 A);

	/** Sign (integer8, returns -1 if A < 0, 0 if A is zero, and +1 if A > 0) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Sign (Integer8)"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 SignOfInteger8(FUEXTMIntegers_Int8 A);
	
	/** Returns the minimum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Min (Integer8)", CompactNodeTitle = "MIN", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 MinInt8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns the maximum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Max (Integer8)", CompactNodeTitle = "MAX", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 MaxInt8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B);

	/** Returns Value clamped to be between A and B (inclusive) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Clamp (Integer8)"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 ClampInt8(FUEXTMIntegers_Int8 Value, FUEXTMIntegers_Int8 Min, FUEXTMIntegers_Int8 Max);

	/** Returns the absolute (positive) value of A */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Absolute (Integer8)", CompactNodeTitle = "ABS"), Category="Math|Integer8")
	static FUEXTMIntegers_Int8 Abs_Int8(FUEXTMIntegers_Int8 A);
	
	//
	// Integer16 functions.
	//
	
	/** Multiplication (A * B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 * integer16", CompactNodeTitle = "*", Keywords = "* multiply", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 Multiply_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Division (A / B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 / integer16", CompactNodeTitle = "/", Keywords = "/ divide division"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 Divide_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);
	
	/** Modulo (A % B) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "% (integer16)", CompactNodeTitle = "%", Keywords = "% modulus"), Category = "Math|Integer16")
	static FUEXTMIntegers_Int16 Percent_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Addition (A + B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 + integer16", CompactNodeTitle = "+", Keywords = "+ add plus", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 Add_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Subtraction (A - B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 - integer16", CompactNodeTitle = "-", Keywords = "- subtract minus"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 Subtract_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns true if A is less than B (A < B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 < integer16", CompactNodeTitle = "<", Keywords = "< less"), Category="Math|Integer16")
	static bool Less_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns true if A is greater than B (A > B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 > integer16", CompactNodeTitle = ">", Keywords = "> greater"), Category="Math|Integer16")
	static bool Greater_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns true if A is less than or equal to B (A <= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 <= integer16", CompactNodeTitle = "<=", Keywords = "<= less"), Category="Math|Integer16")
	static bool LessEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns true if A is greater than or equal to B (A >= B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "integer16 >= integer16", CompactNodeTitle = ">=", Keywords = ">= greater"), Category="Math|Integer16")
	static bool GreaterEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns true if A is equal to B (A == B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Equal (Integer16)", CompactNodeTitle = "==", Keywords = "== equal"), Category="Math|Integer16")
	static bool EqualEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns true if A is not equal to B (A != B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Not Equal (Integer16)", CompactNodeTitle = "!=", Keywords = "!= not equal"), Category="Math|Integer16")
	static bool NotEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);
	
	/** Returns true if value is between Min and Max (V >= Min && V <= Max)
	 * If InclusiveMin is true, value needs to be equal or larger than Min, else it needs to be larger
	 * If InclusiveMax is true, value needs to be smaller or equal than Max, else it needs to be smaller
	 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "In Range (Integer16)", Min = "0", Max = "10"), Category = "Math|Integer16")
	static bool InRange_Int16Int16(FUEXTMIntegers_Int16 Value, FUEXTMIntegers_Int16 Min, FUEXTMIntegers_Int16 Max, bool InclusiveMin = true, bool InclusiveMax = true);

	/** Bitwise AND (A & B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise AND", CompactNodeTitle = "&", Keywords = "& and", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 And_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Bitwise XOR (A ^ B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise XOR", CompactNodeTitle = "^", Keywords = "^ xor"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 Xor_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Bitwise OR (A | B) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Bitwise OR", CompactNodeTitle = "|", Keywords = "| or", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 Or_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Bitwise NOT (~A) */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Bitwise NOT", CompactNodeTitle = "~", Keywords = "~ not"), Category = "Math|Integer16")
	static FUEXTMIntegers_Int16 Not_Int16(FUEXTMIntegers_Int16 A);

	/** Sign (integer16, returns -1 if A < 0, 0 if A is zero, and +1 if A > 0) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Sign (Integer16)"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 SignOfInteger16(FUEXTMIntegers_Int16 A);

	/** Returns the minimum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Min (Integer16)", CompactNodeTitle = "MIN", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 MinInt16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns the maximum value of A and B */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Max (Integer16)", CompactNodeTitle = "MAX", CommutativeAssociativeBinaryOperator = "true"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 MaxInt16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B);

	/** Returns Value clamped to be between A and B (inclusive) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Clamp (Integer16)"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 ClampInt16(FUEXTMIntegers_Int16 Value, FUEXTMIntegers_Int16 Min, FUEXTMIntegers_Int16 Max);

	/** Returns the absolute (positive) value of A */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "Absolute (Integer16)", CompactNodeTitle = "ABS"), Category="Math|Integer16")
	static FUEXTMIntegers_Int16 Abs_Int16(FUEXTMIntegers_Int16 A);
	
	//
	// Byte conversion functions
	//
	
	/** Converts a byte to an unsigned 16 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer16 (Byte)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt16 Conv_ByteToUInt16(uint8 InByte);

	/** Converts a byte to an unsigned integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer (Byte)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt32 Conv_ByteToUInt(uint8 InByte);

	/** Converts a byte to an unsigned 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer64 (Byte)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt64 Conv_ByteToUInt64(uint8 InByte);

	/** Converts a byte to a 8 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer8 (Byte)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_Int8 Conv_ByteToInt8(uint8 InByte);

	/** Converts a byte to an 16 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer16 (Byte)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_Int16 Conv_ByteToInt16(uint8 InByte);
	
	//
	// Unsigned Integer16 conversion functions
	//

	/** Converts an unsigned 16 bit integer to a byte (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Byte (Unsigned Integer16)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static uint8 Conv_UInt16ToByte(FUEXTMIntegers_UInt16 InInt);
	
	/** Converts an unsigned 16 bit integer to an unsigned integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer (Unsigned Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt32 Conv_UInt16ToUInt(FUEXTMIntegers_UInt16 InInt);
	
	/** Converts an unsigned 16 bit integer to an unsigned 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer64 (Unsigned Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt64 Conv_UInt16ToUInt64(FUEXTMIntegers_UInt16 InInt);

	/** Converts an unsigned 16 bit integer to a 8 bit integer (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer8 (Unsigned Integer16)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int8 Conv_UInt16ToInt8(FUEXTMIntegers_UInt16 InInt);

	/** Converts an unsigned 16 bit integer to a 16 bit integer */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer16 (Unsigned Integer16)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int16 Conv_UInt16ToInt16(FUEXTMIntegers_UInt16 InInt);

	/** Converts an unsigned 16 bit integer to an integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer (Unsigned Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int32 Conv_UInt16ToInt(FUEXTMIntegers_UInt16 InInt);

	/** Converts an unsigned 16 bit integer to a 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer64 (Unsigned Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int64 Conv_UInt16ToInt64(FUEXTMIntegers_UInt16 InInt);

	//
	// Unsigned Integer conversion functions
	//
	
	/** Converts an unsigned integer to a byte (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Byte (Unsigned Integer)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static uint8 Conv_UIntToByte(FUEXTMIntegers_UInt32 InInt);

	/** Converts an unsigned integer to an unsigned 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Unsigned Integer16 (Unsigned Integer)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_UInt16 Conv_UIntToUInt16(FUEXTMIntegers_UInt32 InInt);

	/** Converts an unsigned integer to an unsigned 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer64 (Unsigned Integer)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt64 Conv_UIntToUInt64(FUEXTMIntegers_UInt32 InInt);

	/** Converts an unsigned integer to a 8 bit integer (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer8 (Unsigned Integer)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int8 Conv_UIntToInt8(FUEXTMIntegers_UInt32 InInt);

	/** Converts an unsigned integer to a 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer16 (Unsigned Integer)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int16 Conv_UIntToInt16(FUEXTMIntegers_UInt32 InInt);

	/** Converts an unsigned integer to an integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer (Unsigned Integer)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int32 Conv_UIntToInt(FUEXTMIntegers_UInt32 InInt);
	
	/** Converts an unsigned integer to a 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer64 (Unsigned Integer)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int64 Conv_UIntToInt64(FUEXTMIntegers_UInt32 InInt);

	//
	// Unsigned Integer64 conversion functions
	//

	/** Converts an unsigned 64 bit integer to a byte (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Byte (Unsigned Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static uint8 Conv_UInt64ToByte(FUEXTMIntegers_UInt64 InInt);
	
	/** Converts an unsigned 64 bit integer to an unsignef 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Unsigned Integer16 (Unsigned Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_UInt16 Conv_UInt64ToUInt16(FUEXTMIntegers_UInt64 InInt);

	/** Converts an usigned 64 bit integer to an unsigned integer (if the integer is too large, returns the low 32 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Unsigned Integer (Unsigned Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_UInt32 Conv_UInt64ToUInt(FUEXTMIntegers_UInt64 InInt);

	/** Converts an unsigned 64 bit integer to a 64 bit integer */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer64 (Unsigned Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static int64 Conv_UInt64ToInt64(FUEXTMIntegers_UInt64 InInt);

	/** Converts an unsigned 64 bit integer to a 8 bit integer (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer8 (Unsigned Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int8 Conv_UInt64ToInt8(FUEXTMIntegers_UInt64 InInt);

	/** Converts an unsigned 64 bit integer to a 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer16 (Unsigned Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int16 Conv_UInt64ToInt16(FUEXTMIntegers_UInt64 InInt);

	/** Converts an usigned 64 bit integer to an integer (if the integer is too large, returns the low 32 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer (Unsigned Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static int32 Conv_UInt64ToInt(FUEXTMIntegers_UInt64 InInt);

	//
	// Integer8 conversion functions
	//

	/** Converts a 8 bit integer to a byte */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Byte (Integer8)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static uint8 Conv_Int8ToByte(FUEXTMIntegers_Int8 InInt);

	/** Converts a 8 bit integer to an unsigned 16 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer16 (Integer8)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt16 Conv_Int8ToUInt16(FUEXTMIntegers_Int8 InInt);

	/** Converts a 8 bit integer to an unsigned integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer (Integer8)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt32 Conv_Int8ToUInt(FUEXTMIntegers_Int8 InInt);

	/** Converts a 8 bit integer to an unsigned 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer64 (Integer8)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt64 Conv_Int8ToUInt64(FUEXTMIntegers_Int8 InInt);

	/** Converts a 8 bit integer to a 16 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer16 (Integer8)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_Int16 Conv_Int8ToInt16(FUEXTMIntegers_Int8 InInt);
	
	/** Converts a 8 bit integer to an integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer (Integer8)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int32 Conv_Int8ToInt(FUEXTMIntegers_Int8 InInt);

	/** Converts a 8 bit integer to a 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer64 (Integer8)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int64 Conv_Int8ToInt64(FUEXTMIntegers_Int8 InInt);
	
	//
	// Integer16 conversion functions
	//

	/** Converts a 16 bit integer to a byte (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Byte (Integer16)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static uint8 Conv_Int16ToByte(FUEXTMIntegers_Int16 InInt);

	/** Converts a 16 bit integer to an unsigned 16 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer16 (Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt16 Conv_Int16ToUInt16(FUEXTMIntegers_Int16 InInt);
	
	/** Converts a 16 bit integer to an unsigned integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer (Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt32 Conv_Int16ToUInt(FUEXTMIntegers_Int16 InInt);

	/** Converts a 16 bit integer to an unsigned 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer64 (Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt64 Conv_Int16ToUInt64(FUEXTMIntegers_Int16 InInt);

	/** Converts a 16 bit integer to a 8 bit integer (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer8 (Integer16)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int8 Conv_Int16ToInt8(FUEXTMIntegers_Int16 InInt);

	/** Converts a 16 bit integer to an integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer (Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int32 Conv_Int16ToInt(FUEXTMIntegers_Int16 InInt);

	/** Converts a 16 bit integer to a 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Integer64 (Integer16)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static int64 Conv_Int16ToInt64(FUEXTMIntegers_Int16 InInt);

	//
	// Integer conversion functions
	//
	
	/** Converts a integer to an unsigned 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Unsigned Integer16 (Integer)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_UInt16 Conv_IntToUInt16(int32 InInt);

	/** Converts an integer to an unsigned integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer (Integer)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt32 Conv_IntToUInt(int32 InInt);

	/** Converts an integer to an unsigned 64 bit integer */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "To Unsigned Integer64 (Integer)", CompactNodeTitle = "->", Keywords = "cast convert", BlueprintAutocast), Category = "Math|Conversions")
	static FUEXTMIntegers_UInt64 Conv_IntToUInt64(int32 InInt);
	
	/** Converts an integer to a 8 bit integer (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer8 (Integer)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int8 Conv_IntToInt8(int32 InInt);

	/** Converts a integer to a 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer16 (Integer)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int16 Conv_IntToInt16(int32 InInt);

	//
	// Integer64 conversion functions
	//

	/** Converts a 64 bit integer to an unsigned 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Unsigned Integer16 (Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_UInt16 Conv_Int64ToUInt16(int64 InInt);

	/** Converts a 64 bit integer to an unsigned integer (if the integer is too large, returns the low 32 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Unsigned Integer (Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_UInt32 Conv_Int64ToUInt(int64 InInt);

	/** Converts a 64 bit integer to an unsigned 64 bit integer */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Unsigned Integer64 (Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_UInt64 Conv_Int64ToUInt64(int64 InInt);
	
	/** Converts a 64 bit integer to a 8 bit integer (if the integer is too large, returns the low 8 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer8 (Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int8 Conv_Int64ToInt8(int64 InInt);

	/** Converts a 64 bit integer to a 16 bit integer (if the integer is too large, returns the low 16 bits) */
	UFUNCTION(BlueprintPure, meta=(DisplayName = "To Integer16 (Integer64)", CompactNodeTitle = "->", Keywords="cast convert", BlueprintAutocast), Category="Math|Conversions")
	static FUEXTMIntegers_Int16 Conv_Int64ToInt16(int64 InInt);

private:
	
	//
	// Report error functions
	//
	
	static void ReportError_Divide_UInt16UInt16();
	
	static void ReportError_Divide_UIntUInt();
	
	static void ReportError_Divide_UInt64UInt64();
	
	static void ReportError_Divide_Int8Int8();

	static void ReportError_Divide_Int16Int16();

	static void ReportError_Percent_UInt16UInt16();

	static void ReportError_Percent_UIntUInt();

	static void ReportError_Percent_UInt64UInt64();

	static void ReportError_Percent_Int8Int8();

	static void ReportError_Percent_Int16Int16();
	
};