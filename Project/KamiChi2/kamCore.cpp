#include "kamCore.h"
#include <iostream>


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