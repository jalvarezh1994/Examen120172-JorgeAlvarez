#include "DisenoArquitectonico.h"

DisenoArquitectonico::DisenoArquitectonico(string TipoTerreno){
    this->TipoTerreno=TipoTerreno;
}
DisenoArquitectonico::DisenoArquitectonico(){

}
void DisenoArquitectonico::setTipoTerreno(string TipoTerreno){
   this-> TipoTerreno=TipoTerreno;
}
string DisenoArquitectonico::getTipoTerreno(){
   return TipoTerreno;
}
