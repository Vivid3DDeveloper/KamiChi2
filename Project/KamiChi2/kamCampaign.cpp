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
	curLevel->update();

}

void kamCampaign::render() {

	curLevel->renderBase();
	curLevel->render();
}

void kamCampaign::up() {

	curLevel->up();
	
}

void kamCampaign::action() {

	curLevel->action();

}

void kamCampaign::nomove() {

	curLevel->nomove();

}

void kamCampaign::down()
{

	curLevel->down();

}

void kamCampaign::left() {
	curLevel->left();
}

void kamCampaign::right() {

	curLevel->right();

}