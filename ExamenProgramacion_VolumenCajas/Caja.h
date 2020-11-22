#pragma once
#ifndef CAJA_H
#define CAJA_H

class Caja {
public:

	//Definicion de la sobrecarga del operador de suma.
	friend Caja& operator+(const Caja&, const Caja&);

	//Constructores con y sin parametros.
	Caja();
	Caja(int, int, int);

	//Definicion de Funciones set de cada atributo que reciben un entero como paramtro.
	void setLargo(int);
	void setAncho(int);
	void setAlto(int);

	//Definicion de Funciones get de cada atributo que retornan un entero con el mismo.
	int getLargo();
	int getAncho();
	int getAlto();

	//Definicion de funcion obtener volumen que devuelve un float.
	float obtenerVolumen();

private:
	//Atributos para largo, ancho y alto de la caja de tipo entero.
	int largo, ancho, alto;

};


#endif // !CAJA_H
