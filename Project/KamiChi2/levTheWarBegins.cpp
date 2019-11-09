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
	player->up();

}

void levTheWarBegins::down() {

	player->move(0, 1.3f);
	player->down();
}

void levTheWarBegins::left() {

	player->move(-1.3f,0);
	player->left();
}

void levTheWarBegins::right() {

	
	player->move(1.3f, 0);
	player->right();

}

void levTheWarBegins::action() {

	player->action();

};

void levTheWarBegins::nomove() {

	player->noaction();

}

levTheWarBegins::levTheWarBegins(kamCore * c,kamGame *g)
{

	setGame(g);

	setLevel("The War Begins/n", 2);

	stateLevelIntro* intro = new stateLevelIntro(g,getLevelName());
	stateNormalMode* normal = new stateNormalMode(c,g);

	objPlayer* play = new objPlayer();

	play->setGame(g);

	player = play;

	normal->addObj(play);

	play->setPos(64, 400,1);
	
	setState(intro, 0);
	setState(normal, 1);


}