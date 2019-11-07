#include "kamGame.h"


kamGame::kamGame(kamCore* c) {

	core = c;
	engine = createIrrKlangDevice();
	setBlend(BLENDMODE::Additive);
	printf("Game Created/n");
	musicPlaying = false;

}

void kamGame::setBlend(BLENDMODE mode) {

	bMode = mode;

}

void setBlendGL(BLENDMODE mode) {

	switch (mode) {
	case BLENDMODE::Solid:
		glDisable(GL_BLEND);
		break;
	case BLENDMODE::Alpha:
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		break;
	case BLENDMODE::Additive:
		glEnable(GL_BLEND);
		glBlendFunc(GL_ONE, GL_ONE);
		break;
	}

}


void kamGame::drawImg(int x, int y, int w, int h, float r, float g, float b, float a, kImage* img,float scale)
{

	float x1, y1, x2, y2, x3, y3, x4, y4;

	float mx = x + w / 2;
	float my = y + h / 2;

	x1 = x - mx;
	y1 = y - my;
	x2 = (x + w) - mx;
	y2 = (y - my);
	x3 = x2;
	y3 = (y + h) - my;
	x4 = x1;
	y4 = y3;

	x1 = x1 * scale;
	y1 = y1 * scale;
	x2 = x2 * scale;
	y2 = y2 * scale;
	x3 = x3 * scale;
	y3 = y3 * scale;
	x4 = x4 * scale;
	y4 = y4 * scale;

	setBlendGL(bMode);

	img->bind(0);

	glColor4f(r, g, b, a);

	glBegin(GL_QUADS);

	glTexCoord2f(0, 0);
	glVertex2f(mx+x1, my+y1);
	glTexCoord2f(1, 0);
	glVertex2f(mx+x2, my+y2);
	glTexCoord2f(1, 1);
	glVertex2f(mx+x3,my+y3);
	glTexCoord2f(0, 1);
	glVertex2f(mx+x4,my+y4);

	glEnd();

	img->release(0);

}

void kamGame::drawImg(int x, int y, int w, int h, float r, float g, float b, float a, kImage* img)
{

	setBlendGL(bMode);

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

	setBlendGL(bMode);

	glColor4f(r, g, b, a);

	glBegin(GL_QUADS);

	glVertex2f(x,y);
	glVertex2f(x + w, y);
	glVertex2f(x + w, y + h);
	glVertex2f(x, y + h);

	glEnd();


}

void kamGame::playMusic(const char* path) {

	musicPlaying = true;
	music = engine->play2D(path, true, false, true);

}

void kamGame::stopMusic() {

	if (musicPlaying) {
		music->stop();
		musicPlaying = false;
	}

}

kSoundSource * kamGame::loadSound(const char* path) {

	return new kSoundSource(engine->addSoundSourceFromFile(path, ESM_AUTO_DETECT, true));

}

kSound* kamGame::playSound(kSoundSource* src,bool loop) {

	return new kSound(engine->play2D(src->getSource(), loop,false,true));


}

int kamGame::getW() {

	return core->getW();

}

int kamGame::getH() {

	return core->getH();

}