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

				break;
			}
			case 4: {

				break;
			}
			case 5: {
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