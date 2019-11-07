#include "stateLevelIntro.h"


stateLevelIntro::stateLevelIntro(kamGame* g) {

	setGame(g);

}

void stateLevelIntro::init() {

	stars = new kamStars(getGame());
	stars->initStars(350);

}

void stateLevelIntro::update() {

}

void stateLevelIntro::render() {

}

void stateLevelIntro::done() {

}

void stateLevelIntro::pause() {

}

void stateLevelIntro::resume() {

}
