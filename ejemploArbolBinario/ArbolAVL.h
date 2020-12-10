#pragma once
#ifndef ARBOL_AVL_H
#define ARBOL_AVL_H

#include "NodoArbol.h"
class ArbolAVL {
public:
	ArbolAVL();

	void agregarNodo(int);
	NodoArbol* insertaravl(NodoArbol*, NodoArbol*);

	int cantidadNodos();

	NodoArbol* buscar(int, NodoArbol*);
	int obtenerAltura(NodoArbol*);

	NodoArbol* rotacionizquierda(NodoArbol*);
	NodoArbol* rotacionderecha(NodoArbol*);

	NodoArbol* rotaciondobleizq(NodoArbol*);
	NodoArbol* rotaciondobleder(NodoArbol*);
private:
	NodoArbol* raiz;
	int cantidadNodosRec(NodoArbol*);
};

#endif // !ARBOL_AVL_H
