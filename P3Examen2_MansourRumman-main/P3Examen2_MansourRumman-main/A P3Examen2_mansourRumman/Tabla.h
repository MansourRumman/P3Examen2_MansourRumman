#ifndef TABLA_H
#define TABLA_H
#include <vector>
#include "FilaTabla.h"
#include "Partido.h"
#include <iostream>
using namespace std;

class Tabla {
	public:
		Tabla();
		void imprimirEquipos();
		void operator+(Partido*);
		void ordenarTabla();
		void operator<<(char* archivoSalida);
		Equipo* buscarEquipo(string);
		void addfila(FilaTabla*);
		vector<FilaTabla*> getFilas();
		~Tabla();
	protected:
		vector<FilaTabla*> filas;
};

#endif