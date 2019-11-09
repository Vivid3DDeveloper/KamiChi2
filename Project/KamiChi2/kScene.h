#pragma once
#include "kObj.h"
#include <vector>
#include "kImage.h"
#include "kamGame.h"
#include "kamCore.h"


class kScene
{
public:


	kScene(kamCore *c,kamGame* g);
	void addObj(kObj* obj);
	void update();
	void render();
	void setBg(kImage* bg);
	
	int numObjs();

	kObj* getObj(int num);


	

	void clearScene();

private:

	std::vector<kObj*> objs;
	kImage* background;
	kamGame* game;
	kamCore* core;

};

