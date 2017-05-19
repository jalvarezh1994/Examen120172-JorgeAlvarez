#include "Arte.h"

Arte::Arte(string ID,string Nombre,string Autor,string FechaDeIngreso){
    this->ID=ID;
    this->Nombre=Nombre;
    this->Autor=Autor;
    this->FechaDeIngreso=FechaDeIngreso;
}
Arte::Arte(){

}
void Arte::setID(string ID){
   this-> ID=ID;
}
string Arte::getID(){
   return ID;
}
void Arte::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string Arte::getNombre(){
   return Nombre;
}
void Arte::setAutor(string Autor){
   this-> Autor=Autor;
}
string Arte::getAutor(){
   return Autor;
}
void Arte::setFechaDeIngreso(string FechaDeIngreso){
   this-> FechaDeIngreso=FechaDeIngreso;
}
string Arte::getFechaDeIngreso(){
   return FechaDeIngreso;
}
