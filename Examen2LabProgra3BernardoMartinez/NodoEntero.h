#pragma once
#ifndef  Nodo_ENTERO_H
#define NodoB_ENTERO_H
#include "NodoB.h"

class NodoEntero : public NodoB{
public:
	NodoEntero();
	NodoEntero(int, NodoB*, NodoB*);

	void setValor(int);
	int getValor();

private:
	int valor;
};
#endif // ! NODO_ENTERO_H