#pragma once
#include <irrKlang.h>
using namespace irrklang;

class kSound
{
public:
	kSound(ISound* s)
	{
		sound = s;

	};
	ISound* getSound() {
		return sound;
	};

	void setPitch(float pitch) {

		sound->setPlaybackSpeed((ik_f32)pitch);

	};

	void setVol(float vol) {

		sound->setVolume((ik_f32)vol);

	}

	void stop() {

		sound->stop();

	};

private:
	ISound* sound;
};


