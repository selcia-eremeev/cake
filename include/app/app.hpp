#pragma once

#include <string>
#include <DxLib.h>


class App {

public:
	int			KEY[256];
	int			WIDTH	= 640;
	int			HEIGHT	= 480;
	int			DEPTH	= 16;
	std::string NAME	= "���ɗD�����P�[�L";

	int Initialize(void);
	int Update(void);
	int Render(void);
	int Terminate(void);

	int UpdateKeyStateAll(void);

	static App* GetInstance(void) {
		static App instance;
		return &instance;
	}
};

#define APP App::GetInstance()