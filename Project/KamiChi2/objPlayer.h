#pragma once
#include "kObj.h"

class objPlayer : public kObj
{
public:

	objPlayer();
	void update();
	void render();
	void init();

	void down() {

		if (getCurAnim() == aidle) {

			adown->setType(ANIMTYPE::Once);
			setAnim(adown, 0.4f);

		}

	}

	void noaction() {

		if (getCurAnim() != aidle) {

			if (getCurAnim() == adown) {

				if (getCurAnim()->getAnimType() == ANIMTYPE::Once)
				{
					
					adown->setType(ANIMTYPE::BackOnce);
					adown->setSpeed(0.4f);
					adown->reset();

				}
				else if (getCurAnim()->getAnimType() == ANIMTYPE::BackOnce)
				{
					//exit(1);
					if (getCurAnim()->isDone()) {

						setAnim(aidle, 0);

					}

				}

			}

		//	setAnim(aidle, 0);

		}

	}

private:

	kAnimSet* aidle;
	kAnimSet* aup;
	kAnimSet* adown;

};

