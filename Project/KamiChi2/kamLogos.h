#pragma once
#include "kamGame.h"
#include <vector>

class kamLogos
{
public:

	kamLogos(kamGame* g, int num);
	void setLogo(int i, kImage* img);
	void update();
	void render();
	bool done();

private:

	int numLogo = 0;
	kamGame* game;
	std::vector<kImage*> logo;

};

