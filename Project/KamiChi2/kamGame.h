#pragma once
#include "kamCore.h"
#include "kImage.h"

#include <glm//glm.hpp>
#include <glm//ext.hpp>
#include <irrKlang.h>
#include "kSound.h"
#include "kSoundSource.h"
using namespace irrklang;

enum BLENDMODE {

	Solid,Alpha,Additive

};

class kamGame
{
public:

	kamGame(kamCore* core);

	void drawRect(int x, int y, int w, int h, float r, float g, float b, float a);
	void drawImg(int x, int y, int w, int h, float r, float g, float b, float a, kImage* img);
	void drawImg(int x, int y, int w, int h, float r, float g, float b, float a, kImage* img, float scale);

	int getW();
	int getH();

	void setBlend(BLENDMODE mode);

	void playMusic(const char* path);
	void stopMusic();
	
	kSoundSource* loadSound(const char* path);

	kSound* playSound(kSoundSource* src,bool loop);

private:

	kamCore* core;
	ISoundEngine* engine;
	ISound* music;
	BLENDMODE bMode;
	bool musicPlaying;
	


};

