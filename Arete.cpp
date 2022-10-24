#include "Arete.hpp"
#include <iostream>

using namespace std;

Arete::Arete(int poids, char* etiquette1, char* etiquette2) {
    this->poids = poids;
    this->sommet1 = new Sommet(etiquette1);
    this->sommet2 = new Sommet(etiquette2);
}


