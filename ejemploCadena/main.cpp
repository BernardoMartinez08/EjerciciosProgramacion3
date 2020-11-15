#include <conio.h>
#include <iostream>

#include "Cadena.h"
using namespace std;

int main() {
	Cadena c1("Hola ");
	Cadena c2("Mundo!");

	Cadena c3 = c1 + c2;

	cout << "Resultado: " << c3 << "\n";

	Cadena c4 = " desde Programacion 3";
	c3 += c4;

	cout << "Resultado: " << c3 << "\n";
	_getch();
}