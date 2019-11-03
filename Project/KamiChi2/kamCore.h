#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class kamCore
{
public:

	kamCore(int w, int h);

	void updateCore();
	void beginRender();
	void endRender();

	

private:

	int winW, winH;
	GLFWwindow* win;

};

