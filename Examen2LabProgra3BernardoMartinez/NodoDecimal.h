#pragma once
#ifndef  Nodo_DECIMAL_H
#define NodoB_DECIMAL_H
#include "NodoB.h"

class NodoDecimal : public NodoB {
public:
	NodoDecimal();
	NodoDecimal(double, NodoB*, NodoB*);

	void setValor(double);
	double getValor();

	TipoNodo getTipo();
private:
	double valor;
};
#endif // ! NODO_DECIMAL_H