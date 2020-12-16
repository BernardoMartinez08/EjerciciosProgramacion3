#include "Album.h"
#include <iostream>

using namespace std;

Album::Album() : nombreAlbum(nullptr),anioPublicacion(0),genero(nullptr), primerSencillo(nullptr), siguienteAlbum(nullptr) {

}

Album::Album(const char* _nombre, int _anioPublicacion, const char* _genero,Sencillo* _primerSencillo) : anioPublicacion(anioPublicacion), primerSencillo(_primerSencillo), siguienteAlbum(nullptr) {
	nombreAlbum = new char[strlen(_nombre)];
	strcpy_s(nombreAlbum, strlen(_nombre) + 1, _nombre);

	genero = new char[strlen(_genero)];
	strcpy_s(genero, strlen(_genero) + 1, _genero);
}

void Album::setNombre(const char* _nombre) {
	if (nombreAlbum != nullptr)
		delete nombreAlbum;

	nombreAlbum = new char[strlen(_nombre)];
	strcpy_s(nombreAlbum, strlen(_nombre) + 1, _nombre);
}

void Album::setGenero(const char* _genero) {
	if (genero != nullptr)
		delete genero;

	genero = new char[strlen(_genero)];
	strcpy_s(genero, strlen(_genero) + 1, _genero);
}

void Album::setAnioPublicacion(int _anio) {
	this->anioPublicacion = _anio;
}

void Album::setPrimerSencillo(Sencillo* _sencillo) {
	this->primerSencillo = _sencillo;
}

void Album::setSiguienteAlbum(Album* _sig) {
	this->siguienteAlbum = _sig;
}

char* Album::getNombre() {
	return this->nombreAlbum;
}

int Album::getAnioPublicacion() {
	return this->anioPublicacion;
}

char* Album::getGenero() {
	return this->genero;
}

Sencillo* Album::getPrimerSencillo() {
	return this->primerSencillo;
}

Album* Album::getSiguienteAlbum() {
	return this->siguienteAlbum;
}