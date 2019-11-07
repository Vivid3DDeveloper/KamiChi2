#pragma once
#include "kamGame.h"

class kamState
{
public:

	void setGame(kamGame* g);
	virtual void init() {};
	virtual void update() {};
	virtual void render() {};
	virtual void done() {};
	virtual void pause() {};
	virtual void resume() {};
	kamGame* getGame();
	bool isDone();
	void setStateDone(bool sd);

private:

	kamGame* game;
	bool stateDone = false;

};

