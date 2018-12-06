#pragma once

#include "GLFW\glfw3.h"
#include <iostream>

#pragma comment(lib, "opengl32.lib")

using namespace std;

class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;
	

	Engine();
	
	~Engine();

	bool Initialize();

	void Update();
	void Render();

private:
	static GLFWwindow* window;


};