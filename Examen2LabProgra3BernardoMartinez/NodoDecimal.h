#pragma once
#ifndef  Nodo_DECIMAL_H
#define NodoB_DECIMAL_H
#include "NodoB.h"

class NodoDecimal : public NodoB {
public:
	NodoDecimal();
	NodoDecimal(double, NodoB*, NodoB*);

	double getValor();

private:
	double valor;
};
#endif // ! NODO_DECIMAL_H