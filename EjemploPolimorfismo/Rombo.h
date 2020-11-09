#pragma once
#ifndef  ROMBO_H
#define ROMBO_H

#include "Figura2D.h"

class Rombo :public Figura2D {
public:
	//Prototipo de contructores sin parametros y con parametros para la longitud y angulo.
	Rombo();
	Rombo(int,float);

	//Prototipo Funciones que devuelven un entero y un float para mandar la longutud de los 
	//lados y el angulo formado respectivamente.
	int getLongitudLados();
	float getAnguloUnion();

	//Prototipo de funciones para insertar un entero y un float para la longitud y angulo
	//respectivamenete.
	void setLongitudLados(int);
	void setAnguloUnion(float);


	//implementacion de funciones virtuales
	//Que devuelven el area,perimetro, datos de figura y su tipo.
	float getArea();
	float getPerimetro();
	void imprimirFigura();
	TipoFigura getTipo();

private:
	//Atributos privaos de longitud y angulo.
	int longitudLados;
	float anguloUnion;
};
#endif // ! ROMBO_H