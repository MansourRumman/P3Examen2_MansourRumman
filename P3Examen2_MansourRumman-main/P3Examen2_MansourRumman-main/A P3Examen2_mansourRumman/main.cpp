#include <iostream>
#include "Liga.h"
using namespace std;
int menu();

int main(int argc, char** argv) {
	Liga* liga=new Liga();
	int opcion = 0;
	while (opcion != 6) {
		switch(opcion = menu() )  {
			case 1: {
				liga->leerEquipos("equipos.csv");
				liga->leerPartidos("partidos.csv");
				break;
			}
			case 2: {

				break;
			}
			case 3: {
				liga->imprimirPartidos();
				break;
			}
			case 4: {
				liga->ligallama();
				break;
			}
			case 5: {
				cout<<"EQUIPOS Puntos Partidosjugados PGanados Pperdios Pempatados Ganotados Gencontra"<<endl;;
				ifstream file("tabla.csv");
				if(file.is_open()) {
					while(!file.eof()) {
						string linea;
						getline(file,linea);
						stringstream ss;
						ss<<linea;
						string token;
						int columna=0;
						while(getline(ss,token,';')) {
							if(columna < 7) {
								cout<<token<<" ";
								columna++;
							} else {
								cout<<token<<endl;
							}
						}
					}
				}
				file.close();
				break;
			}
		}
	}

	delete liga;
	return 0;
}
int menu() {
	int opcion=0;
	cout<<"Menu"<<endl
	    <<"1) Leer Archivo"<<endl
	    <<"2) Exportar Tabla"<<endl
	    <<"3) Imprimir Partidos"<<endl
	    <<"4)Imprimir Equipos"<<endl
	    <<"5)Imprimir Tabla de Posiciones"<<endl
	    <<"6)salir"<<endl
	    <<"ingrese su opcion:";
	cin>>opcion;
	return opcion;
}