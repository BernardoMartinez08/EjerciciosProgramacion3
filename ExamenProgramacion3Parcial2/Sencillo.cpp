#include "Sencillo.h"
#include <iostream>

using namespace std;

Sencillo::Sencillo() : nombreCancion(nullptr),duracion(0), siguienteSencillo(nullptr) {

}

Sencillo::Sencillo(const char* _nombre,int _duracion, Sencillo* _sig) : duracion(_duracion), siguienteSencillo(_sig){
	nombreCancion = new char[strlen(_nombre)];
	strcpy_s(nombreCancion, strlen(_nombre) + 1, _nombre);
}

void Sencillo::setNombre(const char* _nombre) {
	if (nombreCancion != nullptr)
		delete nombreCancion;

	nombreCancion = new char[strlen(_nombre)];
	strcpy_s(nombreCancion, strlen(_nombre) + 1, _nombre);
}

void Sencillo::setDuracion(int _duracion) {
	this->duracion = _duracion;
}

void Sencillo::setSiguienteSencillo(Sencillo* _sig) {
	this->siguienteSencillo = _sig;
}


char* Sencillo::getNombre() {
	return this->nombreCancion;
}

int Sencillo::getDuracion() {
	return this->duracion;
}

Sencillo* Sencillo::getSiguienteSencillo() {
	return this->siguienteSencillo;
}