#pragma once
#include <irrKlang.h>
using namespace irrklang;

class kSoundSource
{
public:
	kSoundSource(ISoundSource* src)
	{
		source = src;
	};
	ISoundSource* getSource() {
		return source;
	};
private:
	ISoundSource* source;
};

