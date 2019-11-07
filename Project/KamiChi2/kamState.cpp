#include "kamState.h"

void kamState::setGame(kamGame* g)
{

	game = g;

}

kamGame* kamState::getGame() {

	return game;

}

bool kamState::isDone() {

	return stateDone;

}

void kamState::setStateDone(bool sd) {

	stateDone = true;

}