#pragma once
#include "kamLevel.h"
#include <vector>

class kamCampaign
{
public:

	kamCampaign(int numLvels);
	void setLevel(kamLevel* level, int num);

	void beginLevel(int num);


private:

	kamLevel* curLevel;
	std::vector<kamLevel*> levels;
	int curLevelNum = 0;

};

