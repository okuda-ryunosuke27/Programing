#pragma once
#include "InputControl.h"

class InputControl
{
private:
	static bool now_button[16];
	static bool old_button[16];
	static float trigger[2];
	static Vector2D stick[2];

public:
	static void Update();

	//ƒ{ƒ^ƒ““ü—Íæ“¾ˆ—
	static bool GetButton(int button);
	static bool GetButtonDown(int button);
};

