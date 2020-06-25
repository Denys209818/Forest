#include "libs.h"
#include "Forest.h"
#include "Rabbit.h"
#include "Grass.h"

Rabbit::Rabbit()
{
	this->age = (rand() % 5) + 1;
	this->size = rand() % 10;
	this->name = "Rabbit";
}

int* Rabbit::GetSize()
{
	return &this->size;
}

string* Rabbit::GetName()
{
	return &this->name;
}

void Rabbit::EatGrass(Grass* g)
{
	cout << "Rabbits eat Grass" << endl;
	int a = 0;
	for (int i = 0; i < this->size; i++)
	{
		this->age = (rand() % 5) + 1;
		if (this->age < 3)
		{
			if (*(g->GetSize()) > 0)
			{
				*(g->GetSize()) -= 1;
			}
			else
			{
				break;
			}
		}
		else
		{
			cout << "One Rabbit is old and die!" << endl;
			a++;
			Sleep(1000);
		}
	}
	this->size -= a;
	Sleep(3000);
}

Rabbit::~Rabbit()
{

}