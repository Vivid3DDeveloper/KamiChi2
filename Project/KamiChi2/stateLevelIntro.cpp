#include "stateLevelIntro.h"


stateLevelIntro::stateLevelIntro(kamGame* g,const char * level) {

	setGame(g);
	curSpd = 40;
	disSpd = 6;
	warpSrc = g->loadSound("data/sfx/atmos/atmos2.wav");
	warpSrc2 = g->loadSound("data/sfx/atmos/atmos.wav");
	warpSnd = g->playSound(warpSrc, true);
	warpSnd2 = g->playSound(warpSrc2, true);
	cFont = new kFont("data/font/font.pf", g);
	cFont->setScale(3);
	levelName = level;

}

void stateLevelIntro::init() {

	stars = new kamStars(getGame());
	stars->initStars(350);

}

void stateLevelIntro::update() {

	if (curSpd > disSpd) {

		curSpd += (disSpd - curSpd) * 0.01f;

	}

	stars->update(curSpd);

	float pi = abs(curSpd - disSpd);

	pi = pi / 36.0f;


	//printf("pi:%2.5f\n", pi);

	warpSnd->setPitch(1.0f+(pi*3.6f));
	warpSnd2->setPitch(1.0f + (pi * 3.6f));
	warpSnd->setVol(pi);
	warpSnd2->setVol(pi);

}

void stateLevelIntro::render() {

	stars->render();

	if (textScale < (desTextScale-0.1f )) {

		textScale += (desTextScale - textScale) * 0.025f;
		cFont->setScale(textScale);
		
		

	}
	else {

		warpSnd->stop();
		warpSnd2->stop();

		setStateDone(true);

	}

	int mx, my;

	mx = getGame()->getW() / 2;
	my = getGame()->getH() / 2;

	mx = mx - cFont->getWidth(levelName) / 2;
	my = my - cFont->getHeight() / 2;

	cFont->drawText(levelName, mx, my, 1, 1, 1, 1);



}

void stateLevelIntro::done() {

}

void stateLevelIntro::pause() {

}

void stateLevelIntro::resume() {

}
