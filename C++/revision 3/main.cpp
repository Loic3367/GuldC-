#include <iostream>
#include <Joueur.h>
#include <vector>
#include <stdlib.h>
#include <time.h>




using namespace std;

int main()
{
    srand(time(NULL));
    //Affilier un vecteur a la classe IA
    std::vector<Joueur *> listeJoueur;

    //Choisir combien d'IA jouent
    int nbrJoueur;
    cout << "Combien de joueurs jouent ?\n";
    std::cin >> nbrJoueur;

    for (int i = 1; i <= nbrJoueur; i++ )
    {
        listeJoueur.push_back(new Joueur);
        std::cout << listeJoueur.size();
    }

    std::cout << std::endl;

    for (auto &player : listeJoueur)
    {
        //Pile ou face
        player->setChoix(rand()%2);
        std::cout << player->getChoix();

        /*if (player->setChoix()== 0)
        {

        }*/
    }

    system("pause");
    return 0;
}
