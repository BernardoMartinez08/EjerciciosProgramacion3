#pragma once
#ifndef CADENA_H
#define CADENA_H

#include "Objeto.h"
#include <iostream>
using namespace std;

class Cadena : public Objeto {
public:
	Cadena(const char*);
	Cadena();

	TipoObjeto getTipoObjeto();
	void imprimirObjeto();

private:
	char* value;
};
#endif // !CADENA_H