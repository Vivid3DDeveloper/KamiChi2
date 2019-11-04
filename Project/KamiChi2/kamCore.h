#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

enum KEYS {

	Action,Left,Up,Down,Right,Primary,Second,Third

};

class kamCore
{
public:

	kamCore(int w, int h);

	void updateCore();
	void beginRender();
	void endRender();

	int getW();
	int getH();
	void setKeyCallback(void (*f)(KEYS) );

	

private:

	int winW, winH;
	GLFWwindow* win;
	void* key_func;

};

