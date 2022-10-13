#pragma once
#include "Location.h"
#include<iostream>
using namespace std;
class Fox :
    public Location
{
public:
    const int max_age_Fox = 3;
    string fox;
    Fox();
    void SetAmount();
    int GetAmount();
};

