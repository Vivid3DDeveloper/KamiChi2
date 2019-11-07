#include "stateNormalMode.h"

stateNormalMode::stateNormalMode(kamGame* g) {

	setGame(g);
	objs.resize(0);

}

void stateNormalMode::init() {

	stars = new kamStars(getGame());
	stars->initStars(350);


}

void stateNormalMode::update() {

	stars->update(4);

	for (int i = 0; i < objs.size(); i++) {

		objs[i]->update();
		objs[i]->internalUpdate();

	}

}

void stateNormalMode::render() {

	stars->render();
	
	for (int i = 0; i < objs.size(); i++) {

		objs[i]->render();

	}

}

void stateNormalMode::done() {

}

void stateNormalMode::pause() {

}

void stateNormalMode::resume() {

}

void stateNormalMode::addObj(kObj* o)
{

	objs.push_back(o);

}
