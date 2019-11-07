#include "kamCampaign.h"

kamCampaign::kamCampaign(kamGame *g,int numLevels) {

	game = g;
	levels.resize(numLevels);

}

void kamCampaign::setLevel(kamLevel* level, int num) {

	levels[num] = level;

}

void kamCampaign::beginLevel(int num) {

	curLevel = levels[num];
	curLevelNum = num;

	curLevel->init();



}

void kamCampaign::begin() {

	beginLevel(0);

}

void kamCampaign::update() {

	curLevel->updateBase();

}

void kamCampaign::render() {

	curLevel->renderBase();

}