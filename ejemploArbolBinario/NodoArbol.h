#pragma once
#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

class NodoArbol {
public:
	NodoArbol(int, NodoArbol*, NodoArbol*);

	int getValor();
	int getAltura();
	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();

	void setValor(int);
	void setAltura(int);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

private:
	int valor;
	int altura;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;
};

#endif // !NODO_ARBOL_H
