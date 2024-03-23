// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#define WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, ARITHMETIC_OPERATOR) \
	WRAPPER_TYPE& operator ARITHMETIC_OPERATOR##=(const WRAPPER_TYPE& Other) { \
		Set(Get() ARITHMETIC_OPERATOR Other.Get()); \
		return *this; \
	}

#define WRAPPER_PROPERTIES(VALUE_TYPE) \
	VALUE_TYPE Internal_Value= 0; \
	bool bInternal_UseValueString = true;

#define WRAPPER_BODY(WRAPPER_TYPE, VALUE_TYPE, INTERNAL_VALUE_STRING) \
	WRAPPER_TYPE() = default; \
	WRAPPER_TYPE(const VALUE_TYPE Value) { \
		Set(Value); \
	} \
	WRAPPER_TYPE(const FString& ValueString) { \
		SetByString(ValueString); \
	} \
	operator VALUE_TYPE() const	{ \
		return Get(); \
	} \
	WRAPPER_TYPE& operator=(const WRAPPER_TYPE& Other) { \
		Internal_Value = Other.Internal_Value; \
		bInternal_UseValueString = Other.bInternal_UseValueString; \
		INTERNAL_VALUE_STRING = Other.INTERNAL_VALUE_STRING; \
		return *this; \
	} \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, +) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, -) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, *) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, /) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, %) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, &) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, |) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, ^) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, <<) \
	WRAPPER_ARITHMETIC_ASSIGNMENT_OPERATOR(WRAPPER_TYPE, >>) \
	friend FArchive& operator<<(FArchive& Ar, WRAPPER_TYPE& Wrapper) { \
		Wrapper.Serialize(Ar); \
		return Ar; \
	} \
	bool Identical(const WRAPPER_TYPE* Other, const uint32 PortFlags) const { \
		return Other && Get() == Other->Get(); \
	} \
	VALUE_TYPE Get() const { \
		if(bInternal_UseValueString) \
		{ \
			VALUE_TYPE Parsed; \
			LexFromString(Parsed, *INTERNAL_VALUE_STRING); \
			return Parsed; \
		} \
		return Internal_Value; \
	} \
	void Set(const VALUE_TYPE Value) { \
		Internal_Value = Value; \
		bInternal_UseValueString = false; \
		INTERNAL_VALUE_STRING = LexToString(Internal_Value); \
	} \
	void SetByString(const FString& ValueString) { \
		LexFromString(Internal_Value, *ValueString); \
		bInternal_UseValueString = false; \
		INTERNAL_VALUE_STRING = ValueString; \
	} \
	bool Serialize(FArchive& Ar) { \
		Ar << Internal_Value; \
		if(!Ar.IsSaving()) { Set(Internal_Value); } \
		return true; \
	} \
	bool ExportTextItem(FString& ValueStr, WRAPPER_TYPE const& DefaultValue, class UObject* Parent, int32 PortFlags, class UObject* ExportRootScope) const { \
		ValueStr += INTERNAL_VALUE_STRING; \
		return true; \
	} \
	bool ImportTextItem(const TCHAR*& Buffer, int32 PortFlags, UObject* Parent, FOutputDevice* ErrorText, FArchive* InSerializingArchive = nullptr) { \
		const FString ValueString = Buffer; \
		Buffer += FCString::Strlen(Buffer); \
		SetByString(ValueString); \
		return true; \
	}

#define WRAPPER_TRAITS(WRAPPER_TYPE) \
	template<> struct TStructOpsTypeTraits<WRAPPER_TYPE> : public TStructOpsTypeTraitsBase2<WRAPPER_TYPE> { \
		enum { WithCopy = true, WithIdentical=true, WithSerializer = true, WithExportTextItem = true, WithImportTextItem = true }; \
	};