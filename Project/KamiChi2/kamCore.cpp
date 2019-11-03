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

	glClear(GL_COLOR_BUFFER_BIT);



}

void kamCore::endRender() {

	glfwSwapBuffers(win);

}