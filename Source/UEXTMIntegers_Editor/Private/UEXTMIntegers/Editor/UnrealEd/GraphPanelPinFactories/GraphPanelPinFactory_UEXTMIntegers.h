// MIT License (See LICENSE.md file for a copy of the license terms)
// Copyright (c) 2024 UEXTM.com

#pragma once

#include "EdGraphUtilities.h"

struct FGraphPanelPinFactory_UEXTMIntegers final : public FGraphPanelPinFactory
{

/** FGraphPanelPinFactory Implementation
**************************************************************/
public:
	
	virtual TSharedPtr<SGraphPin> CreatePin(UEdGraphPin* InPin) const override;
};
