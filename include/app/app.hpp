#pragma once

#include <string>


constexpr auto STATE_TITLE = 1;
constexpr auto STATE_BATTLE = 2;
constexpr auto STATE_END = 3;

class App {
	int			KEY[256] = { 0 };
	int			WIDTH = 640;
	int			HEIGHT = 480;
	int			DEPTH = 16;
	std::string NAME = "éïÇ…óDÇµÇ¢ÉPÅ[ÉL";
public:

	int			STATE = 1;

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