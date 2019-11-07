#include "stateNormalMode.h"

stateNormalMode::stateNormalMode(kamGame* g) {

	setGame(g);

}

void stateNormalMode::init() {

	stars = new kamStars(getGame());
	stars->initStars(350);


}

void stateNormalMode::update() {

	stars->update(4);

}

void stateNormalMode::render() {

	stars->render();

}

void stateNormalMode::done() {

}

void stateNormalMode::pause() {

}

void stateNormalMode::resume() {

}