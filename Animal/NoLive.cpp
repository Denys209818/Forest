#include "libs.h"
#include "Forest.h"
#include "NoLive.h"

NoLive::NoLive(Forest** forest)
{
	this->a = forest;
}

void NoLive::Begin()
{
	cout << "Begin army:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << *(this->a[i]->GetSize());
		if (*(this->a[i]->GetName()) == "Grass") cout << "m2";
		cout << " " << *(this->a[i]->GetName());
		cout << endl;
	}

}

void NoLive::End()
{
	for (int i = 0; i < 3; i++)
	{
		if (*(this->a[i]->GetSize()) <= 0)
		{
			cout << *(this->a[i]->GetName()) << "'s is die!" << endl;
		}
		else
		{
			cout << *(this->a[i]->GetSize());
			if (*(this->a[i]->GetName()) == "Grass") cout << "m2";
			cout <<" " << *(this->a[i]->GetName()) << "'s live!" << endl;
		}
	}
}