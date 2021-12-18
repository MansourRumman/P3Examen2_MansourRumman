#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
using namespace std;
class Equipo {
	public:
		Equipo(string);
		void setNombre(int string);
		string toString();
		string getNombre();
	protected:
		string nombre;
};

#endif