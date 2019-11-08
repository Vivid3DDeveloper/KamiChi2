// KamiChi2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "kamCore.h"
#include "kamGame.h"
#include "kamStars.h"
#include "kamLogos.h"
#include "kamMenu.h"
#include "kFont.h"
#include "kamCampaign.h"
#include "kamLevel.h"
#include "kamState.h"
#include "levTheWarBegins.h"

kamCore* core = NULL;
kamGame* game = NULL;
kamStars* stars = NULL;
kamLogos* logos = NULL;
kamMenu* menus = NULL;
kamCampaign* cam = NULL;

int goto_code = 0;

const int num_stars = 300;

const int gameW = 1300;
const int gameH = 768;

bool up, down, left, right, action, second;


void input_game(KEYS key, bool press) {

	switch (key) {

	case KEYS::Action:

		if (press) {


			//game->stopMusic();
			//menus->action();

		}



		break;
	case KEYS::Up:

		if (press) {
			//menus->up();
			
			up = true;
		}
		else {
			up = false;
		}
		
		//cam->up();

	

		break;
	case KEYS::Down:

		if (press) {
			down = true;
			//menus->down();
		}
		else {
			down = false;
		}

		//cam->down();

		break;
	case KEYS::Left:
		if (press) {
			left = true;
		}
		else {
			left = false;
		}
		break;
	case KEYS::Right:

		if (press) {

			right = true;
		}
		else {
			right = false;
		}

		break;

	}

}


void do_begincam()
{

	 cam = new kamCampaign(game,1);

	levTheWarBegins* lev1 = new levTheWarBegins(game);

	cam->setLevel(lev1, 0);

	cam->begin();

	core->setKeyCallback(&input_game);

	up = false;
	down = false;
	left = false;
	right = false;
	action = false;
	second = false;

	while (true) {

		core->updateCore();

		//stars->update(8);

		//logos->update();

		//menus->update();

		if (goto_code == 4) {

		//	do_begincam();


		}

		core->beginRender();

		cam->update();

		float xi, yi;
		xi = 0;
		yi = 0;

		if (up) {
			cam->up();
		}
		if (down) {
			cam->down();
		}
		if (left) {
			cam->left();
		}
		if (right) {
			cam->right();
			//exit(1);

		}
		if (left == false && right == false && up == false && down == false) {

			cam->noaction();

		}

		//game->drawImg(20, 20, 200, 200, 1, 1, 1, 1,star1);

		//stars->render();

		//game->drawImg(game->getW() / 2 - 128, 64, 256, 80, 1, 1, 1, 1, title);

		//menus->render();

		//logos->render();

 	cam->render();

		core->endRender();

	}
}

void input_menu(KEYS key,bool press) {

	switch (key) {

	case KEYS::Action:

		if (press) {

		
			game->stopMusic();
			menus->action();

		}
		
	

		break;
	case KEYS::Up:

		if (press) {
			menus->up();
		}
		break;
	case KEYS::Down:

		if (press) {
			menus->down();
		}
		break;

	}

}

void act_newCampaign(int id) {

	goto_code = 3;

}

void act_null(int id) {

}

void do_menu() {

	kImage* title = new kImage("data/img/logo/logo3.png");

	menus = new kamMenu(game, 4);

	menus->addMenu("New Campaign/n", 0,&act_newCampaign);
	menus->addMenu("Time-Trial/n", 1,&act_null);
	menus->addMenu("Options/n", 2,&act_null);
	menus->addMenu("Exit/n", 3,&act_null);

	core->setKeyCallback(&input_menu);

	float scale = 0.01f;

	kImage* starbg = new kImage("data/img/star/starbg1.png");

	while (true) {

		if (scale < 2.0) {
			scale = scale + 0.01f;
		}

		core->updateCore();

		stars->update(8);

		//logos->update();

		menus->update();
		
		if (goto_code==3) {

			do_begincam();

		}

		core->beginRender();

		//game->drawImg(20, 20, 200, 200, 1, 1, 1, 1,star1);

		stars->render();

		game->drawImg(0, 0, game->getW(), game->getH(), 1, 1, 1, 1, starbg);


		game->drawImg(game->getW() / 2 - 128, 64, 256, 80, 1, 1, 1, 1, title, scale);

		menus->render();

		//logos->render();

		core->endRender();


	}

}



void input_Intro(KEYS key,bool press) {

	switch (key) {

	case KEYS::Action:

		goto_code = 2;

		break;

	}

}

void do_intro() {

	stars = new kamStars(game);

	logos = new kamLogos(game, 3);

	stars->initStars(num_stars);

	kImage* star1 = new kImage("data/img/star/star1.png");

	kImage* logo1 = new kImage("data/img/logo/logo1.png");
	kImage* logo2 = new kImage("data/img/logo/logo2.png");
	kImage* logo3 = new kImage("data/img/logo/logo3.png");

	kImage* starbg = new kImage("data/img/star/starbg1.png");

	logos->setLogo(0, logo1);
	logos->setLogo(1, logo2);
	logos->setLogo(2, logo3);

	game->playMusic("data/sfx/song/menusong2.mp3");


	core->setKeyCallback(&input_Intro);

	kFont* f1 = new kFont("data/font/font.pf", game);

	while (true) {

		core->updateCore();

		stars->update(8);

		logos->update();

		if (logos->done()) {

			do_menu();

		}

		if (goto_code == 2) {

			do_menu();

		}

		core->beginRender();

		//game->drawImg(20, 20, 200, 200, 1, 1, 1, 1,star1);
		game->drawImg(0, 0, game->getW(), game->getH(), 1, 1, 1, 1, starbg);

		stars->render();

		logos->render();

		f1->drawText("KamiChi 2 - Return Of The Saviour (c)GameClan 2020/n", 5, 5, 1, 1, 1, 1);

		core->endRender();


	}

}

int main()
{
	std::cout << "Starting KamiChi 2 - Return of the Saviour" << std::endl;

	core = new kamCore(gameW, gameH);

	game = new kamGame(core);
	
	do_intro();



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
