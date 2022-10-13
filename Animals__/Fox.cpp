#include "Fox.h"


Fox::Fox()
{
	fox = "Fox";
	amount = 0;
}

void Fox::SetAmount()
{
	cout << "Enter the number of foxes (0-5) -> ";
	cin >> count;

	if (count > 5 || count < 0)
	{
		cout << "Error \nEnter again" << endl;
		SetAmount();
		return;
	}

	int count_normal_liver = 0;

	Fox fox;
	fox.amount = new int[count];

	for (int i = 0; i < count; i++)
	{
		cout << "Enter " << i + 1 << " fox age -> ";

		int age;
		cin >> age;

		if (age <= max_age_Fox)
		{
			fox.amount[count_normal_liver] = age;
			count_normal_liver++;
		}
	}

	count = count_normal_liver;
	amount = new int[count];

	for (int i = 0; i < count; i++)
	{
		amount[i] = fox.amount[i];
	}
}

int Fox::GetAmount()
{
	return count;
}
