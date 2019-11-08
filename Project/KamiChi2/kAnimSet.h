#pragma once
#include "kImage.h"
#include <vector>

enum ANIMTYPE {

	Once,Repeat,BackOnce

};

class kAnimSet
{
public:

	kAnimSet(int num)
	{
		frames.resize(num);
		numFrames = num;
		type = ANIMTYPE::Once;
	};

	ANIMTYPE getAnimType() {
		return type;
	};

	void setFrame(kImage* img, int num);
	kImage* getFrame(int num) {

		return frames[num];

	};

	int getNumFrames() {

		return frames.size();

	};

	kImage* getCurFrame() {

		return frames[curFrame];

	};

	void setSpeed(float spd) {

		speed = spd;
	};

	void reset() {

		switch (type) {
		case ANIMTYPE::Once:
			curFrame = 0;
			time = 0;
			break;
		case ANIMTYPE::BackOnce:
			curFrame = frames.size() - 1;
			time = frames.size();
			break;


		}
		//curFrame = 0;
		//time = 0;

		done = false;

	}

	bool isDone() {

		return done;

	};

	void updateSet() {

		if (done) return;

		switch (type) {
		case ANIMTYPE::BackOnce:

			time -= speed;
			curFrame = (int)time;
			if (curFrame < 0) {
				curFrame = 0;
				done = true;
			}

			break;
		case ANIMTYPE::Once:

			time += speed;

			if ((int)time > curFrame) {

				curFrame++;
				if (curFrame >= frames.size()) {

					curFrame--;
					done = true;
					return;

				}

			}



			break;

		}

	};

	void setType(ANIMTYPE t) {

		type = t;

	};

private:
	std::vector<kImage*> frames;
	int numFrames;
	ANIMTYPE type;
	float time = 0.0f;
	float speed = 0.1f;
	bool done = false;
	int curFrame = 0;
};


