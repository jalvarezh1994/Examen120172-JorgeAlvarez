#include "DisenoArquitectonico.h"

DisenoArquitectonico::DisenoArquitectonico(){

}

DisenoArquitectonico::DisenoArquitectonico(string ID,string Nombre,string Autor,string FechaDeIngreso,string TipoTerreno){
    this->TipoTerreno=TipoTerreno;
    this->ID=ID;
    this->Nombre=Nombre;
    this->Autor=Autor;
    this->FechaDeIngreso=FechaDeIngreso;
}

void DisenoArquitectonico::setTipoTerreno(string TipoTerreno){
   this-> TipoTerreno=TipoTerreno;
}

string DisenoArquitectonico::getTipoTerreno(){
   return TipoTerreno;
}
