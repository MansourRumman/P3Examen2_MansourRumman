#ifndef TABLA_H
#define TABLA_H
#include <vector>
#include "FilaTabla.h"
#include "Partido.h"
using namespace std;

class Tabla {
	public:
		Tabla();
		void operator+(Partido*);
		void ordenarTabla();
		void operator<<(char* archivoSalida);
		Equipo* buscarEquipo(string);
		void addfila(FilaTabla*);
		~Tabla();
	protected:
		vector<FilaTabla*> filas;
};

#endif