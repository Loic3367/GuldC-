#include "perso.h"

Perso::Perso()
{
    //ctor
}

Perso::Perso(int pdv)
{
    this->pdv = pdv;
}

Perso::~Perso()
{
    //dtor
}

bool Perso::estVivant()
{
    if (pdv>0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Perso::perdPdv()
{
    this->pdv--;
}
