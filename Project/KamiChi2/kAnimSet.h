#pragma once
#include "kImage.h"
#include <vector>

class kAnimSet
{
public:

	kAnimSet(int num)
	{
		frames.resize(num);
		numFrames = num;
	};
	void setFrame(kImage* img, int num);
	kImage* getFrame(int num) {

		return frames[num];

	};

	int getNumFrames() {

		return frames.size();

	};

private:
	std::vector<kImage*> frames;
	int numFrames;
};


