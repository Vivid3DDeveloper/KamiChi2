#include "kamGame.h"

kamGame::kamGame(kamCore* c) {

	core = c;

}

void kamGame::drawRect(int x, int y, int w, int h, float r, float g, float b, float a) {

	//glLoadMatrixf()


	glBegin(GL_QUADS);

	glVertex2f(x,y);
	glVertex2f(x + w, y);
	glVertex2f(x + w, y + h);
	glVertex2f(x, y + h);

	glEnd();


}