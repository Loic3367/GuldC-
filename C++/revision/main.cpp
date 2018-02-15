#include <iostream>
#include <vehicule.h>
#include <moto.h>
#include <voiture.h>
#include <velo.h>

using namespace std;

int main()
{
    moto suzuki; // Cr�ation d'une moto instancier
    voiture clio; // cr�ation d'une voiture instancier
    velo bleu;
    vehicule * ptr; //Ceci est un pointeur qui pointe vers vehicule

    suzuki.afficheNbRoues();
    clio.afficheNbRoues();
    bleu.afficheNbRoues();
    ptr = &clio; // le pointeur pointe sur un enfant et est consid�r� comme un v�hicule (addresse de la ram de la clio)
    ptr->afficheNbRoues();
    //Le pointeur se reinitiliase d�s que il est utilis�
    ptr = &suzuki;
    ptr->afficheNbRoues();

    delete ptr;

    vehicule::Vroum();
    return 0;
}
