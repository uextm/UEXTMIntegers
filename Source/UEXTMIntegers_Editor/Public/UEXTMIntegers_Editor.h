// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "Modules/ModuleInterface.h"

class UEXTMINTEGERS_EDITOR_API FUEXTMIntegers_EditorModule final : public IModuleInterface
{
	
/** IModuleInterface Implementation
**************************************************************/

public:
	
	virtual void StartupModule() override;
	
	virtual void ShutdownModule() override;
	
};
