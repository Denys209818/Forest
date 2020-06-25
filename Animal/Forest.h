#pragma once
#include "libs.h"

class Forest
{
protected:
	string name;
	int size;
public:
	virtual int* GetSize() = 0;
	virtual string* GetName() = 0;
	virtual ~Forest() {};
};
