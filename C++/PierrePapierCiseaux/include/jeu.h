#ifndef JEU_H
#define JEU_H

#include "perso.h"
#include "combat.h"

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
        Combat * rencontre;
};

#endif // JEU_H
