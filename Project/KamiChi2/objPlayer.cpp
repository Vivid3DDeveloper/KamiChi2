#include "objPlayer.h"

objPlayer::objPlayer() {

	aidle = new kAnimSet(1);


	kImage* idle1 = new kImage("data/img/obj/ship/player/shipidle1.png");
	printf("Ship loaded\n");

	aidle->setFrame(idle1, 0);

	adown = new kAnimSet(4);

	adown->setFrame(new kImage("data/img/obj/ship/player/down1-game.png"),0);
	adown->setFrame(new kImage("data/img/obj/ship/player/down2-game.png"), 1);
	adown->setFrame(new kImage("data/img/obj/ship/player/down3-game.png"), 2);
	adown->setFrame(new kImage("data/img/obj/ship/player/down4-game.png"), 3);
	
	setAnim(aidle, 0.1f);
	setSize(182, 108);
	
}

void objPlayer::init()
{

}

void objPlayer::update()
{

}

void objPlayer::render() {

	renderFrame();

}