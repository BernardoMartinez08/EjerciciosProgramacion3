#include <iostream>
#include <conio.h>

#include "RectanguloMejorado.h"
using namespace std;

int main() {
	//Creacion de un rectangulo con coordenadas correctas que forman un cuadrado
	//						x1, y1, x2, y2, x3, y3, x4, y4
	RectanguloMejorado rec1(0,  0,  10, 0,  0,  10, 10, 10);

	//Creacion de un rectangulo con coordenadas correctas
	RectanguloMejorado rec2(0, 0, 5, 0, 0, 10, 5, 10);

	//Creacion de un rectangulo con coordenadad incorrectas
	RectanguloMejorado rec3(0, 0, 24, 0, 0, 10, 24, 10);
	
	//Imprecion de las caracteristicas de cada triangulo aplicando las funciones de los objetos de 
	//tipo Rectangulo Mejorado como Anchura, Longitud, Area, Perimetro.
	cout << "Rectangulo { Anchura: " << rec1.getAnchura() << ", Longitud: " << rec1.getlongitud()
		<< ", Area: " << rec1.getArea() << ", perimetro: " << rec1.getPerimetro() <<" }\n";
	rec1.esCuadrado();

	cout << "Rectangulo { Anchura: " << rec2.getAnchura() << ", Longitud: " << rec2.getlongitud()
		<< ", Area: " << rec2.getArea() << ", perimetro: " << rec2.getPerimetro() << " }\n";
	rec2.esCuadrado();

	cout << "Rectangulo { Anchura: " << rec3.getAnchura() << ", Longitud: " << rec3.getlongitud()
		<< ", Area: " << rec3.getArea() << ", perimetro: " << rec3.getPerimetro() << " }\n";
	rec3.esCuadrado();

	_getch();
}