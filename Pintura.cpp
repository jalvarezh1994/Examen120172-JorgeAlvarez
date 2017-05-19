#include "Pintura.h"

Pintura::Pintura(string ID,string Nombre,string Autor,string FechaDeIngreso,string MaterialLienzo,string Tecnica){
    this->MaterialLienzo=MaterialLienzo;
    this->Tecnica=Tecnica;
    this->ID=ID;
    this->Nombre=Nombre;
    this->Autor=Autor;
    this->FechaDeIngreso=FechaDeIngreso;
}

Pintura::Pintura(){

}

void Pintura::setMaterialLienzo(string MaterialLienzo){
   this-> MaterialLienzo=MaterialLienzo;
}

string Pintura::getMaterialLienzo(){
   return MaterialLienzo;
}

void Pintura::setTecnica(string Tecnica){
   this-> Tecnica=Tecnica;
}

string Pintura::getTecnica(){
   return Tecnica;
}
