#pragma once

class Scene {
public:
	virtual int Initialize(void) = 0;
	virtual int Update(void) = 0;
	virtual int Render(void) = 0;
	virtual int Terminate(void) = 0;
};