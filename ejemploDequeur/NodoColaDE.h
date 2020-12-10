#pragma once
#ifndef NODO_COLA_DE_H
#define NODO_COLA_DE_H

class NodoColaDE {
public:
	NodoColaDE(int, NodoColaDE*);

	void setValor(int);
	void setSiguiente(NodoColaDE*);

	int getValor();
	NodoColaDE* getSiguiente();
private:
	int valor;
	NodoColaDE* siguiente;

};

#endif // !NODO_COLA_DE_H