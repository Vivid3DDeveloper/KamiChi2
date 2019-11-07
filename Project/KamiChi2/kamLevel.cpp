#include "kamLevel.h"

kamLevel::kamLevel() {



}

void kamLevel::setGame(kamGame* g) {

	game = g;

}

void kamLevel::setLevel(const char* name,int numstates) {

	levelName = name;
	levelDone = false;
	states.resize(numstates);

}

void kamLevel::setState(kamState* state, int num) {

	states[num] = state;

}

bool kamLevel::isDone() {

	return levelDone;

}

void kamLevel::beginState(int num) {

	curState = states[num];
	
	curState->init();

}

void kamLevel::updateBase() {

	curState->update();

}

void kamLevel::renderBase() {

	curState->render();

}