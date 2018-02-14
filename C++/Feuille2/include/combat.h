#ifndef COMBAT_H
#define COMBAT_H

#include "perso.h"
class combat
{
    public:
        combat();
        virtual ~combat();

        void setPtrEnnemi(Perso * ennemi);
        void setPtrJoueur(Perso * joueur);
        void start();


    protected:

    private:
        //Ici sont les attributs
        Perso * joueur;
        Perso * ennemi;
        int cptEnnemi = 0;


};

#endif // COMBAT_H
