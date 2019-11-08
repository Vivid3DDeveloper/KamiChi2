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

	aup = new kAnimSet(4);

	aup->setFrame(new  kImage("data/img/obj/ship/player/up1-game.png"), 0);
	aup->setFrame(new kImage("data/img/obj/ship/player/up2-game.png"), 1);
	aup->setFrame(new kImage("data/img/obj/ship/player/up3-game.png"), 2);
	aup->setFrame(new kImage("data/img/obj/ship/player/up4-game.png"), 3);
	
	aright = new kAnimSet(4);

	aright->setFrame(new kImage("data/img/obj/ship/player/right1-game.png"), 0);
	aright->setFrame(new kImage("data/img/obj/ship/player/right2-game.png"), 1);
	aright->setFrame(new kImage("data/img/obj/ship/player/right3-game.png"), 2);
	aright->setFrame(new kImage("data/img/obj/ship/player/right4-game.png"), 3);
	 
	aleft = new kAnimSet(4);

	aleft->setFrame(new kImage("data/img/obj/ship/player/left1-game.png"), 0);
	aleft->setFrame(new kImage("data/img/obj/ship/player/left2-game.png"), 1);
	aleft->setFrame(new kImage("data/img/obj/ship/player/left3-game.png"), 2);
	aleft->setFrame(new kImage("data/img/obj/ship/player/left4-game.png"), 3);

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