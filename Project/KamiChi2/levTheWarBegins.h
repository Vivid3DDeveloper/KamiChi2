#pragma once
#include "kamLevel.h"
#include "stateLevelIntro.h"
#include "stateNormalMode.h"


class levTheWarBegins : public kamLevel
{
public:

	levTheWarBegins(kamCore * c,kamGame *g);

	void init();
	void update();
	void render();
	void done();

	void up();
	void down();
	void left();
	void right();
	void nomove();
	void action();

private:

	objPlayer* player;

};

