#pragma once
#include "CogCommon.h"

#if ENABLE_COG
#include "CogWindow.h"

class UDiceTactGameInstance;

class FDTCogWindow_SaveSystem : public FCogWindow
{
public:
	
	virtual void Initialize() override;
	virtual void RenderHelp() override;

	virtual void RenderContent() override;

protected:

	const UDiceTactGameInstance* GameInstance = nullptr;
	
};

#endif