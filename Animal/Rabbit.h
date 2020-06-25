#pragma once
#include "libs.h"
#include "Grass.h"

class Rabbit : public Forest
{
private:
	int age;
public:
	Rabbit();

	int* GetSize() override;

	string* GetName() override;

	void EatGrass(Grass* g);

	~Rabbit();
};
