#pragma once
#include "kamCore.h"
#include "kImage.h"
#include <glm//glm.hpp>
#include <glm//ext.hpp>
#include <irrKlang.h>
using namespace irrklang;
class kamGame
{
public:

	kamGame(kamCore* core);

	void drawRect(int x, int y, int w, int h, float r, float g, float b, float a);
	void drawImg(int x, int y, int w, int h, float r, float g, float b, float a, kImage* img);

	int getW();
	int getH();

	void playMusic(const char* path);

private:

	kamCore* core;
	ISoundEngine* engine;

};

