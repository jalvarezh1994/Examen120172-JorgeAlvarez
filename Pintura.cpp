#include "Pintura.h"

Pintura::Pintura(string MaterialLienzo,string Tecnica){
    this->MaterialLienzo=MaterialLienzo;
    this->Tecnica=Tecnica;
}
Pintura::Pintura(){

}void Pintura::setMaterialLienzo(string MaterialLienzo){
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
