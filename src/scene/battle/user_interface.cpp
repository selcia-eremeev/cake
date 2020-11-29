#pragma once

#include "app/app.hpp"
#include "scene/battle/user_interface.hpp"

int UserInterface::Initialize(void) {
	return 0;
}

int UserInterface::Update(void) {
	return 0;
}

int UserInterface::Render(void) {
	DxLib::DrawBoxAA(COMMAND_DRAW_BOX_X1, COMMAND_DRAW_BOX_Y1, COMMAND_DRAW_BOX_X2, COMMAND_DRAW_BOX_Y2, GetColor(255, 255, 255), FALSE, COMMAND_DRAW_BOX_THICKNESS);
	return 0;
}

int UserInterface::Terminate(void) {
	return 0;
}