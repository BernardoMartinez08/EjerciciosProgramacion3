#pragma once
#ifndef ARBOL_BINARIO_H
#define ARBOL_BINARIO_H

#include "NodoArbol.h"
class ArbolBinario {
public:
	ArbolBinario();

	void agregarNodo(int);
	void imprimirArbol();

	int sumatoriaNodos();
	int cantidadNodos();
private:
	NodoArbol* raiz;

	NodoArbol* agregarNodoRec(NodoArbol*, int);
	void imprimirArbolRec(NodoArbol*);
	int sumatoriaNodosRec(NodoArbol*);
	int cantidadNodosRec(NodoArbol*);
};

#endif // !ARBOL_BINARIO_H
