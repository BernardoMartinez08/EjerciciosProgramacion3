#include "TrianguloRectangulo.h"
#include <iostream>
#include <cmath>
using namespace std;

TrianguloRectangulo::TrianguloRectangulo() : base(1), altura(1) {
}

TrianguloRectangulo::TrianguloRectangulo(int _base, int _altura) : base(_base), altura(_altura) {
	if (_base <= 0 || _altura <= 0) {
		base = 1;
		altura = 1;
		throw invalid_argument("Base y Altura deben ser > o");
	}
	else {
		base = _base;
		altura - _altura;
	}
}

void TrianguloRectangulo::setBase(int _base) {
	this->base = _base;
}

void TrianguloRectangulo::setAltura(int _altura) {
	this->altura = _altura;
}

int TrianguloRectangulo::getBase() {
	return base;
}

int TrianguloRectangulo::getAltura() {
	return altura;
}

float TrianguloRectangulo::getHipotenusa() {
	return sqrt(pow(base,2)+pow(altura,2));
}

float TrianguloRectangulo::getArea() {
	return (base * altura) / 2;
}

float TrianguloRectangulo::getPerimetro() {
	return (getBase() + getAltura() + getHipotenusa());
}

void TrianguloRectangulo::imprimirFigura() {
	cout << "Triangulo Rectangulo { base: " << getBase() << ", altura: " << getAltura() 
		<< ", hipotenusa: " << getHipotenusa()
		<< ", area: " << getArea() << ", perimetro: " << getPerimetro() << " }\n";
}

TipoFigura TrianguloRectangulo::getTipo() {
	return TipoFigura::tTrianguloRectangulo;
}
