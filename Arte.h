#include <iostream>
#include <string>

using namespace std;

#ifndef ARTE_H
#define ARTE_H
class Arte{
    protected:
        string ID;
        string Nombre;
        string Autor;
        string FechaDeIngreso;
    public:
        Arte(string,string,string,string);
        Arte();
        string getID();
        void setID(string);

        string getNombre();
        void setNombre(string);

        string getAutor();
        void setAutor(string);

        string getFechaDeIngreso();
        void setFechaDeIngreso(string);

};
#endif