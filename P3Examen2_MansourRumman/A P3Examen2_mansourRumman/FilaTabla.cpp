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
void FilaTabla::setGolesAnotados(int num) {
	this->golesAnotados+=num;
}


void FilaTabla::setGolesRecibidos(int numinus) {
	this->golesRecibidos+=numinus;
}

int FilaTabla::getCantPartidosJugados() {
	return this->cantPartidosJugados;
}

int FilaTabla::getGolesAnotados() {
	return this->golesAnotados;
}

int FilaTabla::getGolesRecibidos() {
	return this->golesRecibidos;
}

int FilaTabla::getPartidosEmpatados() {
	return this->partidosEmpatados;
}

int FilaTabla::getPartidosGanados() {
	return this->partidosGanados;
}

int FilaTabla::getPartidosPerdidos() {
	return this->partidosPerdidos;
}

void FilaTabla::setCantPartidosJugados() {
	this->cantPartidosJugados++;
}


void FilaTabla::setPartidosEmpatados() {
	this->partidosEmpatados++;
}

void FilaTabla::setPartidosGanados() {
	this->partidosGanados++;
}

void FilaTabla::setPartidosPerdidos() {
	this->partidosPerdidos++;
}

string FilaTabla::toString() {
	string retval;
	 retval = equipo->toString() + "," + to_string(getPuntos())+","+to_string(this->cantPartidosJugados)+","+to_string(this->partidosGanados)+","+to_string(this->partidosEmpatados)+","+to_string(this->partidosPerdidos)+","+to_string(this->golesAnotados)+","+to_string(this->golesRecibidos);
	return retval;
}

FilaTabla::~FilaTabla() {
}