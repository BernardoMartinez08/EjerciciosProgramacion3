#pragma once
#ifndef ARBOL_BINARIO_H
#define ARBOL_BINARIO_H

#include "NodoArbol.h"

class ArbolBinario
{
public:
	ArbolBinario();
	void agregarNodo(int);
	void imprimirArbol();

	int sumatoriaNodos();
	int cantidadNodos();

private:
	NodoArbol* raiz; //primer nodo del arbol

	NodoArbol* agregarNodoRec(NodoArbol*, int);
	int cantidadNodosRec(NodoArbol*);
	int sumatoriaNodossRec(NodoArbol*);
	void imprimirRec(NodoArbol*);
};

#endif // !ARBOL_BINARIO_H