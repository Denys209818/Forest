#include "libs.h"
#include "Forest.h"
#include "Grass.h"
#include "Rabbit.h"
#include "Fox.h"
#include "NoLive.h"

void main() 
{
	srand(time(0));
	
	Forest* forest[3];
	Fox* f = new Fox();
	Rabbit* r = new Rabbit();
	Grass* g = new Grass();
	
	forest[0] = f;
	forest[1] = r;
	forest[2] = g;

	
	NoLive Nl(forest);
	Nl.Begin();
	StopFunct();

	f->EatRabbit(r);
	r->EatGrass(g);

	system("cls");
	Nl.End();
	
	for (int i = 0; i < 3; i++) 
	{
		delete forest[i];
	}


}