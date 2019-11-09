#pragma once
#include "kObj.h"
class objLaserBolt : public kObj
{
public:

	objLaserBolt() {

		boltImg = new kImage("data/img/obj/laserOne/bolt.png");
		setDrag(1.0f);

	}

	void update() {

		move(4, 0);

	};

	void render() {

		getGame()->drawImg(getX(), getY(), 64, 24, 1, 1, 1, 1, boltImg);

	};

private:

	kImage* boltImg;

};

