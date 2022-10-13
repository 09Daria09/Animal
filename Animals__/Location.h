#pragma once
#include<iostream>
using namespace std;
class Location
{
protected:
	int* amount;
	int count;
	virtual void SetAmount() = 0;
	virtual int GetAmount() = 0;
	virtual ~Location() = 0;
};

