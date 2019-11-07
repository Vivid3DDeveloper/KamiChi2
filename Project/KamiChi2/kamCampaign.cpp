#include "kamCampaign.h"

kamCampaign::kamCampaign(int numLevels) {

	levels.resize(numLevels);

}

void kamCampaign::setLevel(kamLevel* level, int num) {

	levels[num] = level;

}

void kamCampaign::beginLevel(int num) {

	curLevel = levels[num];
	curLevelNum = num;

}