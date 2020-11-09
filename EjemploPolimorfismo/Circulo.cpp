#include "Circulo.h"
#include <iostream>
#include<math.h>

using namespace std;

//Constructor sin parametros que inicializa el radio del circulo en 1
Circulo::Circulo() : radio(1) {
}

//Constructor que recibe de parametro el radio del circulo
Circulo::Circulo(float _Radio) : radio(_Radio) {
	/*Comprueba que dicho radio sea diferente de 0, si es cero incializa el radio en 1,
	de lo contrario lo inicializa con el valore recibido de parametro.*/
	if (_Radio <= 0) {
		radio = 1;
		throw invalid_argument("El Radio deben ser > o");
	}
	else {
		radio = _Radio;
	}
}

//Funcion que inserta un valor float en el radio, el cual recibe de parametro
void Circulo::setRadio(float _Radio) {
	this->radio = _Radio;
}

//Funcion que devuleve un float con el radio
float Circulo::getRadio() {
	return radio;
}

//Funcion que calcula el area del circulo utilizando la forluma pi * radio al cuadrado
float Circulo::getArea() {
	return (3.1416 * pow(this->radio, 2));
}

//Funcion que devueleve el perimetro a traves del calculo de 2 veces el radio por pi
float Circulo::getPerimetro() {
	return (2 * (this->radio)) * 3.1416;
}

//Funcion que devuelve los datos del circulo, eadio, perimetro, area y tipo
void Circulo::imprimirFigura() {
	cout << "Circulo { Radio: " << getRadio()
		<< ", area: " << getArea() << ", perimetro: " << getPerimetro() << " }\n";
}

//Devuelve el tipo de figura
TipoFigura Circulo::getTipo() {
	return TipoFigura::tCirculo;
}