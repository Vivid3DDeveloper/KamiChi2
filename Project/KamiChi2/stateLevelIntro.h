#pragma once
#include "kamState.h"
#include "kamStars.h"

class stateLevelIntro : public kamState
{
public:

	stateLevelIntro(kamGame* g);
	void init();
	void update();
	void render();
	void done();
	void pause();
	void resume();

private:

	kamStars* stars;
	float curSpd;
	float disSpd;
	kSoundSource* warpSrc;
	kSoundSource* warpSrc2;
	kSound* warpSnd;
	kSound* warpSnd2;

};