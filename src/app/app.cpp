#pragma once

#include <DxLib.h>
#include "app/app.hpp"
#include "scene/titleScene.hpp"

int App::UpdateKeyStateAll(void) {
	char Temp[256];
	DxLib::GetHitKeyStateAll(Temp);
	for (int i = 0; i < 256; i++) {
		if (Temp[i] != 0) {
			APP->KEY[i]++;
		} else {
			APP->KEY[i] = 0;
		}
	}
	return 0;
}

int App::Initialize(void) {
	DxLib::SetOutApplicationLogValidFlag(FALSE);
	DxLib::ChangeWindowMode(TRUE);
	DxLib::SetWindowTextA(APP->NAME.c_str());
	DxLib::DxLib_Init();
	DxLib::SetAlwaysRunFlag(TRUE);
	DxLib::SetGraphMode(APP->WIDTH, APP->HEIGHT, APP->DEPTH);
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	return 0;
}

int App::Update(void) {
	TITLESCENE->Update();
	return 0;
}

int App::Render(void) {
	TITLESCENE->Render();
	return 0;
}

int App::Terminate(void) {
	DxLib::DxLib_End();
	return 0;
}
