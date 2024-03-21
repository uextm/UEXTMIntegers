// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "IPropertyTypeCustomization.h"

template<typename WrapperType, typename ValueType>
class TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct final : public IPropertyTypeCustomization
{

private:

	TSharedPtr<IPropertyHandle> Internal_StructPropertyHandle;
	
public:

	static TSharedRef<IPropertyTypeCustomization> NewInstance();
	
	TOptional<ValueType> GetValue() const;

	void SetValue(ValueType InValue, ETextCommit::Type CommitType);


/** IPropertyTypeCustomization Implementation
**************************************************************/
	
public:
	
	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	
	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	
};

#include "UEXTMIntegers/Editor/PropertyEditor/PropertyTypeCustomizations/Templates/PropertyTypeCustomization_UEXTMIntegers_WrapperStruct.tpp"
