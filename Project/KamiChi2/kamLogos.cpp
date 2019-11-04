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

	game->setBlend(BLENDMODE::Alpha);

	float mx = game->getW() / 2;
	mx = mx - 128;
	for (int i = 0; i < numLogo; i++) {

		kImage* s = logo[i];

		float dis = abs(s->x - mx);

		

		//dis = game->getW() / 2;
		dis = dis / (float)(game->getW() / 2);

		dis = 1.0 - dis;
		if (dis < 0.03f) dis = 0.03f;

		game->drawImg(s->x, s->y, 256, 80, 1, 1, 1, 1, s,dis);

	}

}