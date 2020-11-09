#include "Rombo.h"
#include <iostream>
#include <cmath>
using namespace std;

//Constructor sin parametros para incializar la longitud y angulo en 1
Rombo::Rombo() : longitudLados(1), anguloUnion(1) {
}

//Constructor que recibe parametros para longitud y angulo
Rombo::Rombo(int _long, float _angulo) : longitudLados(_long), anguloUnion(_angulo) {
	/*Verifica si estos datos no son 0, si lo son indica error e inicializa los valores
	de longitud y angulo en 1, si no es el caso los inicializa con normalida usando los 
	parametros recibidos*/

	if (_long <= 0 || _angulo <= 0) {
		longitudLados = 1;
		anguloUnion = 1;
		throw invalid_argument("Base y Altura deben ser > o");
	}
	else {
		longitudLados = _long;
		anguloUnion = _angulo;
	}
}

//SetLongitud que solicita un entero para insertarlo en la longitud
void Rombo::setLongitudLados(int _long) {
	this->longitudLados = _long;
}

//setAngulo que solicita un float que inserta en el angulo
void Rombo::setAnguloUnion(float _angulo) {
	this->anguloUnion = _angulo;
}

//Devueleve un entero con la longitud
int Rombo::getLongitudLados() {
	return longitudLados;
}

//Devuelve un float con el angulo d union
float Rombo::getAnguloUnion() {
	return anguloUnion;
}

//Devuelve un float con el area calculada con la formula: una vez se tiene el valor de un lado y 
//el angulo se muestra el resultado haciendo uso de la formula [areaRombo = (lado * lado * SENO(angulo)]
float Rombo::getArea() {
	return  (longitudLados * longitudLados * sin(anguloUnion));
}

//Devuelve un float con el perimetro calculado con la formula: 4 veces la longitud de los lados.
float Rombo::getPerimetro() {
	return 4 * longitudLados;
}

//Imprime los datos de la figura como los son tipo, longitud de sus lados, angulo de union, area y perimetro
void Rombo::imprimirFigura() {
	cout << "Rombo { Longitud de sus Lados: " << getLongitudLados() << ", Angulo de union: " << getAnguloUnion()
		<< ", area: " << getArea() << ", perimetro: " << getPerimetro() << " }\n";
}

//Devuelve el tipo de dicha figura
TipoFigura Rombo::getTipo() {
	return TipoFigura::tRombo;
}