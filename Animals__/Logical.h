#pragma once
#include"Fox.h"
#include"Grass.h"
#include"Rabbit.h"
#include<iostream>
using namespace std;
class Logics : public Rabbit, public Fox, public Grass
{
public:
	Logics();
	void Input();
	void Outcome();
};

