// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#include "UEXTMIntegers/Kismet/BPLibraries/BPLibrary_UEXTMIntegers_KismetSystem.h"

FUEXTMIntegers_UInt16 UBPLibrary_UEXTMIntegers_KismetSystem::MakeLiteralUInt16(FUEXTMIntegers_UInt16 Value)
{
	return Value;
}

FUEXTMIntegers_UInt32 UBPLibrary_UEXTMIntegers_KismetSystem::MakeLiteralUInt(FUEXTMIntegers_UInt32 Value)
{
	return Value;
}

FUEXTMIntegers_UInt64 UBPLibrary_UEXTMIntegers_KismetSystem::MakeLiteralUInt64(FUEXTMIntegers_UInt64 Value)
{
	return Value;
}

FUEXTMIntegers_Int8 UBPLibrary_UEXTMIntegers_KismetSystem::MakeLiteralInt8(FUEXTMIntegers_Int8 Value)
{
	return Value;
}

FUEXTMIntegers_Int16 UBPLibrary_UEXTMIntegers_KismetSystem::MakeLiteralInt16(FUEXTMIntegers_Int16 Value)
{
	return Value;
}

void UBPLibrary_UEXTMIntegers_KismetSystem::SetUInt16PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_UInt16 Value)
{
	if (Object != NULL)
	{
		FUInt16Property* IntProp = FindFProperty<FUInt16Property>(Object->GetClass(), PropertyName);
		if (IntProp != NULL)
		{
			IntProp->SetPropertyValue_InContainer(Object, Value);
		}
	}
}

void UBPLibrary_UEXTMIntegers_KismetSystem::SetUIntPropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_UInt32 Value)
{
	if(Object != NULL)
	{
		FUInt32Property* IntProp = FindFProperty<FUInt32Property>(Object->GetClass(), PropertyName);
		if(IntProp != NULL)
		{
			IntProp->SetPropertyValue_InContainer(Object, Value);
		}		
	}
}

void UBPLibrary_UEXTMIntegers_KismetSystem::SetUInt64PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_UInt64 Value)
{
	if (Object != NULL)
	{
		FUInt64Property* IntProp = FindFProperty<FUInt64Property>(Object->GetClass(), PropertyName);
		if (IntProp != NULL)
		{
			IntProp->SetPropertyValue_InContainer(Object, Value);
		}
	}
}

void UBPLibrary_UEXTMIntegers_KismetSystem::SetInt8PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_Int8 Value)
{
	if (Object != NULL)
	{
		FInt8Property* IntProp = FindFProperty<FInt8Property>(Object->GetClass(), PropertyName);
		if (IntProp != NULL)
		{
			IntProp->SetPropertyValue_InContainer(Object, Value);
		}
	}
}

void UBPLibrary_UEXTMIntegers_KismetSystem::SetInt16PropertyByName(UObject* Object, FName PropertyName, FUEXTMIntegers_Int16 Value)
{
	if (Object != NULL)
	{
		FInt16Property* IntProp = FindFProperty<FInt16Property>(Object->GetClass(), PropertyName);
		if (IntProp != NULL)
		{
			IntProp->SetPropertyValue_InContainer(Object, Value);
		}
	}
}