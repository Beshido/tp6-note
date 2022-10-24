#include "Sommet.hpp"
#include <iostream>

using namespace std;

Sommet::Sommet(char* etiquette): etiquette { etiquette } {}

void Sommet::setMarquage(int i) {
    this->marquage = i;
}

char* Sommet::getEtiquette() const {
    return this->etiquette;
}

const ostream& operator <<(ostream& out, const Sommet &s) {
    out << "C'est un sommet avec pour marquage '" << s.getEtiquette() << "'." << endl;
    return out;
}
