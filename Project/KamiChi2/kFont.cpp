#include "kFont.h"
#define _CRT_SECURE_NO_DEPRECATE
#pragma warning (disable : 4996)
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
//#include <iostream>
//#include <fstream>


kFont::kFont(const char* path,kamGame *g) {


	game = g;
	chars.resize(256);

	FILE* fi;
	fi = fopen(path, "r");


	int lc = 0;

	for (int i = 0; i < 255; i++) {

		int cw, ch;
		
		fread(&cw, sizeof(int), 1, fi);
		fread(&ch, sizeof(int), 1, fi);

		//printf("W:%d H:%d /n", cw, ch);

		unsigned char* pixs = (unsigned char *)malloc((size_t)(cw * ch * 4));

		int loc = 0;

		for (int cy = 0; cy < ch; cy++) {
			for (int cx = 0; cx < cw; cx++) {

				unsigned char r, g, b, a;

				fread(&r, sizeof(unsigned char), 1, fi);
				fread(&g, sizeof(unsigned char), 1, fi);
				fread(&b, sizeof(unsigned char), 1, fi);
				fread(&a, sizeof(unsigned char), 1, fi);

				pixs[loc++] = (unsigned char)r;

				pixs[loc++] = (unsigned char)g;
				
				pixs[loc++] = (unsigned char)b;
				
				pixs[loc++] = (unsigned char)a;


				//loc += 4;


				//rf >> pix[0] >> pix[1] >> pix[2] >> pix[3];
				
			}
		}

		kImage* nf = new kImage(pixs, cw, ch);

		chars[i] = nf;

	}

}

void kFont::drawText(const char* text, int x, int y, float r, float g, float b, float a) {

	int cc = 0;

	while (true) {

		int cnum = text[cc];

		if(cnum=="/n"[0])
		{
			break;
		}

		if (cnum >= 0 && cnum <= 255) {

			game->drawImg(x, y, chars[cnum]->w, chars[cnum]->h, 1, 1, 1, 1, chars[cnum]);

			x = x + chars[cnum]->w;

		}

		if (cc > 255)
		{
			break;
		}
		cc++;

	}

}