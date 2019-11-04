#include "kImage.h"
#include <lodepng.h>
#include <vector>
#include <iostream>


kImage::kImage(const char* path) {

	iPath = path;

	std::vector<unsigned char> img;
	unsigned iw, ih;
	unsigned error = lodepng::decode(img, iw, ih, path);

	if (error != 0) {
		std::cout << "error " << error << ": " << lodepng_error_text(error) << std::endl;
		return;
	}

	std::cout << "Loaded image. W:" << iw << " H:" << ih << std::endl;

	w = (int)iw;
	h = (int)ih;

	

	glGenTextures(1, &id);

	
	
	glEnable(GL_TEXTURE_2D);

	glBindTexture(GL_TEXTURE_2D, id);

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	glTexImage2D(GL_TEXTURE_2D, 0, 4, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, &img[0]);






}

void kImage::bind(int unit) {

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, id);

}

void kImage::release(int unit) {

	glDisable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, 0);

}