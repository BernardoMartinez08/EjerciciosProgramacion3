#pragma once
#ifndef  CIRCULO_H
#define CIRCULO_H

#include "Figura2D.h"

class Circulo :public Figura2D {
public:
	//Prototipos de contructores sin y con parametros.
	Circulo();
	Circulo(float);

	//Prototipo Funcion que devuelve un float con el radio.
	float getRadio();

	//Prototipo Funcion que necesita un float con el radio para insertarlo.
	void setRadio(float);


	//implementacion de funciones virtuales
	//para devolver el area, perimetro, datos de la figura y el tipo de la misma.
	float getArea();
	float getPerimetro();
	void imprimirFigura();
	TipoFigura getTipo();

private:
	//Atributo privado Radio.
	float radio;
};
#endif // ! CIRCULO_H