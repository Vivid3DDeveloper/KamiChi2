#include "stateNormalMode.h"

stateNormalMode::stateNormalMode(kamCore * c,kamGame* g) {

	setGame(g);
	scene = new kScene(c,g);


}

void stateNormalMode::init() {

	stars = new kamStars(getGame());
	stars->initStars(350);


}

void stateNormalMode::update() {

	stars->update(4);

	scene->update();

}

void stateNormalMode::render() {

	stars->render();
	
	scene->render();

}

void stateNormalMode::done() {

}

void stateNormalMode::pause() {

}

void stateNormalMode::resume() {

}

void stateNormalMode::addObj(kObj* o)
{

	scene->addObj(o);

}
