#pragma once
#include "Location.h"
#include<iostream>
using namespace std;
class Rabbit :
    public Location
{
public:
    const int max_age_Rabbit = 8;
    string rabbit;
    Rabbit();
    void SetAmount();
    int GetAmount();
    void Delete();
};

