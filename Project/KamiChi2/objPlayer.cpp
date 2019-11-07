#include "objPlayer.h"

objPlayer::objPlayer() {

	idle = new kAnimSet(1);

	kImage* idle1 = new kImage("data/img/obj/ship/player/shipidle1.png");
	printf("Ship loaded\n");

	idle->setFrame(idle1, 0);

	setAnim(idle, 0);
	setSize(128, 64);
	
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