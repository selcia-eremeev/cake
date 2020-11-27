#pragma once

#include <DxLib.h>
#include "app.hpp"

int App::Initialize(void) {
	DxLib::SetOutApplicationLogValidFlag(FALSE);
	DxLib::ChangeWindowMode(TRUE);
	// DxLib::SetWindowTextA();
	DxLib::DxLib_Init();
	DxLib::SetGraphMode(640, 480, 12);
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	return 0;
}

int App::Update(void) {

	return 0;
}

int App::Render(void) {

	return 0;
}

int App::Terminate(void) {
	DxLib::DxLib_End();
	return 0;
}
