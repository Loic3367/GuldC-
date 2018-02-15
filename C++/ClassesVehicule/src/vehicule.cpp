#include "vehicule.h"
#include <iostream>

using namespace std;

Vehicule::Vehicule()
{
    //ctor
}

Vehicule::~Vehicule()
{
    //dtor
    //cout << "Crash !" << endl;
}

void Vehicule::afficheNbRoues()
{
    std::cout << this->nbRoues << std::endl;
}

void Vehicule::Vroum()
{
    cout << "Vroum vroum !" << endl;
}


