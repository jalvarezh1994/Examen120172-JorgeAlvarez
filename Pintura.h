#include <iostream>
#include <string>
#include "Arte.h"

using namespace std;

#ifndef PINTURA_H
#define PINTURA_H
class Pintura:public Arte{
    private:
        string MaterialLienzo;
        string Tecnica;
    public:
        Pintura(string,string,string,string,string,string);
        Pintura();
        string getMaterialLienzo();
        void setMaterialLienzo(string);
        string getTecnica();
        void setTecnica(string);
};
#endif
