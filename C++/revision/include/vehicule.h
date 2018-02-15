#ifndef VEHICULE_H
#define VEHICULE_H


class vehicule
{
    public:
        vehicule();
        virtual ~vehicule();
        void afficheNbRoues();
        static void Vroum();

    protected:
        int nb_roues;
    private:
};

#endif // VEHICULE_H
