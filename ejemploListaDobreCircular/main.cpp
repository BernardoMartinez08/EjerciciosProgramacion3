#include <conio.h>
#include "ListaCircular.h"
#include <iostream>

using namespace std;
int main() {
	ListaCircular ls;

	ls.agregarNodo("Ana");
	ls.agregarNodo("Bob");
	ls.agregarNodo("Lee");
	ls.agregarNodo("Mark");

	ls.imprimirLista();
	ls.imprimirListaReversa();

	ls.eliminarNodo("Mark");
	ls.imprimirLista();
	_getch();
}