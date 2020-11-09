#pragma once
#ifndef  RECTANGULO_H
#define RECTANGULO_H

#include "Figura2D.h"

class Rectangulo :public Figura2D {
public:
	Rectangulo();
	Rectangulo(int, int);

	int getBase();
	int getAltura();

	void setBase(int);
	void setAltura(int);


	//implementacion de funciones virtuales
	float getArea();
	float getPerimetro();
	void imprimirFigura();
	TipoFigura getTipo();

private:
	int base, altura;
};
#endif // ! RECTANGULO_H
