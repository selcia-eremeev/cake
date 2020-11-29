#pragma once

#include "scene/scene.hpp"

constexpr auto COMMAND_DRAW_BOX_X1 = 40;
constexpr auto COMMAND_DRAW_BOX_Y1 = 270;
constexpr auto COMMAND_DRAW_BOX_X2 = 600;
constexpr auto COMMAND_DRAW_BOX_Y2 = 410;
constexpr auto COMMAND_DRAW_BOX_THICKNESS = 5;

class UserInterface : public Scene {
public:
	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;

	static UserInterface* GetInstance(void) {
		static UserInterface instance;
		return &instance;
	}
};

#define UI UserInterface::GetInstance()