#include "kamStars.h"
#include <stdlib.h>

kamStars::kamStars(kamGame* g) {

	game = g;

}

void kamStars::initStars(int num) {

	srand(1024);

	numStars = num;

	stars.resize(num);

	for (int i = 0; i < num; i++)
	{

		stars[i] = new kStar;

		kStar* ks = stars[i];

		float x, y, z;


		x = rand() % game->getW();
		y = rand() % game->getH();
		z = rand() % 1024;

		z = z / 1024.0f;

		ks->x = x;
		ks->y = y;
		ks->z = z;

		ks->r = 1;
		ks->g = 1;
		ks->b = 1;

		ks->lx = x;
		ks->ly = y;
		ks->lz = z;


	}

}

void kamStars::update() {


	for (int i = 0; i < numStars; i++) {
		
		kStar* s = stars[i];

		s->x = s->x - 4.0f * s->z;

		if (s->x < -20)
		{
			s->x = game->getW() + 10;
			s->y = rand() % game->getH();
			s->z = rand() % 1000;

			s->z = s->z / 1000.0f;


		}

	}
}

void kamStars::render() {

	
	for (int i = 0; i < numStars; i++) {

		kStar* s = stars[i];

		float cv = s->z;
		float sv = s->z;


		game->drawRect(s->x - 4 * sv, s->y-4 * sv, 8 * sv, 8 * sv, s->r * cv,s->g * cv,s->b * cv,1.0);

	}

}