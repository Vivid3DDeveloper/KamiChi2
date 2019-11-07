#include "kamLevel.h"

kamLevel::kamLevel(const char* name) {

	levelName = name;
	levelDone = false;

}

bool kamLevel::isDone() {

	return levelDone;

}