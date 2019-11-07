#pragma once
#include "kamState.h"
#include "kamStars.h"

class stateNormalMode : public kamState
{
public:

	stateNormalMode(kamGame* g);
	void init();
	void update();
	void render();
	void done();
	void pause();
	void resume();

private:

	kamStars* stars; 

};

