#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo() : base(1), altura(1) {
}

Rectangulo::Rectangulo(int _base, int _altura) : base(_base), altura(_altura) {
	if (_base <= 0 || _altura <=0 ) {
		base = 1;
		altura = 1;
		throw invalid_argument("Base y Altura deben ser > o");
	}
	else {
		base = _base;
		altura - _altura;
	}
}

void Rectangulo::setBase(int _base) {
	this->base = _base;
}

void Rectangulo::setAltura(int _altura) {
	this->altura = _altura;
}

int Rectangulo::getBase() {
	return base;
}

int Rectangulo::getAltura() {
	return altura;
}

float Rectangulo::getArea() {
	return (getBase() * getAltura());
}

float Rectangulo::getPerimetro() {
	return 2 * (getBase() + getAltura());
}

void Rectangulo::imprimirFigura() {
	cout << "Rectangulo { base: " << getBase() << ", altura: " << getAltura()
		<< ", area: " << getArea() << ", perimetro: " << getPerimetro() << " }\n";
}

TipoFigura Rectangulo::getTipo() {
	return TipoFigura::tRectangulo;
}