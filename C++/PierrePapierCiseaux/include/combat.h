#ifndef COMBAT_H
#define COMBAT_H

#include "perso.h"

class Combat
{
    public:
        Combat();
        virtual ~Combat();

        void setPtrJoueur(Perso * joueur);
        void setPtrEnnemi(Perso * ennemi);
        void start();

    protected:

    private:
        Perso * joueur;
        Perso * ennemi;
};

#endif // COMBAT_H
