#include <typeinfo>
#include <iostream>
#include <string>
#include <vector>
#include "Arte.h"
#include "Literatura.h"
#include "Escultura.h"
#include "Pintura.h"
#include "DisenoArquitectonico.h"

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
						string id=generaId(Museo);
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
						cout<<"Ingrese la época: ";
						cin>>epoca;
						Literatura a(id,nombre,autor,fecha,genero,epoca);
						Museo.push_back(a);
						break;
					}
					case 2:{
						string id=generaId(Museo);
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						string autor;
						cout<<"Ingrese autor: ";
						cin>>autor;
						string fecha;
						cout<<"Ingrese fecha de ingreso: ";
						cin>>fecha;
						double peso;
						cout<<"Ingrese el peso: ";
						cin>>peso;
						string material;
						cout<<"Ingrese el material: ";
						cin>>material;
						Escultura a(id,nombre,autor,fecha,peso,material);
						Museo.push_back(a);
						break;
					}
					case 3:{
						string id=generaId(Museo);
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						string autor;
						cout<<"Ingrese autor: ";
						cin>>autor;
						string fecha;
						cout<<"Ingrese fecha de ingreso: ";
						cin>>fecha;
						string peso;
						cout<<"Ingrese el material del lienzo: ";
						cin>>peso;
						string material;
						cout<<"Ingrese la técnica: ";
						cin>>material;
						Pintura a(id,nombre,autor,fecha,peso,material);
						Museo.push_back(a);      
						break;
					}
					case 4:{
						string id=generaId(Museo);
						string nombre;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						string autor;
						cout<<"Ingrese autor: ";
						cin>>autor;
						string fecha;
						cout<<"Ingrese fecha de ingreso: ";
						cin>>fecha;
						string peso;
						cout<<"Ingrese el material del terreno: ";
						cin>>peso;
						string material;
						DisenoArquitectonico a(id,nombre,autor,fecha,peso);
						Museo.push_back(a);
						break;
					}
				}
				break;
			}
			case 2:{
				int posicion;				
				cout<<"Seleccione la obra de arte que desea eliminar: ";
				cin>>posicion;
				if(posicion>0&&posicion<Museo.size())
					Museo.erase(Museo.begin()+posicion);
			}
			case 3:{
				string listar="";
				for(int i=0;i<Museo.size();i++){
					Arte a=Museo[i];
					listar+=i+". "+a.getID()+","+a.getNombre()+","+a.getAutor()+","+a.getFechaDeIngreso();
				}
			}
		}
	}while(opc==5);

	return 0;
}

string generaId(vector<Arte> a){
	return "";
}
