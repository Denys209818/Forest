#include "libs.h"
#include "Forest.h"
#include "Rabbit.h"
#include "Fox.h"

Fox::Fox()
{
	this->age = (rand() % 5) + 1;
	this->size = rand() % 10;
	this->name = "Fox";
}

int* Fox::GetSize()
{
	return &this->size;
}

string* Fox::GetName()
{
	return &this->name;
}

void Fox::EatRabbit(Rabbit* r)
{
	cout << "Foxes eat Rabbits" << endl;
	int a = 0;
	for (int i = 0; i < this->size; i++)
	{
		this->age = (rand() % 5) + 1;
		if (this->age < 3)
		{
			if (*(r->GetSize()) > 0)
			{
				*(r->GetSize()) -= 1;
			}
			else
			{
				break;
			}
		}
		else
		{
			cout << "One Fox is old and die!" << endl;
			a++;
			Sleep(1000);
		}
	}
	this->size -= a;
	Sleep(3000);
}

Fox::~Fox()
{

}