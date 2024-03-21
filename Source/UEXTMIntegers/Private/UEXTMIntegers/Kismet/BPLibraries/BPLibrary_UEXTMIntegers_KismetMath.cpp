// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#include "UEXTMIntegers/Kismet/BPLibraries/BPLibrary_UEXTMIntegers_KismetMath.h"

#define LOCTEXT_NAMESPACE "UBPLibrary_UEXTMIntegers_KismetMath"

const FName DivideByZeroWarning = FName("DivideByZeroWarning");

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Multiply_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A * B;
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Divide_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	if (B == 0)
	{
		ReportError_Divide_UInt16UInt16();
		return 0;
	}

	return (A / B);
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Percent_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	if (B == 0)
	{
		ReportError_Percent_UInt16UInt16();
		return 0;
	}

	return (A % B);
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Add_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A + B;
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Subtract_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A - B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Less_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A < B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Greater_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A > B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::LessEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A <= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::GreaterEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A >= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::EqualEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A == B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::NotEqual_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A != B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::InRange_UInt16UInt16(FUEXTMIntegers_UInt16 Value, FUEXTMIntegers_UInt16 Min, FUEXTMIntegers_UInt16 Max, bool InclusiveMin, bool InclusiveMax)
{
	return ((InclusiveMin ? (Value >= Min) : (Value > Min)) && (InclusiveMax ? (Value <= Max) : (Value < Max)));
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::And_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A & B;
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Xor_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A ^ B;
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Or_UInt16UInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return A | B;
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Not_UInt16(FUEXTMIntegers_UInt16 A)
{
	return ~A;
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::MinUInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return FMath::Min(A, B);
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::MaxUInt16(FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return FMath::Max(A, B);
}
 
FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::ClampUInt16(FUEXTMIntegers_UInt16 V, FUEXTMIntegers_UInt16 A, FUEXTMIntegers_UInt16 B)
{
	return FMath::Clamp(V, A, B);
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Multiply_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A * B;
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Divide_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	if (B == 0)
	{
		ReportError_Divide_UIntUInt();
		return 0;
	}

	return (A / B);
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Percent_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	if (B == 0)
	{
		ReportError_Percent_UIntUInt();
		return 0;
	}

	return (A % B);
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Add_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A + B;
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Subtract_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A - B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Less_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A < B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Greater_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A > B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::LessEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A <= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::GreaterEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A >= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::EqualEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A == B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::NotEqual_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A != B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::InRange_UIntUInt(FUEXTMIntegers_UInt32 Value, FUEXTMIntegers_UInt32 Min, FUEXTMIntegers_UInt32 Max, bool InclusiveMin, bool InclusiveMax)
{
	return ((InclusiveMin ? (Value >= Min) : (Value > Min)) && (InclusiveMax ? (Value <= Max) : (Value < Max)));
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::And_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A & B;
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Xor_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A ^ B;
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Or_UIntUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return A | B;
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Not_UInt(FUEXTMIntegers_UInt32 A)
{
	return ~A;
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::MinUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return FMath::Min(A, B);
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::MaxUInt(FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return FMath::Max(A, B);
}
 
FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::ClampUInt(FUEXTMIntegers_UInt32 V, FUEXTMIntegers_UInt32 A, FUEXTMIntegers_UInt32 B)
{
	return FMath::Clamp(V, A, B);
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Multiply_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A * B;
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Divide_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	if (B == 0)
	{
		ReportError_Divide_UInt64UInt64();
		return 0;
	}

	return (A / B);
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Percent_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	if (B == 0)
	{
		ReportError_Percent_UInt64UInt64();
		return 0;
	}

	return (A % B);
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Add_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A + B;
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Subtract_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A - B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Less_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A < B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Greater_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A > B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::LessEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A <= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::GreaterEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A >= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::EqualEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A == B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::NotEqual_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A != B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::InRange_UInt64UInt64(FUEXTMIntegers_UInt64 Value, FUEXTMIntegers_UInt64 Min, FUEXTMIntegers_UInt64 Max, bool InclusiveMin, bool InclusiveMax)
{
	return ((InclusiveMin ? (Value >= Min) : (Value > Min)) && (InclusiveMax ? (Value <= Max) : (Value < Max)));
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::And_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A & B;
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Xor_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A ^ B;
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Or_UInt64UInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return A | B;
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Not_UInt64(FUEXTMIntegers_UInt64 A)
{
	return ~A;
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::MinUInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return FMath::Min(A, B);
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::MaxUInt64(FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return FMath::Max(A, B);
}
 
FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::ClampUInt64(FUEXTMIntegers_UInt64 V, FUEXTMIntegers_UInt64 A, FUEXTMIntegers_UInt64 B)
{
	return FMath::Clamp(V, A, B);
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Multiply_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A * B;
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Divide_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	if (B == 0)
	{
		ReportError_Divide_Int8Int8();
		return 0;
	}

	return (A / B);
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Percent_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	if (B == 0)
	{
		ReportError_Percent_Int8Int8();
		return 0;
	}

	return (A % B);
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Add_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A + B;
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Subtract_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A - B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Less_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A < B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Greater_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A > B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::LessEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A <= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::GreaterEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A >= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::EqualEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A == B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::NotEqual_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A != B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::InRange_Int8Int8(FUEXTMIntegers_Int8 Value, FUEXTMIntegers_Int8 Min, FUEXTMIntegers_Int8 Max, bool InclusiveMin, bool InclusiveMax)
{
	return ((InclusiveMin ? (Value >= Min) : (Value > Min)) && (InclusiveMax ? (Value <= Max) : (Value < Max)));
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::And_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A & B;
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Xor_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A ^ B;
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Or_Int8Int8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return A | B;
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Not_Int8(FUEXTMIntegers_Int8 A)
{
	return ~A;
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::SignOfInteger8(FUEXTMIntegers_Int8 A)
{
	return FMath::Sign<int8>(A);
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::MinInt8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return FMath::Min(A, B);
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::MaxInt8(FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return FMath::Max(A, B);
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::ClampInt8(FUEXTMIntegers_Int8 V, FUEXTMIntegers_Int8 A, FUEXTMIntegers_Int8 B)
{
	return FMath::Clamp(V, A, B);
}
 
FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Abs_Int8(FUEXTMIntegers_Int8 A)
{
	return FMath::Abs(A.Get());
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Multiply_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A * B;
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Divide_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	if (B == 0)
	{
		ReportError_Divide_Int16Int16();
		return 0;
	}

	return (A / B);
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Percent_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	if (B == 0)
	{
		ReportError_Percent_Int16Int16();
		return 0;
	}

	return (A % B);
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Add_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A + B;
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Subtract_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A - B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Less_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A < B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::Greater_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A > B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::LessEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A <= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::GreaterEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A >= B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::EqualEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A == B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::NotEqual_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A != B;
}
 
bool UBPLibrary_UEXTMIntegers_KismetMath::InRange_Int16Int16(FUEXTMIntegers_Int16 Value, FUEXTMIntegers_Int16 Min, FUEXTMIntegers_Int16 Max, bool InclusiveMin, bool InclusiveMax)
{
	return ((InclusiveMin ? (Value >= Min) : (Value > Min)) && (InclusiveMax ? (Value <= Max) : (Value < Max)));
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::And_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A & B;
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Xor_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A ^ B;
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Or_Int16Int16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return A | B;
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Not_Int16(FUEXTMIntegers_Int16 A)
{
	return ~A;
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::SignOfInteger16(FUEXTMIntegers_Int16 A)
{
	return FMath::Sign<int16>(A);
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::MinInt16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return FMath::Min(A, B);
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::MaxInt16(FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return FMath::Max(A, B);
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::ClampInt16(FUEXTMIntegers_Int16 V, FUEXTMIntegers_Int16 A, FUEXTMIntegers_Int16 B)
{
	return FMath::Clamp(V, A, B);
}
 
FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Abs_Int16(FUEXTMIntegers_Int16 A)
{
	return FMath::Abs(A.Get());
}

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_ByteToUInt16(uint8 InByte)
{
	return (uint16)InByte;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_ByteToUInt(uint8 InByte)
{
	return (uint32)InByte;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_ByteToUInt64(uint8 InByte)
{
	return (uint64)InByte;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_ByteToInt8(uint8 InByte)
{
	return (int8)InByte;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_ByteToInt16(uint8 InByte)
{
	return (int16)InByte;
}

uint8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt16ToByte(FUEXTMIntegers_UInt16 InInt)
{
	return (uint8)InInt;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt16ToUInt(FUEXTMIntegers_UInt16 InInt)
{
	return (uint32)InInt;
}

int64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt16ToInt64(FUEXTMIntegers_UInt16 InInt)
{
	return (int64)InInt;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt16ToInt8(FUEXTMIntegers_UInt16 InInt)
{
	return (int8)InInt;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt16ToInt16(FUEXTMIntegers_UInt16 InInt)
{
	return (int16)InInt;
}

int32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt16ToInt(FUEXTMIntegers_UInt16 InInt)
{
	return (int32)InInt;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt16ToUInt64(FUEXTMIntegers_UInt16 InInt)
{
	return (uint64)InInt;
}

uint8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UIntToByte(FUEXTMIntegers_UInt32 InInt)
{
	return (uint8)InInt;
}

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UIntToUInt16(FUEXTMIntegers_UInt32 InInt)
{
	return (uint16)InInt;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UIntToUInt64(FUEXTMIntegers_UInt32 InInt)
{
	return (uint64)InInt;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UIntToInt8(FUEXTMIntegers_UInt32 InInt)
{
	return (int8)InInt;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UIntToInt16(FUEXTMIntegers_UInt32 InInt)
{
	return (int16)InInt;
}

int32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UIntToInt(FUEXTMIntegers_UInt32 InInt)
{
	return (int32)InInt;
}

int64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UIntToInt64(FUEXTMIntegers_UInt32 InInt)
{
	return (int64)InInt;
}

uint8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt64ToByte(FUEXTMIntegers_UInt64 InInt)
{
	return (uint8)InInt;
}

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt64ToUInt16(FUEXTMIntegers_UInt64 InInt)
{
	return (uint16)InInt;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt64ToUInt(FUEXTMIntegers_UInt64 InInt)
{
	return (uint32)InInt;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt64ToInt8(FUEXTMIntegers_UInt64 InInt)
{
	return (int8)InInt;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt64ToInt16(FUEXTMIntegers_UInt64 InInt)
{
	return (int16)InInt;
}

int32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt64ToInt(FUEXTMIntegers_UInt64 InInt)
{
	return (int32)InInt;
}

int64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_UInt64ToInt64(FUEXTMIntegers_UInt64 InInt)
{
	return (int64)InInt;
}

uint8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int8ToByte(FUEXTMIntegers_Int8 InInt)
{
	return (uint8)InInt;
}

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int8ToUInt16(FUEXTMIntegers_Int8 InInt)
{
	return (uint16)InInt;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int8ToUInt(FUEXTMIntegers_Int8 InInt)
{
	return (uint32)InInt;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int8ToUInt64(FUEXTMIntegers_Int8 InInt)
{
	return (uint64)InInt;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int8ToInt16(FUEXTMIntegers_Int8 InInt)
{
	return (int16)InInt;
}

int32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int8ToInt(FUEXTMIntegers_Int8 InInt)
{
	return (int32)InInt;
}

int64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int8ToInt64(FUEXTMIntegers_Int8 InInt)
{
	return (int64)InInt;
}

uint8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int16ToByte(FUEXTMIntegers_Int16 InInt)
{
	return (uint8)InInt;
}

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int16ToUInt16(FUEXTMIntegers_Int16 InInt)
{
	return (uint16)InInt;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int16ToUInt(FUEXTMIntegers_Int16 InInt)
{
	return (uint32)InInt;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int16ToUInt64(FUEXTMIntegers_Int16 InInt)
{
	return (uint64)InInt;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int16ToInt8(FUEXTMIntegers_Int16 InInt)
{
	return (int8)InInt;
}

int32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int16ToInt(FUEXTMIntegers_Int16 InInt)
{
	return (int32)InInt;
}

int64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int16ToInt64(FUEXTMIntegers_Int16 InInt)
{
	return (int64)InInt;
}

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_IntToUInt16(int32 InInt)
{
	return (uint16)InInt;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_IntToUInt(int32 InInt)
{
	return (uint32)InInt;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_IntToUInt64(int32 InInt)
{
	return (uint64)InInt;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_IntToInt8(int32 InInt)
{
	return (int8)InInt;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_IntToInt16(int32 InInt)
{
	return (int16)InInt;
}

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int64ToUInt16(int64 InInt)
{
	return (uint16)InInt;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int64ToUInt(int64 InInt)
{
	return (uint32)InInt;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int64ToUInt64(int64 InInt)
{
	return (uint64)InInt;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int64ToInt8(int64 InInt)
{
	return (int8)InInt;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetMath::Conv_Int64ToInt16(int64 InInt)
{
	return (int16)InInt;
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Divide_UInt16UInt16()
{
	FFrame::KismetExecutionMessage(TEXT("Divide by zero: Divide_UInt16UInt16"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Divide_UIntUInt()
{
	FFrame::KismetExecutionMessage(TEXT("Divide by zero: Divide_UIntUInt"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Divide_UInt64UInt64()
{
	FFrame::KismetExecutionMessage(TEXT("Divide by zero: Divide_UInt64UInt64"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Divide_Int8Int8()
{
	FFrame::KismetExecutionMessage(TEXT("Divide by zero: Divide_Int8Int8"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Divide_Int16Int16()
{
	FFrame::KismetExecutionMessage(TEXT("Divide by zero: Divide_Int16Int16"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Percent_UInt16UInt16()
{
	FFrame::KismetExecutionMessage(TEXT("Modulo by zero: Percent_UInt16UInt16"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Percent_UIntUInt()
{
	FFrame::KismetExecutionMessage(TEXT("Modulo by zero: Percent_UIntUInt"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Percent_UInt64UInt64()
{
	FFrame::KismetExecutionMessage(TEXT("Modulo by zero: Percent_UInt64UInt64"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Percent_Int8Int8()
{
	FFrame::KismetExecutionMessage(TEXT("Modulo by zero: Percent_Int8Int8"), ELogVerbosity::Warning, DivideByZeroWarning);
}

void UBPLibrary_UEXTMIntegers_KismetMath::ReportError_Percent_Int16Int16()
{
	FFrame::KismetExecutionMessage(TEXT("Modulo by zero: Percent_Int16Int16"), ELogVerbosity::Warning, DivideByZeroWarning);
}

#undef LOCTEXT_NAMESPACE