#ifndef _ARETE
#define _ARETE

#include "Sommet.hpp"

#include <iostream>

using namespace std;

class Arete {
    private:
        int poids;
        Sommet* sommet1;
        Sommet* sommet2;

    public:
        Arete(int poids, char* etiquette1, char* etiquette2);
        Arete(Arete &a);
        Arete(int poids, Sommet* sommet1, Sommet* sommet2);
};

#endif