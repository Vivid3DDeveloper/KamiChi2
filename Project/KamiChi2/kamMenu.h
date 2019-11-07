#pragma once
#include "kamGame.h"
#include "kFont.h"
#include <vector>

struct kMenu {

	const char* title;
	int id;
	void(*action)(int);

};

class kamMenu
{
public:

	kamMenu(kamGame* g,int num);
	void addMenu(const char* title, int id,void(*action)(int));
	void update();
	void render();
	void up();
	void down();
	void action();

private:

	kImage* menuBG;
	kamGame* game;
	std::vector<kMenu*> items;
	int numMenu;
	kFont* mFont;
	int cur = 0;
	kSoundSource* bleep;
	kSoundSource* confirm;
};

