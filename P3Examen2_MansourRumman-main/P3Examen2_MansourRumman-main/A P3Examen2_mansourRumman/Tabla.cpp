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
void Tabla::operator+(Partido* partido) {
	for(int j=0; j<filas.size(); j++) {
		if(filas[j]->getEquipo()->getNombre()==partido->getEquipo2()->getNombre()) {
			filas[j]->setCantPartidosJugados();
			filas[j]->setGolesAnotados(partido->getGoles2());
			filas[j]->setGolesRecibidos(partido->getGoles1());
			if(partido->getGoles1() > partido->getGoles2()) {
				filas[j]->setPartidosPerdidos();
			} else if(partido->getGoles1() < partido->getGoles2()) {
				filas[j]->setPartidosGanados();
			} else {
				filas[j]->setPartidosEmpatados();
			}
			} else if(filas[j]->getEquipo()->getNombre()==partido->getEquipo1()->getNombre()) {
				filas[j]->setCantPartidosJugados();
				filas[j]->setGolesAnotados(partido->getGoles1());
				filas[j]->setGolesRecibidos(partido->getGoles2());
				if(partido->getGoles1() < partido->getGoles2()) {
					filas[j]->setPartidosPerdidos();
				} else if(partido->getGoles1() > partido->getGoles2()) {
					filas[j]->setPartidosGanados();
				} else {
					filas[j]->setPartidosEmpatados();
				}
			}
		}
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
	void Tabla::operator<<(char* archivoSalida) {
		ofstream outputFile(archivoSalida);
		for(int i=0; i<filas.size(); i++) {
			FilaTabla* row=filas[i];
			string retval=row->toString()+"\n";
			outputFile<<retval;
		}
		outputFile.close();
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