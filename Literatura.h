#include <iostream>
#include <string>
#include "Arte.h"

using namespace std;

#ifndef LITERATURA_H
#define LITERATURA_H
class Literatura: public Arte{
    protected:
        string Genero;
        string Epoca;
    public:
        Literatura(string,string,string,string,string,string);
        Literatura();
        string getGenero();
        void setGenero(string);

        string getEpoca();
        void setEpoca(string);

};
#endif
