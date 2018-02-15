#include "joueur.h"
#include "stdlib.h"

Joueur::Joueur()
{
	//ctor
}

Joueur::~Joueur()
{
	//dtor
}

void Joueur::choisirPF()
{
	this->choix = rand() % 2;
}
