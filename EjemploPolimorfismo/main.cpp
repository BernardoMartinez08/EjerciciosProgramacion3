#include <iostream>
#include <conio.h>

#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

int main() {
	//Crear un arreglo que apunta a Figuras2D de tamano 4
	//estructura de tamano fijo
	Figura2D* Figuras[4];

	Figuras[0] = new Rectangulo(4, 1);
	Figuras[1] = new TrianguloRectangulo(5, 3);
	Figuras[2] = new Rectangulo(4, 3);
	Figuras[3] = new TrianguloRectangulo(6, 2);

	for (int i = 0; i < 4; i++) {
		Figuras[i]->imprimirFigura();
	}
	_getch();
}