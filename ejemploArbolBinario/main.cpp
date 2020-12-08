#include <conio.h>
#include "ArbolBinario.h"
#include <iostream>

using namespace std;
int main() {

	ArbolBinario arbol;

	//(40,25,38,12,16,60,55,82)

	arbol.agregarNodo(40);
	arbol.agregarNodo(25);
	arbol.agregarNodo(38);
	arbol.agregarNodo(12);
	arbol.agregarNodo(16);
	arbol.agregarNodo(60);
	arbol.agregarNodo(55);
	arbol.agregarNodo(82);

	arbol.imprimirArbol();

	cout << "\nSUMATORIA DE TODOS: " << arbol.sumatoriaNodos();

	cout << "\nTOTAL DE TODOS: " << arbol.cantidadNodos();

	_getch();
}