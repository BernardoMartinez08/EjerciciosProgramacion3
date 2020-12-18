#include "Artista.h"
#include <conio.h>
#include <iostream>

using namespace std;

int main() {
	Artista nuevo("Ariana Grane", 1990);

	nuevo.agregarAlbum("Positions",2020,"POP");
	nuevo.agregarAlbum("Dangerous", 2018, "R&B");

	Album* Position = nuevo.buscarAlbum("Dangerous");
	if (Position != nullptr) {
		Position->agregarSencillo("Positions", 3);
		Position->agregarSencillo("34 + 35", 2);
		Position->agregarSencillo("Oh Santa!", 4);
	}

	nuevo.guardarEnArchivo();

	_getch();
}