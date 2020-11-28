#pragma once

#include <DxLib.h>

#include "app/app.hpp"
#include "fps/fps.hpp"


int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_  HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd) {

	APP->Initialize();

	while (!DxLib::ProcessMessage() && !DxLib::ScreenFlip() && !DxLib::ClearDrawScreen() && !APP->UpdateKeyStateAll()) {
		APP->Update();
		APP->Render();
	}

	APP->Terminate();

	return 0;
}