#pragma once
class kamLevel
{
public:

	kamLevel(const char* name);
	bool isDone();

	virtual void init() {};
	virtual void update() {};
	virtual void render() {};
	virtual void done() {};

private:

	const char* levelName;
	bool levelDone;

};

