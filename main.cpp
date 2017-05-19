#include <iostream>
#include <string>
#include <vector>
#include "Arte.h"

using namespace std;

string generaId(vector<Arte>);

int main(){
	vector<Arte> Museo;
	vector<Arte> Transferidos;
	
	int opc;

	do{
		cout<<"Menú"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Eliminar"<<endl;
		cout<<"3. Listar"<<endl;
		cout<<"4. Listar transferidos"<<endl;
		cin>>opc;
		switch(opc){
			case 1:{
				cout<<"1. Literatura"<<endl;
				cout<<"2. Escultura"<<endl;
				cout<<"3. Pintura"<<endl;
				cout<<"4. Diseño arquitectónico"<<endl;
				int op;
				cin>>op;
				switch(op){
					case 1:{
						string id=generaId();
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						string autor;
						cout<<"Ingrese autor: ";
						cin>>autor;
						string fecha;
						cout<<"Ingrese fecha de ingreso: ";
						cin>>fecha;
						string genero;
						cout<<"Ingrese el género literario: ";
						cin>>genero;
						string epoca;
						cout<<"Ingrese la época";
						cin>>epoca;
						Literatura a(id,nombre,autor,fecha,genero,epoca);
					}
				}

			}
		}
	}while(opc==5);

	return 0;
}

string generaId(vector<Arte> a){
	return "";
}
