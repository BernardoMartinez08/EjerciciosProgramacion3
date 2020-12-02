#pragma once
#ifndef  LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

#include "Nodo.h"

class ListaCircular {
public:
	ListaCircular();
	void agregarNodo(const char*);
	void eliminarNodo(const char*);
	void imprimirLista();
	void imprimirListaReversa();
private:
	Nodo* primero;
	Nodo* ultimo;

	bool estaVacia();
};
#endif // ! LISTACIRCULAR_H
