#pragma once

#include <DxLib.h>
#include "app/app.hpp"
#include "scene/title.hpp"
#include "scene/battle.hpp"

int App::UpdateKeyStateAll(void) {
	char tempKey[256];
	DxLib::GetHitKeyStateAll(tempKey);
	for (int i = 0; i < 256; i++) {
		if (tempKey[i] != 0) {
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
	switch (APP->STATE) {
	case STATE_TITLE:
		TITLE->Update();
		break;
	case STATE_BATTLE:
		BATTLE->Update();
		break;
	}
	return 0;
}

int App::Render(void) {
	switch (APP->STATE) {
	case STATE_TITLE:
		DxLib::DrawFormatString(0, 0, DxLib::GetColor(255, 255, 255), "Scene: Title");
		TITLE->Render();
		break;
	case STATE_BATTLE:
		DxLib::DrawFormatString(0, 0, DxLib::GetColor(255, 255, 255), "Scene: Battle");
		BATTLE->Render();
		break;
	}
	return 0;
}

int App::Terminate(void) {
	DxLib::DxLib_End();
	return 0;
}
