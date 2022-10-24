#ifndef _SOMMET
#define _SOMMET

#include <iostream>

using namespace std;

class Sommet {
    private:
        char* etiquette;
        int marquage;

    public:
        Sommet(char* etiquette);
};

const ostream& operator <<(ostream& out, const Sommet &i);

#endif