#pragma once
//#include "kamGame.h"
#include "kImage.h"
#include "kamGame.h"
#include <vector>

class kFont
{
public:

	kFont(const char* path,kamGame * g);
	void drawText(const char* text, int x, int y, float r, float g, float b, float a);

private:

	std::vector<kImage*> chars;
	kamGame* game;

};

