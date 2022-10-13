#include "Logical.h"

Logics::Logics()
{}

void Logics::Input()
{
	Grass::SetAmount();
	cout << endl;
	Fox::SetAmount();
	cout << endl;
	Rabbit::SetAmount();
}

void Logics::Outcome()
{
	system("cls");
	if (Grass::GetAmount() == 1)
	{
		cout << "Grass eaten" << endl;
	}
	else
	{
		cout << "The grass remains" << endl;
	}

	if (Rabbit::GetAmount() < Fox::GetAmount())
	{
		Rabbit::Delete();
		cout << "All the rabbits were eaten" << endl;
	}
	else
	{
		cout << rabbit << " : " << Rabbit::count << endl;
	}
	cout << fox << " : " << Fox::count << endl;

}


