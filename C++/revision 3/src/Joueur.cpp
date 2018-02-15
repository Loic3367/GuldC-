#include "Joueur.h"

Joueur::Joueur()
{
    //ctor
}

Joueur::~Joueur()
{
    //dtor
}



int Joueur::getChoix()
{
    return choix;
}

void Joueur::setChoix(int newChoix)
{
    this->choix = newChoix;
}

