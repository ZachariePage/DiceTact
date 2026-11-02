#pragma once
#include "CogCommon.h"

#if ENABLE_COG
#include "CogWindow.h"

class FDTCogWindow_TurnBasedSystem : public FCogWindow
{
public:
	virtual void Initialize() override;
	virtual void RenderHelp() override;

	virtual void RenderContent() override;
};
#endif