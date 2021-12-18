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
string FilaTabla::toString(){
	string salida = equipo->toString() + "," + to_string(getPuntos())+","+to_string(this->cantPartidosJugados)+","+to_string(this->partidosGanados)+","+to_string(this->partidosEmpatados)+","+to_string(this->partidosPerdidos)+","+to_string(this->golesAnotados)+","+to_string(this->golesRecibidos);
	return salida;
}
string FilaTabla::extraerNombre() {
	return this->equipo->getNombre();
}
Equipo* FilaTabla::getEquipo() {
	return this->equipo;
}
int FilaTabla::getPuntos() {
	int puntos=(this->partidosGanados*3)+this->partidosEmpatados;
	return puntos;
}
int FilaTabla::getPartidosEmpatados() {
	return this->partidosEmpatados;
}

int FilaTabla::getPartidosGanados() {
	return this->partidosGanados;
}
FilaTabla::~FilaTabla() {
}