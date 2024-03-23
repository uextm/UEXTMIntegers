// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "PropertyEditing.h"
#include "Widgets/Input/SNumericEntryBox.h"

template<typename WrapperType, typename ValueType>
TSharedRef<IPropertyTypeCustomization> TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<WrapperType, ValueType>::NewInstance()
{
	return MakeShareable(new TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct);
}

template<typename WrapperType, typename ValueType>
TOptional<ValueType> TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<WrapperType, ValueType>::GetValue() const
{
	if(!Internal_StructPropertyHandle.IsValid())
	{
		return {};
	}
	
	void* ValueDataPtr;
	Internal_StructPropertyHandle->GetValueData(ValueDataPtr);

	if(!ValueDataPtr)
	{
		return {};
	}
	
	return static_cast<WrapperType*>(ValueDataPtr)->Get();
}

template<typename WrapperType, typename ValueType>
void TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<WrapperType, ValueType>::SetValue(ValueType InValue, ETextCommit::Type CommitType)
{
	if(!Internal_StructPropertyHandle.IsValid())
	{
		return;
	}
	
	Internal_StructPropertyHandle->SetValueFromFormattedString(LexToString(InValue));
}

template<typename WrapperType, typename ValueType>
void TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<WrapperType, ValueType>::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	Internal_StructPropertyHandle = StructPropertyHandle.ToSharedPtr();

	const bool bEnabled = StructPropertyHandle->IsEditable();

	HeaderRow.NameWidget[
		StructPropertyHandle->CreatePropertyNameWidget(StructPropertyHandle->GetPropertyDisplayName())
	]
	.IsEnabled(bEnabled);
	
	HeaderRow.ValueWidget[
		SNew(SNumericEntryBox<ValueType>)
		.Value(this, &TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct::GetValue)
		.OnValueCommitted(this, &TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct::SetValue)
	]
	.IsEnabled(bEnabled);
}

template<typename WrapperType, typename ValueType>
void TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<WrapperType, ValueType>::CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{ }