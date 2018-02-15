#ifndef JOUEUR_H
#define JOUEUR_H


class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();

        int getChoix();
        void setChoix(int newChoix);

        int choix;
        int pts;

    protected:


    private:

};

#endif // JOUEUR_H
