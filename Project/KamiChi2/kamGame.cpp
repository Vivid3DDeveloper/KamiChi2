#include "kamGame.h"


kamGame::kamGame(kamCore* c) {

	core = c;
	engine = createIrrKlangDevice();

}

void kamGame::drawImg(int x, int y, int w, int h, float r, float g, float b, float a, kImage* img)
{

	img->bind(0);

	glColor4f(r, g, b, a);

	glBegin(GL_QUADS);

	glTexCoord2f(0, 0);
	glVertex2f(x, y);
	glTexCoord2f(1, 0);
	glVertex2f(x + w, y);
	glTexCoord2f(1, 1);
	glVertex2f(x + w, y + h);
	glTexCoord2f(0, 1);
	glVertex2f(x, y + h);

	glEnd();

	img->release(0);

}

void kamGame::drawRect(int x, int y, int w, int h, float r, float g, float b, float a) {

	//glLoadMatrixf()


	glColor4f(r, g, b, a);

	glBegin(GL_QUADS);

	glVertex2f(x,y);
	glVertex2f(x + w, y);
	glVertex2f(x + w, y + h);
	glVertex2f(x, y + h);

	glEnd();


}

void kamGame::playMusic(const char* path) {

	engine->play2D(path, true);

}

int kamGame::getW() {

	return core->getW();

}

int kamGame::getH() {

	return core->getH();

}