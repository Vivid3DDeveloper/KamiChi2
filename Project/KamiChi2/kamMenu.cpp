#include "kamMenu.h"

kamMenu::kamMenu(kamGame* g,int num) {

	game = g;
	numMenu = num;
	items.resize(num);
	menuBG = new kImage("data/img/ui/button1.png");
	mFont = new kFont("data/font/font.pf", game);
	mFont->setScale(3);

	bleep = game->loadSound("data/sfx/ui/bleep.wav");
	confirm = game->loadSound("data/sfx/ui/confirm.wav");


}

void kamMenu::addMenu(const char* title, int id,void(*action)(int) ) {

	kMenu* menu = new kMenu;

	menu->title = title;
	menu->id = id;
	menu->action = action;

	items[id] = menu;

}

void kamMenu::update() {

	
}

void kamMenu::up() {

	cur = cur - 1;
	if (cur < 0) {
		cur = numMenu - 1;
	}
	if (cur < 0) cur = 0;
	game->playSound(bleep, false);
}

void kamMenu::action() {

	kMenu* m = items[cur];

	m->action(0);
	game->playSound(confirm, false);

}

void kamMenu::down() {

	cur = cur + 1;
	if (cur >= numMenu) {
		cur = 0;
	}
	game->playSound(bleep, false);

}

void kamMenu::render() {

	int by = 250;
	int bx = 60;


	for (int i = 0; i < numMenu; i++) {

		kMenu* m = items[i];

		game->setBlend(BLENDMODE::Alpha);

		

		//game->drawImg(bx - 128, by, 256, 50, 1, 1, 1, 1, menuBG);
		mFont->drawText(m->title, bx , by , 1, 1, 1, 1);
		if (i == cur) {

			game->drawImg(bx - 15, by, 5, 25, 1, 1, 1, 1,menuBG);

		}
		
		by = by + 52;



	}

}