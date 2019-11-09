#pragma once
#include "kObj.h"
#include "objLaserBolt.h"
#include "kScene.h"

class kScene;
class objPlayer : public kObj
{
public:

	objPlayer();
	void update();
	void render();
	void init();
	
	void left() {

		if (getCurAnim() == aidle || getCurAnim() == aup || getCurAnim() == adown || getCurAnim() == aright) {

			aleft->setType(ANIMTYPE::Once);
			setAnim(aleft, 0.4);

		}

	}

	void right() {

		if (getCurAnim() == aidle || getCurAnim() == aup || getCurAnim() == adown || getCurAnim() == aleft)
		{ 

			aright->setType(ANIMTYPE::Once);
			setAnim(aright, 0.4);

		}


	}

	void up() {

		if (getCurAnim() == aidle || getCurAnim() == adown) {

			aup->setType(ANIMTYPE::Once);
			setAnim(aup, 0.4f);

		}

	}

	void action() {

		objLaserBolt* lb = new objLaserBolt();
		lb->setGame(getGame());
		lb->setPos(getX()+178, getY()+45, 0);
		getOwner()->addObj(lb);

	};

	void down() {

		if (getCurAnim() == aidle || getCurAnim() == aup) {

			adown->setType(ANIMTYPE::Once);
			setAnim(adown, 0.4f);

		}

	}

	void noaction() {

		if (getCurAnim() != aidle) {

			if (getCurAnim() == aleft) {

				if (getCurAnim()->getAnimType() == ANIMTYPE::Once)
				{

					aleft->setType(ANIMTYPE::BackOnce);
					aleft->setSpeed(0.4f);
					aleft->reset();

				}
				else if (getCurAnim()->getAnimType() == ANIMTYPE::BackOnce)
				{
					//exit(1);
					if (getCurAnim()->isDone()) {

						setAnim(aidle, 0);

					}

				}


			}

			if (getCurAnim() == aright) {

				if (getCurAnim()->getAnimType() == ANIMTYPE::Once)
				{

					aright->setType(ANIMTYPE::BackOnce);
					aright->setSpeed(0.4f);
					aright->reset();

				}
				else if (getCurAnim()->getAnimType() == ANIMTYPE::BackOnce)
				{
					//exit(1);
					if (getCurAnim()->isDone()) {

						setAnim(aidle, 0);

					}

				}


			}

			if (getCurAnim() == aup) {

				if (getCurAnim()->getAnimType() == ANIMTYPE::Once)
				{

					aup->setType(ANIMTYPE::BackOnce);
					aup->setSpeed(0.4f);
					aup->reset();

				}
				else if (getCurAnim()->getAnimType() == ANIMTYPE::BackOnce)
				{
					//exit(1);
					if (getCurAnim()->isDone()) {

						setAnim(aidle, 0);

					}

				}

			}
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
	kAnimSet* aright;
	kAnimSet* aleft;

};

