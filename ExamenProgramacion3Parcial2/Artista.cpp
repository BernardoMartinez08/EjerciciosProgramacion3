#include "Artista.h"
#include <fstream>
#include <iostream>

using namespace std;

Artista::Artista() : nombreArtistico(nullptr), anioNacimiento(0), primerAlbum(nullptr) {

}

Artista::Artista(const char* _nombre, int _anioNacimiento) : anioNacimiento(_anioNacimiento), primerAlbum(nullptr) {
	nombreArtistico = new char[strlen(_nombre)];
	strcpy_s(nombreArtistico, strlen(_nombre) + 1, _nombre);

}

bool Artista::estaVacia() {
	return primerAlbum == nullptr;
}

void Artista::setNombre(const char* _nombre) {
	if (nombreArtistico != nullptr)
		delete nombreArtistico;

	nombreArtistico = new char[strlen(_nombre)];
	strcpy_s(nombreArtistico, strlen(_nombre) + 1, _nombre);
}

void Artista::setAnioNacimiento(int _anio) {
	this->anioNacimiento = _anio;
}

char* Artista::getNombre() {
	return this->nombreArtistico;
}

int Artista::getAnioNacimiento() {
	return this->anioNacimiento;
}

int Artista::totalSencillo() {
	int totalSencillos = 0;

	if (estaVacia())
		return 0;

	Album* actual = primerAlbum;
	do {
		totalSencillos += actual->cantidadSencillos();
		actual = actual->getSiguienteAlbum();
	} while (actual != nullptr);

	return totalSencillos;
}

int Artista::cantidadAlbumes() {
	int totalAlbunes = 0;

	if (estaVacia())
		return 0;

	Album* actual = primerAlbum;
	do {
		totalAlbunes++;
		actual = actual->getSiguienteAlbum();
	} while (actual != nullptr);

	return totalAlbunes;
}

int Artista::totalMinutosReproduccion() {
	int minutosReproduccion = 0;

	if (estaVacia())
		return 0;

	Album* actualAlbum = primerAlbum;
	Sencillo* actualSencillo = primerAlbum->getPrimerSencillo();
	do {
		do {
			minutosReproduccion += actualSencillo->getDuracion();
			actualSencillo = actualSencillo->getSiguienteSencillo();
		} while (actualSencillo != nullptr);

		actualAlbum = actualAlbum->getSiguienteAlbum();
	} while (actualAlbum != nullptr);

	return minutosReproduccion;
}

void Artista::guardarEnArchivo() {
	ofstream archivoArtista("ArchivoArtista.dat", ios::app);

	if (!archivoArtista) {
		cout << "ERROR! al intentar abrir archivo .dat\n";
		return;
	}

	Album* actualAlbum = primerAlbum;
	Sencillo* actualSencillo = primerAlbum->getPrimerSencillo();
	
	for (int i = 0; i < cantidadAlbumes(); i++) {
		archivoArtista << nombreArtistico << " " << anioNacimiento << "\n";
		do {
			archivoArtista << actualAlbum->getNombre() << " " << actualAlbum->getAnioPublicacion() << " " << actualAlbum->getGenero() << "\n";
			do {
				archivoArtista << actualSencillo->getNombre() << " " << actualSencillo->getDuracion() << "\n";
				actualSencillo = actualSencillo->getSiguienteSencillo();
			} while (actualSencillo != nullptr);

			actualAlbum = actualAlbum->getSiguienteAlbum();
		} while (actualAlbum != nullptr);


		cout << "GUARDADO!\n\n";
	}

	archivoArtista.close();
}

void Artista::agregarAlbum(const char* _nombre, int _anio, const char* _genero) {
	Album* nuevo = new Album(_nombre, _anio, _genero, nullptr);

	if (estaVacia()) {
		primerAlbum = nuevo;
	}
	else {
		Album* actual = primerAlbum;

		while (actual->getSiguienteAlbum() != nullptr) {
			actual = actual->getSiguienteAlbum();
		}

		actual->setSiguienteAlbum(nuevo);
		cout << "\n\nGUARDADO!\n\n";
	}
}

Album* Artista::buscarAlbum(const char* _nombre) {
	if (estaVacia())
		return nullptr;

	Album* actualAlbum = primerAlbum;
	do {
		if (actualAlbum->getNombre() == _nombre)
			return actualAlbum;

		actualAlbum = actualAlbum->getSiguienteAlbum();
	} while (actualAlbum != nullptr);

	return nullptr;
}