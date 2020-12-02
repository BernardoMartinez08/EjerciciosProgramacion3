#pragma once
#ifndef ARBOL_BINARIO_H
#define ARBOL_BINARIO_H

#include "NodoArbol.h"
class ArbolBinario {
public:
	ArbolBinario();

	void agregarNodo(int);
	void imprimirArbol();

private:
	NodoArbol* raiz;
};

#endif // !ARBOL_BINARIO_H
