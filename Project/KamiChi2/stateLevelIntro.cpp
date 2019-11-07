#include "stateLevelIntro.h"


stateLevelIntro::stateLevelIntro(kamGame* g) {

	setGame(g);
	curSpd = 40;
	disSpd = 6;

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

}

void stateLevelIntro::render() {

	stars->render();

}

void stateLevelIntro::done() {

}

void stateLevelIntro::pause() {

}

void stateLevelIntro::resume() {

}
