#pragma once
#include "libs.h"


class Fox : public Forest
{
private:
	int age;
public:
	Fox();

	int* GetSize() override;

	string* GetName() override;

	void EatRabbit(Rabbit* r);

	~Fox();
};
