#pragma once

#include "scene/scene.hpp"

class TitleScene : public Scene {
public:
	virtual int Initialize(void);
	virtual int Update(void);
	virtual int Render(void);
	virtual int Terminate(void);

	static TitleScene* GetInstance(void) {
		static TitleScene instance;
		return &instance;
	}
};

#define TITLESCENE TitleScene::GetInstance()