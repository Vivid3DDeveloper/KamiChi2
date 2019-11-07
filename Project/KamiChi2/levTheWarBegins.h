#pragma once
#include "kamLevel.h"
#include "stateNormalMode.h"


class levTheWarBegins : public kamLevel
{
public:

	levTheWarBegins(kamGame *g);

	void init();
	void update();
	void render();
	void done();

private:


};

