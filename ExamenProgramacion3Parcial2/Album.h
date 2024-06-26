#pragma once
#ifndef ALBUM_H
#define ALBUM_H
#include "Sencillo.h"

class Album {
public:
	Album();
	Album(const char*, int, const char*, Sencillo*);

	bool estaVacia();
	void agregarSencillo(const char*, int);

	void setNombre(const char*);
	void setAnioPublicacion(int);
	void setGenero(const char*);
	void setPrimerSencillo(Sencillo*);
	void setSiguienteAlbum(Album*);

	char* getNombre();
	int getAnioPublicacion();
	char* getGenero();
	Sencillo* getPrimerSencillo();
	Album* getSiguienteAlbum();

	int duracion();
	int cantidadSencillos();
	
private:
	char* nombreAlbum;
	int anioPublicacion;
	char* genero;

	Sencillo* primerSencillo;
	Album* siguienteAlbum;
};


#endif