// KamiChi2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "kamCore.h"
#include "kamGame.h"
#include "kamStars.h"

kamCore* core = NULL;
kamGame* game = NULL;
kamStars* stars = NULL;

const int num_stars = 300;

int main()
{
	std::cout << "Starting KamiChi 2 - Return of the Saviour" << std::endl;

	core = new kamCore(1024, 768);

	game = new kamGame(core);
	
	stars = new kamStars(game);

	stars->initStars(num_stars);

	while (true) {

		core->updateCore();

		stars->update();

		core->beginRender();

	//	game->drawRect(20, 20, 200, 200, 1, 1, 1, 1);

		stars->render();

		core->endRender();


	}



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
