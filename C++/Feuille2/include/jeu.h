#ifndef JEU_H
#define JEU_H

#include "perso.h"

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

    protected:

    private:
        Perso * joueur;
        Perso * ennemi;
        int cptEnnemi = 0;

        bool jeuTermine();
};

#endif // JEU_H
