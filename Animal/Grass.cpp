#include "libs.h"
#include "Forest.h"
#include "Grass.h"

Grass::Grass()
{
	this->name = "Grass";
	this->size = (rand() % 10) + 1;
}

int* Grass::GetSize()
{
	return &this->size;
}

string* Grass::GetName()
{
	return &this->name;
}

Grass::~Grass()
{

}