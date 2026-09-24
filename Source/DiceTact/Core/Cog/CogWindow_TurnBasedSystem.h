#pragma once
#include "CogCommon.h"

#if ENABLE_COG
#include "CogWindow.h"

namespace CogColors
{
	static const ImVec4 Green = ImVec4{0,1,0,1};
	static const ImVec4 Yellow = ImVec4{1,1,0,1};
	static const ImVec4 Red = ImVec4{1,0,0,1};
	static const ImVec4 Cyan = ImVec4{0,1,1,1};
	static const ImVec4 Turquoise = ImVec4{0.1015625f, 0.737254f, 0.61176470588f,1};
}

class FCogWindow_TurnBasedSystem : public FCogWindow
{
public:
	virtual void Initialize() override;
	virtual void RenderHelp() override;

	virtual void RenderContent() override;
};
#endif