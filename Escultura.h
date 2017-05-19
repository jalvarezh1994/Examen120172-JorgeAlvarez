#include <iostream>
#include <string>
#include "Arte.h"
using namespace std;

#ifndef ESCULTURA_H
#define ESCULTURA_H
class Escultura:public Arte{
    protected:
        double Peso;
        string Material;
    public:
        Escultura(double,string);
        Escultura();
        double getPeso();
        void setPeso(double);

        string getMaterial();
        void setMaterial(string);

};
#endif
