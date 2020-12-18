#pragma once
#ifndef  NodO_CARACTER_H
#define NodoB_CARACTER_H
#include "NodoB.h"

class NodoCaracter : public NodoB {
public:
	NodoCaracter();
	NodoCaracter(char,NodoB*,NodoB*);

	void setValor(char);
	char getValor();

	TipoNodo getTipo();
private:
	char valor;
};
#endif // ! NODO_CARACTER_H