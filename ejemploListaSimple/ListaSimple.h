#pragma once
#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H
#include "Nodos.h"

class ListaSimple {
public:
	ListaSimple();

	bool estaVacia();
	void agregarNodo(int);
	void eliminarNodo(int);
	void ordenarElementos();

	void imprimirLista();

	void ordenarArreglo();
	int obtenerTamanio();
private:
	//Primer elemento de la lista
	Nodo* primero;
	bool existeNodo(int);

	Nodo* obtenerPosNodo(int);
	void intercambio(Nodo*, Nodo*);
};

#endif // !LISTA_SIMPLE_H
