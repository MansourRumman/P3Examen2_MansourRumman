#ifndef PARTIDO_H
#define PARTIDO_H
#include "Equipo.h"
class Partido
{
public:
		Partido(Equipo*,Equipo*,int,int);
		~Partido();
		Equipo* getEquipo1();
		Equipo* getEquipo2();
		string tostring();
		int getGoles1();
		int getGoles2();
		void setEquipo1(Equipo*);
		void setEquipo2(Equipo*);
		void setGoles1(int);
		void setGoles2(int);
	private:
		Equipo* equipo1;
		Equipo* equipo2;
		int goles1;
		int goles2;
	};
#endif