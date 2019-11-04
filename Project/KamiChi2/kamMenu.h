#pragma once
#include "kamGame.h"
#include <vector>

struct kMenu {

	const char* title;
	int id;

};

class kamMenu
{
public:

	kamMenu(kamGame* g,int num);
	void addMenu(const char* title, int id);

private:

	kImage* menuBG;
	kamGame* game;
	std::vector<kMenu*> items;
	int numMenu;

};

