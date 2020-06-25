#pragma once
#include "libs.h"

class NoLive
{
private:
	Forest** a;
public:
	NoLive(Forest** forest);

	void Begin();

	void End();
};
