#include "Partido.h"
Partido::Partido(Equipo* equipo1,Equipo* equipo2,int goles1,int goles2) {
	this->equipo1=equipo1;
	this->equipo2=equipo2;
	this->goles1=goles1;
	this->goles2=goles2;
}
string Partido::tostring() {
	string retVal;
	retVal= equipo1->getNombre();
	+","+equipo2->getNombre();
	+","+to_string(getGoles1())+","+to_string(getGoles2());
	return retVal;
}

Equipo* Partido::getEquipo1() {
	return equipo1;
}

Equipo* Partido::getEquipo2() {
	return equipo2;
}

int Partido::getGoles1() {
	return goles1;
}

int Partido::getGoles2() {
	return goles2;
}

void Partido::setEquipo1(Equipo* equipo) {
	equipo1=equipo;
}

void Partido::setEquipo2(Equipo* equipo) {
	equipo2=equipo;
}

void Partido::setGoles1(int goles) {
	goles1=goles;
}

void Partido::setGoles2(int goles) {
	goles2=goles;
}