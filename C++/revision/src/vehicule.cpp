#include "vehicule.h"
#include <iostream>

using namespace std;

vehicule::vehicule()
{
    //ctor
}

vehicule::~vehicule()
{
    //dtor
    cout << "Crash !" << endl;
}
void vehicule::afficheNbRoues()
{
    cout << nb_roues << endl;
}

void vehicule::Vroum()
{
    cout << "Vroum vroum !" << endl;
}
