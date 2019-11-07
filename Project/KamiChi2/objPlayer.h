#pragma once
#include "kObj.h"

class objPlayer : public kObj
{
public:

	objPlayer();
	void update();
	void render();
	void init();

private:

	kAnimSet* idle;
	kAnimSet* up;
	kAnimSet* down;

};

