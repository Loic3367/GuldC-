#ifndef VEHICULE_H
#define VEHICULE_H


class Vehicule
{
    public:
        Vehicule();
        virtual ~Vehicule();

        void afficheNbRoues();

        static void Vroum();

    protected:
        int nbRoues;
    private:

};

#endif // VEHICULE_H
