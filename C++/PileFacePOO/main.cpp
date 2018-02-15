#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

#include "joueur.h"

using namespace std;

//Le joueur choisit pile ou face
void choix(Joueur * ptr)
{
    ptr->choix = rand()%2;
}

int main()
{
    srand(time(NULL));

    vector<Joueur*> mesJoueurs;
    int nbJ;
    int jetPiece;
    bool gagne = false;

    //Choisir entre 2 et 10 joueurs
    do
    {
        cout << "Nombre de joueurs : ";
        cin >> nbJ;
    }
    while(nbJ<2 || nbJ>10);

    //Remplir le vecteur
    for (int i=0; i<nbJ; i++)
    {
        mesJoueurs.push_back(new Joueur());
    }

    //On continue la partie tant que personne n'a gagné
    while(true)
    {
        //Chaque joueur choisit pile ou face
        for (int i=0; i<mesJoueurs.size(); i++)
        {
            //Version fonction
            choix(mesJoueurs[i]);
            //Version methode
            //mesJoueurs[i]->choisirPF();
        }

        //On lance la pièce
        jetPiece = rand()%2;

        //On compare et on attribue des points
        for (int i=0; i<mesJoueurs.size(); i++)
        {
            if (mesJoueurs[i]->choix == jetPiece)
            {
                mesJoueurs[i]->score++;
                if (mesJoueurs[i]->score>=5) {
                    gagne=true;
                }
            }
        }

        if (gagne)
        {
            break;
        }
    }

    return 0;
}
