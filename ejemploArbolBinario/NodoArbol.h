#pragma once
#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

class NodoArbol {
public:
	NodoArbol(int, NodoArbol*, NodoArbol*);

	int getValor();
	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();

	void setValor(int);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);
private:
	int valor;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;
};

#endif // !NODO_ARBOL_H
