#pragma once
#include "kamLevel.h"
#include "stateLevelIntro.h"
#include "stateNormalMode.h"


class levTheWarBegins : public kamLevel
{
public:

	levTheWarBegins(kamGame *g);

	void init();
	void update();
	void render();
	void done();

	void up();
	void down();
	void left();
	void right();
	void noaction();

private:

	objPlayer* player;

};

