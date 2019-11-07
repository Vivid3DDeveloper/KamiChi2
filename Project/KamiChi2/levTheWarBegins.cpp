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

void levTheWarBegins::up() {

	player->move(0, -1.3f);
	

}

void levTheWarBegins::down() {

	player->move(0, 1.3f);

}

void levTheWarBegins::left() {

	player->move(-1.3f,0);

}

void levTheWarBegins::right() {

	player->move(1.3f, 0);

}

levTheWarBegins::levTheWarBegins(kamGame *g)
{

	setGame(g);

	setLevel("The War Begins/n", 2);

	stateLevelIntro* intro = new stateLevelIntro(g,getLevelName());
	stateNormalMode* normal = new stateNormalMode(g);

	objPlayer* play = new objPlayer();

	play->setGame(g);

	player = play;

	normal->addObj(play);

	play->setPos(64, 400,1);
	
	setState(intro, 0);
	setState(normal, 1);


}