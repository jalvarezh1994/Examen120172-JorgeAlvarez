#include "Escultura.h"

Escultura::Escultura(){

}

Escultura::Escultura(string ID,string Nombre,string Autor,string FechaDeIngreso,double Peso,string Material){
    this->Peso=Peso;
    this->Material=Material;
    this->ID=ID;
    this->Nombre=Nombre;
    this->Autor=Autor;
    this->FechaDeIngreso=FechaDeIngreso;
}

void Escultura::setPeso(double Peso){
   this-> Peso=Peso;
}

double Escultura::getPeso(){
   return Peso;
}

void Escultura::setMaterial(string Material){
   this-> Material=Material;
}

string Escultura::getMaterial(){
   return Material;
}
