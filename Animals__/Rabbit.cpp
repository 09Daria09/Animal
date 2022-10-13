#include "Rabbit.h"

Rabbit::Rabbit()
{
	rabbit = "Rabbit";
	amount = 0;
}

void Rabbit::SetAmount()
{
	cout << "Enter the number of rabbits -> ";
	cin >> count;

	int count_normal_liver = 0;

	Rabbit rabbit;
	rabbit.amount = new int[count];

	for (int i = 0; i < count; i++)
	{
		cout << "Enter " << i + 1 << " rabbits age -> ";

		int age;
		cin >> age;

		if (age <= max_age_Rabbit)
		{
			rabbit.amount[count_normal_liver] = age;
			count_normal_liver++;
		}
	}

	count = count_normal_liver;
	amount = new int[count];

	for (int i = 0; i < count; i++)
	{
		amount[i] = rabbit.amount[i];
	}
}

int Rabbit::GetAmount()
{
	return count;
}

void Rabbit::Delete()
{
	count = 0;
}
