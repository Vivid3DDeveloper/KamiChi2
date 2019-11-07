#pragma once
#include "kamState.h"
#include "kamStars.h"
//#include "kObj.h";
#include "objPlayer.h"
#include <vector>

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
	void addObj(kObj* obj);
private:

	kamStars* stars; 
	std::vector<kObj*> objs;
	objPlayer* player;

};

