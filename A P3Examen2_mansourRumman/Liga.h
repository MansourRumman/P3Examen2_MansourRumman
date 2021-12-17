#ifndef LIGA_H
#define LIGA_H
#include <vector>
#include "Tabla.h"
#include <iostream>
#include <fstream> //file stream
#include <sstream>
using namespace std;

#include "Partido.h"
#include "Tabla.h"

class Liga
{
	public:
		Liga();
		void imprimirPartidos();
		void imprimirEquipos();
		void leerPartidos(char* archivoEntrada);
		void leerEquipos(char* archivoEntrada);
		void actualizarTabla();
		void exportarTablaCSV(char* archivoSalida);
		~Liga();
	protected:
		Tabla* tablaPosiciones;
		vector<Partido*> partidos;
		
		
};

#endif