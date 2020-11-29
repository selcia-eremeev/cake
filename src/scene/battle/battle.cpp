#pragma once

#include "app/app.hpp"
#include "scene/battle/battle.hpp"
#include "scene/battle/user_interface.hpp"

int Battle::Initialize(void) {
	UI->Initialize();
	return 0;
}

int Battle::Update(void) {
	UI->Update();
	return 0;
}

int Battle::Render(void) {
	UI->Render();
	return 0;
}

int Battle::Terminate(void) {
	UI->Terminate();
	return 0;
}