#include "Literatura.h"

Literatura::Literatura(string Genero,string Epoca){
    this->Genero=Genero;
    this->Epoca=Epoca;
}
Literatura::Literatura(){

}void Literatura::setGenero(string Genero){
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