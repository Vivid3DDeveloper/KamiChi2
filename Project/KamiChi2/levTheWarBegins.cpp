#include "levTheWarBegins.h"

void levTheWarBegins::init() {

	beginState(0);
	

}

void levTheWarBegins::update() {

}

void levTheWarBegins::render() {

}

void levTheWarBegins::done() {


}

levTheWarBegins::levTheWarBegins(kamGame *g)
{

	setGame(g);

	stateLevelIntro* intro = new stateLevelIntro(g);
	stateNormalMode* normal = new stateNormalMode(g);

	setLevel("The War Begins", 2);
	setState(intro, 0);
	setState(normal, 1);


}