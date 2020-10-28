#pragma once
#ifndef RECTANGULOMEJORADO_H
#define RECTANGULOMEJORADO_H

class RectanguloMejorado {
public:
	RectanguloMejorado(); //Prototipo de Constructor
	RectanguloMejorado(int, int, int, int, int, int, int, int); //Prototipo de Constructor con parametro

	int getlongitud();//Prototipo funcion longitud que devuelve la longitud del rectangulo
	int getAnchura();//Prototipo anchura longitud que devuelve la anchura del rectangulo
	int getArea();//Prototipo funcion Area que devuelve el Area del rectangulo
	int getPerimetro();//Prototipo funcion perimetro que devuelve el perimetro del rectangulo
	
	void esCuadrado();//Prototipo funcion longitud que devuelve si es cuadrado o no
	void establecer(int, int, int, int, int, int, int, int);//Prototipo del inicializado de puntos en x y y

private:
	//Puntos de las coordenadas
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int x4, y4;
};

#endif