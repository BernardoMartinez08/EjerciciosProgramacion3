#pragma once
#ifndef ARTISTA_H
#define ARTISTA_H
#include "Album.h"

class Artista {
public:
	Artista();
	Artista(const char*, int);

	bool estaVacia();
	void agregarAlbum(const char*, int, const char*);
	Album* buscarAlbum(const char*);


	void setNombre(const char*);
	void setAnioNacimiento(int);

	char* getNombre();
	int getAnioNacimiento();

	int totalSencillo();
	int cantidadAlbumes();
	int totalMinutosReproduccion();
	void guardarEnArchivo();
private:
	char* nombreArtistico;
	int anioNacimiento;
	Album* primerAlbum;

};

#endif