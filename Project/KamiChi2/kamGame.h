#pragma once
#include "kamCore.h"
#include <glm//glm.hpp>
#include <glm//ext.hpp>

class kamGame
{
public:

	kamGame(kamCore* core);

	void drawRect(int x, int y, int w, int h, float r, float g, float b, float a);

private:

	kamCore* core;

};

