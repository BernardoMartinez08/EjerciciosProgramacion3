#pragma once
#ifndef LOGICO_H
#define LOGICO_H

#include "Objeto.h"
#include <iostream>
using namespace std;

class Logico : public Objeto {
public:
	Logico(bool);
	Logico();

	TipoObjeto getTipoObjeto();
	void imprimirObjeto();

private:
	bool value;
};
#endif // !LOGICO_H