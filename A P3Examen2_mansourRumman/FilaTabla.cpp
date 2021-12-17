#include "FilaTabla.h"

FilaTabla::FilaTabla(Equipo* equipo) {
	this->equipo=equipo;
	int cantPartidosJugados=0;
	int golesAnotadoss=0;
	int golesRecibidoss=0;
	int partidosGanadoss=0;
	int partidosEmpatadoss=0;
	int partidosPerdidoss=0;
}
string FilaTabla::tostring(){
	
}
string FilaTabla::extraerNombre(){
	return this->equipo->getNombre();
}
Equipo* FilaTabla::getEquipo(){
	return this->equipo;
}
FilaTabla::~FilaTabla() {
}