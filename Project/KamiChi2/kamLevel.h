#pragma once
#include <vector>
#include "kamState.h"
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

	virtual void init() {};
	virtual void update() {};
	virtual void render() {};
	virtual void done() {};

	void updateBase();
	void renderBase();

private:

	const char* levelName;
	bool levelDone;
	std::vector<kamState*> states;
	kamState* curState;
	kamGame* game;
	int stateNum = 0;

};

