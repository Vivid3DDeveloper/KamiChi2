#include "kObj.h"

kObj::kObj() {

	x = 0;
	y = 0;
	z = 0;
	xi = 0;
	yi = 0;
	zi = 0;
	

};

void kObj::renderFrame() {

	kImage* f = curAnim->getCurFrame();
	//printf("Got\n");

	game->setBlend(BLENDMODE::Alpha);

	//printf("Rendering\n");
	game->drawImg(x, y, w, h, 1, 1, 1, 1, f);

}