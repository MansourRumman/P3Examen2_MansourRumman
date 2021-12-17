#include "Liga.h"

Liga::Liga() {
	this->tablaPosiciones=new Tabla();
}
void Liga::leerEquipos(char* archivoEntrada) {
	ifstream file(archivoEntrada);
	if(file.is_open()) {
		int contador = 0;
		while(!file.eof()) {
			string linea;
			getline(file,linea);
			if(linea=="") {
				continue;
			}
			stringstream ss;
			ss<<linea;
			string token;
			tablaPosiciones->addfila(new FilaTabla(new Equipo(ss.str())));
		}
	}
}
void Liga::leerPartidos(char* archivoEntrada) {
	Equipo* equipo1=NULL;
	Equipo* equipo2=NULL;
	int goles1=0;
	int goles2=0;
	ifstream file(archivoEntrada);
	if(file.is_open()) {
		int contador = 0;
		while(!file.eof()) {
			string linea;
			getline(file,linea);
			if(linea=="") {
				continue;
			}
			stringstream ss;
			ss<<linea;
			string token;
			int columna=0;
			while(getline(ss,token,';')) {
				if(columna==0) { //obtener nombre
					equipo1=this->tablaPosiciones->buscarEquipo(token);
					columna++;
				} else if(columna==1) {
					equipo2=this->tablaPosiciones->buscarEquipo(token);
					//extraer el char
					columna++;
				} else {
					//convertir a int
					stringstream ss_int;
					ss_int<<token;
					int valor;
					ss_int >> valor;
					if(columna == 2) {
						goles1=valor;

					} else if(columna == 3) {
						goles2=valor;
						Partido* nuevoPartido = new Partido(equipo1,equipo2,goles1,goles2);
						partidos.push_back(nuevoPartido);
						equipo1=NULL;
						equipo2=NULL;
						goles1=0;
						goles2=0;

					}
					columna++;
				}

			}
		}
	}
}
void Liga::imprimirEquipos(){
	for(int i=0;tablaPosiciones.size();i++){
		cout<<tablaPosiciones[i]<<endl;
	}
	
}
void Liga::imprimirPartidos(){
	
}

Liga::~Liga(){
	
}
