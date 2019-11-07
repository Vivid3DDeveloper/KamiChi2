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
	stateNormalMode* normal = new stateNormalMode(g);

	setLevel("The War Begins", 1);
	setState(normal, 0);


}