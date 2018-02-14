#include "combat.h"

combat::combat()
{
    //ctor
}

combat::~combat()
{
    //dtor
}

void combat::setPtrEnnemi(Perso * ennemi)
{
    this->ennemi = ennemi;
}

void combat::setPtrJoueur(Perso * joueur)
{
    this->joueur = joueur;
}

void combat::start()
{
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
}
