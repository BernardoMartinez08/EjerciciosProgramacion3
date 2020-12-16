#pragma once
#ifndef SENCILLO_H
#define SENCILLO_H

class Sencillo {
public:
	Sencillo();
	Sencillo(const char*,int, Sencillo*);

	void setNombre(const char*);
	void setDuracion(int);
	void setSiguienteSencillo(Sencillo*);

	char* getNombre();
	int getDuracion();
	Sencillo* getSiguienteSencillo();
private:
	char* nombreCancion;
	int duracion;
	Sencillo* siguienteSencillo;

};


#endif