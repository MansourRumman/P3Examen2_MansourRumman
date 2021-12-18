#include "Tabla.h"

Tabla::Tabla() {
}
Equipo* Tabla::buscarEquipo(string n) {
	for(int i=0; i<filas.size(); i++) {
		if(n.compare(filas[i]->extraerNombre())==0) {
			return filas[i]->getEquipo();
		}
	}
	return NULL;
}
void Tabla::imprimirEquipos() {
	for(int i=0; i<filas.size(); i++) {
		cout<<filas[i]->extraerNombre()<<endl;
	}
}

void Tabla::ordenarTabla() {
	for(int i=0; i<filas.size(); i++) {
		int big=filas[i]->getPuntos();

		for(int j=i+1; j<filas.size(); j++) {
			if(filas[j]->getPuntos() > big) {
				FilaTabla* ft = filas[j];
				filas[j]=filas[i];
				filas[i]=ft;
				big=filas[j]->getPuntos();
			}
		}

	}

}
vector<FilaTabla*> Tabla::getFilas() {
	return this->filas;
}
void Tabla::addfila(FilaTabla* fila) {
	this->filas.push_back(fila);
}


Tabla::~Tabla() {
	for(int i=0; i<filas.size(); i++) {
		delete filas[i];
	}
}