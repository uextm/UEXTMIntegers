// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#include "UEXTMIntegers_Editor.h"

#include "EdGraphUtilities.h"
#include "PropertyEditorModule.h"

#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt16.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt32.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_UInt64.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int8.h"
#include "UEXTMIntegers/UStructs/UEXTMIntegers_Int16.h"
#include "UEXTMIntegers/Editor/PropertyEditor/PropertyTypeCustomizations/Templates/PropertyTypeCustomization_UEXTMIntegers_WrapperStruct.h"
#include "UEXTMIntegers/Editor/UnrealEd/GraphPanelPinFactories/GraphPanelPinFactory_UEXTMIntegers.h"

void FUEXTMIntegers_EditorModule::StartupModule()
{
	FEdGraphUtilities::RegisterVisualPinFactory(MakeShared<FGraphPanelPinFactory_UEXTMIntegers>());
	
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyModule.RegisterCustomPropertyTypeLayout(FUEXTMIntegers_UInt16::StaticStruct()->GetFName(), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<FUEXTMIntegers_UInt16, uint16>::NewInstance));
	PropertyModule.RegisterCustomPropertyTypeLayout(FUEXTMIntegers_UInt32::StaticStruct()->GetFName(), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<FUEXTMIntegers_UInt32, uint32>::NewInstance));
	PropertyModule.RegisterCustomPropertyTypeLayout(FUEXTMIntegers_UInt64::StaticStruct()->GetFName(), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<FUEXTMIntegers_UInt64, uint64>::NewInstance));
	PropertyModule.RegisterCustomPropertyTypeLayout(FUEXTMIntegers_Int8::StaticStruct()->GetFName(), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<FUEXTMIntegers_Int8, int8>::NewInstance));
	PropertyModule.RegisterCustomPropertyTypeLayout(FUEXTMIntegers_Int16::StaticStruct()->GetFName(), FOnGetPropertyTypeCustomizationInstance::CreateStatic(&TPropertyTypeCustomization_UEXTMIntegers_WrapperStruct<FUEXTMIntegers_Int16, int16>::NewInstance));

	PropertyModule.NotifyCustomizationModuleChanged();
}

void FUEXTMIntegers_EditorModule::ShutdownModule()
{
	if (!UObjectInitialized())
	{
		return;
	}
	
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyModule.UnregisterCustomPropertyTypeLayout(FUEXTMIntegers_UInt16::StaticStruct()->GetFName());
	PropertyModule.UnregisterCustomPropertyTypeLayout(FUEXTMIntegers_UInt32::StaticStruct()->GetFName());
	PropertyModule.UnregisterCustomPropertyTypeLayout(FUEXTMIntegers_UInt64::StaticStruct()->GetFName());
	PropertyModule.UnregisterCustomPropertyTypeLayout(FUEXTMIntegers_Int8::StaticStruct()->GetFName());
	PropertyModule.UnregisterCustomPropertyTypeLayout(FUEXTMIntegers_Int16::StaticStruct()->GetFName());

	PropertyModule.NotifyCustomizationModuleChanged();
}
	
IMPLEMENT_MODULE(FUEXTMIntegers_EditorModule, UEXTMINTEGERS_EDITOR)