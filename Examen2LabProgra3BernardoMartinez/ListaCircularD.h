#pragma once
#ifndef  LISTA_CIRCULAR_D_H
#define LISTA_CIRCULAR_D_H

#include "NodoB.h"
#include "NodoEntero.h"
#include "NodoCadena.h"
#include "NodoCaracter.h"
#include "NodoDecimal.h"

class ListaCircularD {
public:
	ListaCircularD();
	void agregarNodo(int);
	void agregarNodo(double);
	void agregarNodo(char);
	void agregarNodo(const char*);

	void eliminarNodo(int);
	void imprimirLista();
	void obtenerCantidadObjetos();
private:
	NodoB* primero;
	NodoB* ultimo;

	bool estaVacia();
};
#endif // ! LISTACIRCULAR_D_H
