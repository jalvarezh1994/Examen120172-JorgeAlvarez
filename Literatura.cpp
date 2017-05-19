#include "Literatura.h"

Literatura::Literatura(){

}

Literatura::Literatura(string ID,string Nombre,string Autor,string FechaDeIngreso,string Genero,string Epoca){
    this->Genero=Genero;
    this->Epoca=Epoca;
    this->ID=ID;
    this->Nombre=Nombre;
    this->Autor=Autor;
    this->FechaDeIngreso=FechaDeIngreso;
}

void Literatura::setGenero(string Genero){
   this-> Genero=Genero;
}

string Literatura::getGenero(){
   return Genero;
}

void Literatura::setEpoca(string Epoca){
   this-> Epoca=Epoca;
}

string Literatura::getEpoca(){
   return Epoca;
}
