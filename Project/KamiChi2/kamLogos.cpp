#include "kamLogos.h"

kamLogos::kamLogos(kamGame* g,int num) {

	game = g;
	numLogo = num;
	logo.resize(num);

}

void kamLogos::setLogo(int i, kImage* img)
{

	logo[i] = img;
	
	img->x = game->getW() + 100 + (i * game->getW());
	img->y = game->getH() / 2;



}

bool kamLogos::done() {

	kImage* i = logo[(int)(numLogo - 1)];

	if (i->y<130)
	{

		return true;
	}
	return false;
}

void kamLogos::update() {

	for (int i = 0; i < numLogo; i++) {

		kImage* s = logo[i];
		s->x = s->x - 4;

		if (i == numLogo - 1)
		{

			if (s->x < game->getW() / 2 - 128)
			{
				s->x = game->getW() / 2 - 128;
				if (s->y > 128)
				{
					s->y = s->y - 3;
				}
			}

		}

	}

}

void kamLogos::render() {

	for (int i = 0; i < numLogo; i++) {

		kImage* s = logo[i];

		game->drawImg(s->x, s->y, 256, 80, 1, 1, 1, 1, s);

	}

}