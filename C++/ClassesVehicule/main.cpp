#include <iostream>
#include "moto.h"
#include "voiture.h"
#include "vehicule.h"

using namespace std;

void inc(int * nb)
{
    //nb +=1; // déplacer le pointeur
    *nb += 1; //ajouter 1 à ce sur quoi ça pointe
}

int main()
{
    Moto * suzuki = new Moto();
    Voiture clio;
    Vehicule * ptr;

    //suzuki.afficheNbRoues();
    //clio.afficheNbRoues();

    ptr = &clio;
    ptr->afficheNbRoues();

    ptr = suzuki;
    ptr->afficheNbRoues();

    int i = 1;
    cout << i << endl;
    inc(&i);
    cout << i << endl;

    Vehicule::Vroum();

    delete suzuki;

    return 0;
}
