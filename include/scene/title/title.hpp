#pragma once

#include "scene/scene.hpp"

class Title : public Scene {
public:
	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;

	static Title* GetInstance(void) {
		static Title instance;
		return &instance;
	}
};

#define TITLE Title::GetInstance()