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

	setLevel("The War Begins/n", 2);

	stateLevelIntro* intro = new stateLevelIntro(g,getLevelName());
	stateNormalMode* normal = new stateNormalMode(g);

	
	setState(intro, 0);
	setState(normal, 1);


}