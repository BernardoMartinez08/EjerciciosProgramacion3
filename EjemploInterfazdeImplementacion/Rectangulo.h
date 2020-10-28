#pragma once

#ifndef RECTANGULO_H
#define RECTANGULO_H

//Definicion de clase en C++
class Rectangulo {
public:
	Rectangulo(); //Prototipo de Constructor
	Rectangulo(int, int); //Prototipo de Constructor con parametro

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();

	int getArea();
	int getPerimetro();

private:
	int base, altura;
};

#endif

