#pragma once
#ifndef ENTERO_H
#define ENTERO_H

#include "Objeto.h"
#include <iostream>
using namespace std;

class Entero : public Objeto {
public:
	Entero(int);
	Entero();

	TipoObjeto getTipoObjeto();
	void imprimirObjeto();

private:
	int value;
};
#endif // !ENTERO_H
