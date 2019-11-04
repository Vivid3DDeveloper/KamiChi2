#pragma once
#include "kamGame.h"
#include <vector>
#include "kImage.h"

struct kStar {

	float x, y, z;
	float lx, ly, lz;
	float r, g, b;
	kImage* img;

};

class kamStars
{
public:

	kamStars(kamGame* g);

	void initStars(int num);

	void update(float move);
	void render();

private:

	kamGame* game;
	int numStars = 0;
	std::vector<kStar *> stars;
	kImage* star1;

};


