#pragma once
#include "libs.h"


class Grass : public Forest
{
public:
	Grass();

	int* GetSize() override;

	string* GetName() override;

	~Grass();
};
