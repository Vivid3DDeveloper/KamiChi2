#pragma once
#include <vector>
#include "kamState.h"
#include "kObj.h"
class kamLevel
{
public:


	kamLevel();

	void setGame(kamGame* g);

	void setLevel(const char* name,int states);


	void setState(kamState* state, int num);

	void beginState(int num);

	bool isDone();

	const char* getLevelName() {
		return levelName;
	};

	void getStateNum() {

		

	}

	virtual void init() {};
	virtual void update() {};
	virtual void render() {};
	virtual void done() {};

	void updateBase();
	void renderBase();

	virtual void left() {};
	virtual void right() {};
	virtual void up() {};
	virtual void down() {};



private:

	const char* levelName;
	bool levelDone;
	std::vector<kamState*> states;
	kamState* curState;
	kamGame* game;
	int stateNum = 0;


};

