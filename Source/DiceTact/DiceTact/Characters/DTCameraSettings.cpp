#include "DTCameraSettings.h"

UDTCameraSettings::UDTCameraSettings()
{
	Hero.Distance = 1200.0f;
	Hero.FocusHeight = 80.0f;
	ThrowAim.Distance = 1100.0f;
	ThrowAim.Pitch = -50.0f;
	ThrowAim.ViewPitchOffset = 8.0f;
	ThrowAim.FocusHeight = 80.0f;
	ThrowAim.SocketOffset = FVector(0.0f, 200.0f, 0.0f);
	DiceFollow.Distance = 1100.0f;
	DiceFollow.Pitch = -45.0f;
	DiceFollow.FocusHeight = 50.0f;
}
