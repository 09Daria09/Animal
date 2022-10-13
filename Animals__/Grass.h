#pragma once
#include "Location.h"
#include<iostream>
using namespace std;
class Grass :
    public Location
{
public:
    string grass;
    Grass();
    void SetAmount();
    int GetAmount();
};

