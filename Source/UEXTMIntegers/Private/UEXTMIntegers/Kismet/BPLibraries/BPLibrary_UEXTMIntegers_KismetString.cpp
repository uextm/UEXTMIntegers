// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#include "UEXTMIntegers/Kismet/BPLibraries/BPLibrary_UEXTMIntegers_KismetString.h"

FString UBPLibrary_UEXTMIntegers_KismetString::Conv_UInt16ToString(FUEXTMIntegers_UInt16 InInt)
{
	return LexToString(InInt.Get());
}

FString UBPLibrary_UEXTMIntegers_KismetString::Conv_UInt32ToString(FUEXTMIntegers_UInt32 InInt)
{
	return LexToString(InInt.Get());
}

FString UBPLibrary_UEXTMIntegers_KismetString::Conv_UInt64ToString(FUEXTMIntegers_UInt64 InInt)
{
	return LexToString(InInt.Get());
}

FString UBPLibrary_UEXTMIntegers_KismetString::Conv_Int8ToString(FUEXTMIntegers_Int8 InInt)
{
	return LexToString(InInt.Get());
}

FString UBPLibrary_UEXTMIntegers_KismetString::Conv_Int16ToString(FUEXTMIntegers_Int16 InInt)
{
	return LexToString(InInt.Get());
}
