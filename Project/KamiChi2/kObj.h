#pragma once
#include "kamGame.h"
#include "kAnimSet.h"

class kScene;

class kObj
{

public:

	kObj();

	void setGame(kamGame* g)
	{
		game = g;
	};

	kamGame* getGame() {

		return game;

	}

	virtual void update() {};
	virtual void render() {};
	virtual void init() {};
	virtual void done() {};
	virtual void action() {};
	virtual void left() {};
	virtual void right() {};
	virtual void up() {};
	virtual void down() {}
	virtual void noaction() {};

	void updateAnim() {

		if (curAnim == NULL) return;
		curAnim->updateSet();

	}


	void setAnim(kAnimSet* set,float speed)
	{
		
		curAnim = set;
		set->reset();
		set->setSpeed(speed);

		//curFrame = 0;
		//animSpeed = speed;
		//animDir = true;

	};

	void renderFrame();

	void setSize(int ow, int oh) {

		w = ow;
		h = oh;

	}

	

	void setPos(int ox, int oy, int oz) {

		x = ox;
		y = oy;
		z = oz;

		

	}

	void move(float x, float y) {

		xi += x;
		yi += y;

	}

	void internalUpdate() {

		x += xi;
		y += yi;

		xi *= drag;
		yi *= drag;

	}

	kAnimSet* getCurAnim() {

		return curAnim;

	};

	void setOwner(kScene* own)
	{
		owner = own;

	};

	kScene* getOwner() {

		return owner;

	};

	void setDrag(float d);

	float getX() { return x; };
	float getY() { return y; };

private:

	const char* name;
	float x, y, z;
	float xi, yi, zi;
	float drag = 0.90f;
	float w, h;
	kAnimSet* curAnim;
	int curFrame = 0;
	float animTime = 0.0f;
	float animSpeed = 0.1f;
	bool animDir = 0;
	kamGame* game;
	kScene* owner;

};

