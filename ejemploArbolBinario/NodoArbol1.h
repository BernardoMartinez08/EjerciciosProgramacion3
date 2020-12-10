#pragma once
#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

class NodoArbol
{
public:
	NodoArbol(int, NodoArbol*, NodoArbol*);

	void setValor(int);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

	int getValor();
	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();

private:
	int valor;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;
};

#endif // !NODO_ARBOL_H