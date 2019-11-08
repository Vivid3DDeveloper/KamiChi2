#pragma once
#include "kamGame.h"
#include "kamLevel.h"
#include <vector>

class kamCampaign
{
public:

	kamCampaign(kamGame * g,int numLvels);
	void setLevel(kamLevel* level, int num);

	void beginLevel(int num);
	
	void begin();

	void update();
	void render();

	void up();
	void down();
	void left();
	void right();
	void action();
	void second();
	void noaction();


private:

	kamLevel* curLevel;
	std::vector<kamLevel*> levels;
	int curLevelNum = 0;
	kamGame* game;

};

