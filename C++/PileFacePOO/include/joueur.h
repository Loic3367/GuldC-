#ifndef JOUEUR_H
#define JOUEUR_H

class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();

        int choix;
        int score = 0;
        void choisirPF();
    protected:

    private:
};

#endif // JOUEUR_H
