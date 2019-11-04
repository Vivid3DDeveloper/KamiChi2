#include "kamStars.h"
#include <stdlib.h>

kamStars::kamStars(kamGame* g) {

	game = g;

	star1 = new kImage("data/img/star/star1.png");
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
		z = rand() % 10024;

		z = z / 10024.0f;

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

void kamStars::update(float move) {


	for (int i = 0; i < numStars; i++) {
		
		kStar* s = stars[i];

		s->x = s->x - move * s->z;

		if (s->x < -20)
		{
			s->x = game->getW() + 10;
			s->y = rand() % game->getH();
			s->z = rand() % 10024;

			s->z = s->z / 10024.0f;


		}

	}
}

void kamStars::render() {

	
	glEnable(GL_BLEND);

	glBlendFunc(GL_ONE, GL_ONE);

	float ss = 12;

	for (int i = 0; i < numStars; i++) {

		kStar* s = stars[i];

		float cv = s->z;
		float sv = s->z;


		game->drawImg(s->x - ss * sv, s->y-ss * sv, (ss*2) * sv, (ss*2) * sv, s->r * cv,s->g * cv,s->b * cv,1.0,star1);


	}

}