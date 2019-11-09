#include "kScene.h"



kScene::kScene(kamCore *c,kamGame* g) {

	//kGlobal::curScene = this;
	objs.resize(0);
	background = NULL;
	game = g;
	core = c;

}

void kScene::addObj(kObj* obj) {

	objs.push_back(obj);
	obj->setOwner(this);

};

void kScene::update() {

	for (int i = 0; i < objs.size(); i++) {

		objs[i]->internalUpdate();
		objs[i]->update();
		objs[i]->updateAnim();

	}

};

void kScene::render() {

	if (background != NULL) {



	}

	for (int i = 0; i < objs.size(); i++) {

		objs[i]->render();

	}

};

void kScene::setBg(kImage* bg) {

	background = bg;

}

void kScene::clearScene() {



}

kObj* kScene::getObj(int num) {


	return objs[num];

}

int kScene::numObjs() {

	return objs.size();

};