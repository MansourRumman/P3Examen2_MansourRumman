#include "Equipo.h"

Equipo::Equipo(string nombre) {
	this->nombre=nombre;
}
string Equipo::toString() {
	return nombre;
}


string Equipo::getNombre() {
	return this->nombre;
}