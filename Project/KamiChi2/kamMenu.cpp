#include "kamMenu.h"

kamMenu::kamMenu(kamGame* g,int num) {

	game = g;
	numMenu = num;
	items.resize(num);
	menuBG = new kImage("data/img/ui/button1.png");

}

void kamMenu::addMenu(const char* title, int id) {

	kMenu* menu = new kMenu;

	menu->title = title;
	menu->id = id;

	items[id] = menu;

}