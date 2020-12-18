#pragma once
#ifndef  Nodo_CADENA_H
#define NodoB_CADENA_H
#include "NodoB.h"

class NodoCadena : public NodoB {
public:
	NodoCadena();
	NodoCadena(char*, NodoB*, NodoB*);

	char* getValor();

private:
	char* valor;
};
#endif // ! NODO_CADENA_H