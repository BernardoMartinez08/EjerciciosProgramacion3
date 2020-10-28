#include "RectanguloMejorado.h"
#include <iostream>

using std::cout;

//Implementacion del constructor sin parametros
RectanguloMejorado::RectanguloMejorado() : x1(0), y1(0), x2(0), y2(0), x3(0), y3(0), x4(0), y4(0) {

}

//Implementacion del constructor con parametros
RectanguloMejorado::RectanguloMejorado(int _x1,int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4){
	/*En este constructor se reciben 4 pares de coordenadas osea 4 cordenadas en x y 4 en y las cuales
	* sirven para enviar de parametro a la funcion establecer y darle valores a las coordenadas del 
	* rectangulo.
	*/
	establecer(_x1, _y1, _x2, _y2, _x3, _y3,  _x4, _y4);
}

void RectanguloMejorado::establecer(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4) {
	/*La funcion establecer recibe 4 pares de coordenadas las cuales analiza que esten dentro del primer
	* cuadrante y que no sean mayores que 20 para poderles dar el valor a cada coordenada con las reci-
	* vidas de parametro de no cumplirse entonces las establece todas en 0.
	* Posteriormente pasa a verificar si se trata efectivamente de un rectangulo comparando si las coor-
	* denadas son compatibles y de formarlo o no se muestra un mensaje en pantalla indicandolo.
	*/

	if (_x1 >= 0 && _x1 <= 20 && _y1 >= 0 && _y1 <= 20) {
		if (_x2 >= 0 && _x2 <= 20 && _y2 >= 0 && _y2 <= 20) {
			if (_x3 >= 0 && _x3 <= 20 && _y3 >= 0 && _y3 <= 20) {
				if (_x4 >= 0 && _x4 <= 20 && _y4 >= 0 && _y4 <= 20) {
					x1 = _x1;
					y1 = _y1;
					cout << x1 << " , " << y1 << "\n";

					x2 = _x2;
					y2 = _y2;
					cout << x2 << " , " << y2 << "\n";

					x3 = _x3;
					y3 = _y3;
					cout << x3 << " , " << y3 << "\n";

					x4 = _x4;
					y4 = _y4;
					cout << x4 << " , " << y4 << "\n\n";

					if (x1 == x3 && x2 == x4 && y1 == y2 && y3 == y4) {
						cout << "LAS COORDENADAS PERTENECEN A UN RECTANGULO\n\n";
					}
					else
						cout << "LAS COORDENADAS NO PERTENECEN A UN RECTANGULO\n\n";
				}
			}
		}
	}
}

int RectanguloMejorado::getlongitud(){
	/*La funcion getLongitud nos devuelve la base del rectangulo que seria la resta
	* de x2 - x1 siendo x1 donde comienza la base y x2 donde finaliza.
	*/

	return (x2 - x1);
}

int RectanguloMejorado::getAnchura() {
	/*La funcion getAnchura nos devuelve la altura del rectangulo con el calculo de
	* restar y3 - y1 donde es el punto mas bajo del rectangulo y y3 el mas alto. 
	*/

	return (y3 - y1);
}

int RectanguloMejorado::getArea() {
	/*En la funcion getArea obtenemos el area del rectangulo multiplicando su longitud
	por su anchura*/

	return (getlongitud() * getAnchura());
}

int RectanguloMejorado::getPerimetro() {
	/*En la funcion getPerimetro devuelve el perimetro del rectangulo multiplicando por 2
	la suma de la longitud y la anchura*/

	return 2 * (getlongitud() + getAnchura());
}

void RectanguloMejorado::esCuadrado() {
	/*En esta funcion determinamos si el rectangulo enrealidad culple las condiciones de un
	cuadrado que seria que la anchura y la longitud sean iguales y lo indico en una salida de pantalla*/

	if (getAnchura() == getlongitud())
		cout << "ES UN CUADRADO\n\n";
	else
		cout << "NO ES UN CUADRADO\n\n";
}