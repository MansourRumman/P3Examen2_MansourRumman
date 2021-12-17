#ifndef FILATABLA_H
#define FILATABLA_H
#include "Equipo.h"
class FilaTabla {
	public:
		FilaTabla(Equipo*);
		Equipo* buscarEquipo(string);
		Equipo* getEquipo();
		string tostring();
		string extraerNombre();
		~FilaTabla();
	protected:
		int cantPartidosJugados;
		int golesAnotados;
		int golesRecibidos;
		int partidosGanados ;
		int partidosEmpatados ;
		int partidosPerdidos;
		Equipo* equipo;

};

#endif