#pragma once


class Fps {

public:



	static Fps* GetInstance(void) {
		static Fps instance;
		return &instance;
	}
};

#define FPS Fps::GetInstance()