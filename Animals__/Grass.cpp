#include "Grass.h"
Grass::Grass()
{
	grass = "Grass";
	amount = 0;
}

void Grass::SetAmount()
{
	amount = new int[1];
	cout << "Enter the amount of grass \n 1.Not enough grass \n 2.Lots of grass" << endl;
	cin >> amount[0];
	if (amount[0] > 2)
	{
		cout << "Error \nEnter again" << endl;
		SetAmount();
	}
}

int Grass::GetAmount()
{
	return amount[0];
}
