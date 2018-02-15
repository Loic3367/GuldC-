#include <iostream>
#include <vehicule.h>
#include <moto.h>
#include <voiture.h>
#include <velo.h>

using namespace std;

int main()
{
    moto suzuki; // Création d'une moto instancier
    voiture clio; // création d'une voiture instancier
    velo bleu;
    vehicule * ptr; //Ceci est un pointeur qui pointe vers vehicule

    suzuki.afficheNbRoues();
    clio.afficheNbRoues();
    bleu.afficheNbRoues();
    ptr = &clio; // le pointeur pointe sur un enfant et est considéré comme un véhicule (addresse de la ram de la clio)
    ptr->afficheNbRoues();
    //Le pointeur se reinitiliase dès que il est utilisé
    ptr = &suzuki;
    ptr->afficheNbRoues();

    delete ptr;

    vehicule::Vroum();
    return 0;
}
