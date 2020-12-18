#pragma once
#ifndef  Nodo_CADENA_H
#define NodoB_CADENA_H
#include "NodoB.h"

class NodoCadena : public NodoB {
public:
	NodoCadena();
	NodoCadena(const char*,NodoB*,NodoB*);

	void setValor(const char*);
	char* getValor();

private:
	char* valor;
};
#endif // ! NODO_CADENA_H