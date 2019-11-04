#include "kamCore.h"
#include <iostream>

void (*key_fun)(KEYS);

kamCore::kamCore(int w, int h)
{

	winW = w;
	winH = h;

	std::cout << "Initializing KamiChi core." << std::endl;
	std::cout << "Creating window. W:" << w << " H:" << h << std::endl;

	glfwInit();

	win = glfwCreateWindow(w, h, "KamiChi 2 - Return of the Saviour", NULL, NULL);

	if (!win) {

		glfwTerminate();
		return;

	}

	glewInit();

	glfwMakeContextCurrent(win);




}


void key_cb(GLFWwindow *win,int key,int scancode,int action,int mods) {

	if (key == GLFW_KEY_ENTER || key == GLFW_KEY_SPACE)
	{

		key_fun(KEYS::Action);
		//&key_fun(KEYS::Action);

	}

}

void kamCore::setKeyCallback( void (*f)(KEYS) ) {


	key_fun =f;

	glfwSetKeyCallback(win, key_cb);

}

void kamCore::updateCore() {

	glfwPollEvents();

}

void kamCore::beginRender() {

	glClearColor(0,0,0,0);

	glClear(GL_COLOR_BUFFER_BIT);

	glLoadIdentity();

	gluOrtho2D(0, winW, winH, 0);



}

void kamCore::endRender() {

	glfwSwapBuffers(win);

}

int kamCore::getW() {

	return winW;
	
}

int kamCore::getH() {

	return winH;

}