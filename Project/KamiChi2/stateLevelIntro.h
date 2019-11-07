#pragma once
#include "kamState.h"
#include "kamStars.h"
#include "kFont.h"

class stateLevelIntro : public kamState
{
public:

	stateLevelIntro(kamGame* g, const char* name);
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
	kFont* cFont;
	const char* levelName;
	float textScale = 0.01f;
	float desTextScale = 2.5f;

};