#pragma once
#include "kamGame.h"
#include <vector>

struct kStar {

	float x, y, z;
	float lx, ly, lz;
	float r, g, b;

};

class kamStars
{
public:

	kamStars(kamGame* g);

	void initStars(int num);

	void update();
	void render();

private:

	kamGame* game;
	int numStars = 0;
	std::vector<kStar *> stars;

};


