#include "Tabla.h"

Tabla::Tabla() {
}
Equipo* Tabla::buscarEquipo(string n){
	for(int i=0;i<filas.size();i++){
		if(n.compare(filas[i]->extraerNombre())==0){
			return filas[i]->getEquipo();
		}
	}
}

void Tabla::addfila(FilaTabla* fila){
	this->filas.push_back(fila);
}


Tabla::~Tabla() {
	for(int i=0;i<filas.size();i++){
		delete filas[i];
	}
}