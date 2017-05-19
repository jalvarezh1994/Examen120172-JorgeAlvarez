#include <iostream>
#include <string>
#include "Arte.h"

using namespace std;

#ifndef DISENOARQUITECTONICO_H
#define DISENOARQUITECTONICO_H

class DisenoArquitectonico:public Arte{
    protected:
        string TipoTerreno;
    public:
        DisenoArquitectonico(string,string,string,string,string);
        DisenoArquitectonico();
        string getTipoTerreno();
        void setTipoTerreno(string);

};

#endif
