#pragma once
#ifndef ARTISTA_H
#define ARTISTA_H
#include "Album.h"

class Artista {
public:
	Artista();
	Artista(const char*, int, Album*);

	void setNombre(const char*);
	void setAnioNAcimiento(int);
	void setSiguienteAlbum(Album*);

	char* getNombre();
	int getAnioNacimiento();
	Album* getSiguienteAlbum();

	int totalSencillo();
	int cantidadAlbumes();
	int totalMinutosReproduccion();
	void guardarEnArchivo();
private:
	char* nombreArtistico;
	int anioNacimiento;
	Album* primerArlbum;

};

#endif