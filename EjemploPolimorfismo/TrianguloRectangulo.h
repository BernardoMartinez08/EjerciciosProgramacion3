#pragma once
#ifndef TRIANGULO_RECTANGULO_H
#define TRIANGULO_RECTANGULO_H

#include "Figura2D.h"

class TrianguloRectangulo : public Figura2D {
public:
	TrianguloRectangulo();
	TrianguloRectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();
	float getHipotenusa();

	float getArea();
	float getPerimetro();
	void imprimirFigura();
	TipoFigura getTipo();

private:
	int base, altura, hipotenusa;
};
#endif // !TRIANGULORECTANGULO_H
