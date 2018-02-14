#include "jeu.h"

#include <iostream>
//Pour le random
#include <stdlib.h>
#include <time.h>

#define PIERRE 1
#define PAPIER 2
#define CISEAUX 3

using namespace std;

Jeu::Jeu()
{
    //ctor
    srand(time(NULL));

    //Créer le joueur
    joueur = new Perso(10);
    //Créer le premier ennemi
    ennemi = new Perso(3);

    while (!jeuTermine())
    {
        //Phase de rencontre avec un ennemi
        this->rencontre = new combat();
        this->rencontre->SetPtrJoueur(this->joueur);


        while (joueur->estVivant() && ennemi->estVivant())
        {
            //Phase de combat

            //Le Pc choisit
            ennemi->choix = rand()%3+1;

            //Le joueur choisit
            cout << "1: Pierre" << endl
                << "2: Papier" << endl
                << "3: Ciseaux" << endl
                << "Votre choix:";

            cin >> joueur->choix;

            //On compare les choix
            switch (joueur->choix)
            {
            case PIERRE:
                switch (ennemi->choix)
                {
                case PIERRE:
                    ennemi->perdPdv();
                    joueur->perdPdv();
                    break;
                case PAPIER:
                    joueur->perdPdv();
                    break;
                case CISEAUX:
                    ennemi->perdPdv();
                    break;
                }
                break;
            case PAPIER:
                switch (ennemi->choix)
                {
                case PIERRE:
                    ennemi->perdPdv();
                    break;
                case PAPIER:
                    ennemi->perdPdv();
                    joueur->perdPdv();
                    break;
                case CISEAUX:
                    joueur->perdPdv();
                    break;
                }
                break;
            case CISEAUX:
                switch (ennemi->choix)
                {
                case PIERRE:
                    joueur->perdPdv();
                    break;
                case PAPIER:
                    ennemi->perdPdv();
                    break;
                case CISEAUX:
                    ennemi->perdPdv();
                    joueur->perdPdv();
                    break;
                }
                break;
            }
        }

        //Resolution de la phase de rencontre = qui est mort ?
        if (!ennemi->estVivant())
        {
            //On supprime l'ennemi
            delete ennemi;
            //On en recrée un nouveau
            ennemi = new Perso(3);
            cptEnnemi++;
        }
    }
}

Jeu::~Jeu()
{
    //dtor
}

bool Jeu::jeuTermine()
{
    if (!joueur->estVivant() || this->cptEnnemi>=3)
    {
        return true;
    }
    else
    {
        return false;
    }
}








