#pragma once
#include "kamCore.h"

class kImage
{
public:

	kImage(const char* path);
	kImage(unsigned char* data, int w, int h);
	void bind(int unit);
	void release(int unit);

	int w, h;
	int x, y, z;
	int x1, y1, z2;
	int x2, y2, y3;

private:

	GLuint id;
	
	const char* iPath;

};

