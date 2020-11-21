#include <conio.h>
#include <iostream>

#include "Cadena.h"
using namespace std;

int main() {
	Cadena C1;
	Cadena C2("Hola");
	Cadena C3(" Mundo!");

	C1 = C2 + C3;

	cout << "Cadena: " << C1 << "\n";
	cout << "Longitud: " << C1.tamanio() << "\n";


	Cadena C4 = C1.subcadena(5, 5);

	cout << "Subcadena: " << C4 << "\n";

	for (int i = 0; i < C4.tamanio(); i++) {
		cout << C4.at(i) << "\n";
	}

	_getch();
}