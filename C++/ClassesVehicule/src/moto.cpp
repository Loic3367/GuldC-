#include "moto.h"
#include <iostream>

using namespace std;

Moto::Moto()
{
    //ctor
    nbRoues = 2;
}

Moto::~Moto()
{
    //dtor
    cout << "Crash !" << endl;
}
