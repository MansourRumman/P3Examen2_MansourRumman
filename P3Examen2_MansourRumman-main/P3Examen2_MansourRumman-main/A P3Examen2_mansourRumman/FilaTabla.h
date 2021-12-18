#ifndef FILATABLA_H
#define FILATABLA_H
#include "Equipo.h"
class FilaTabla {
	public:
		FilaTabla(Equipo*);
		string extraerNombre();
		Equipo* buscarEquipo(string);
		Equipo* getEquipo();
		string toString();
		int getPuntos();
		int getCantPartidosJugados();
		int getGolesAnotados();
		int getGolesRecibidos();
		int getPartidosGanados();
		int getPartidosEmpatados();
		int getPartidosPerdidos();
		void setCantPartidosJugados();
		void setGolesAnotados(int);
		void setGolesRecibidos(int);
		void setPartidosGanados();
		void setPartidosEmpatados();
		void setPartidosPerdidos();
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