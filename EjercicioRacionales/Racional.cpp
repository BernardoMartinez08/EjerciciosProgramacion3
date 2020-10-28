#include "Racional.h"
#include <iostream>
#include<math.h>

using namespace std;

Racional::Racional() : numerador(1), denominador(1) {

}

Racional::Racional(int _num, int _den) : numerador(_num), denominador(_den) {
	simplificar();
}

void Racional::imprimirRacional() {
	if (numerador == 0 && denominador == 0) {
		cout << "Resultado Indefinido\n";
	}
	else if (denominador == 0) {
		cout << "No se puede dividir por vero\n";
	}
	else {
		cout << numerador << "/" << denominador << "\n";
	}
}

void Racional::imprimirDecimal() {
	if (numerador == 0 && denominador == 0) {
		cout << "Resultado Indefinido\n";
	}
	else if (denominador == 0) {
		cout << "No se puede dividir por vero\n";
	}
	else {
		cout << (float(numerador) / float(denominador));
	}
}

Racional Racional::suma(Racional r2) {
	if (this->denominador == r2.denominador) {
		return Racional(this->numerador + r2.numerador, this->denominador);
	}else
		return Racional((this->numerador * r2.denominador) + (r2.numerador * this->denominador),
						(this->denominador * r2.denominador));
}

Racional Racional::resta(Racional r2) {
	if (this->denominador == r2.denominador) {
		return Racional(this->numerador - r2.numerador, this->denominador);
	}
	else
		return Racional((this->numerador * r2.denominador) - (r2.numerador * this->denominador),
			(this->denominador * r2.denominador));
}

Racional Racional::multiplicacion(Racional r2) {
	return Racional((this->numerador * r2.numerador), (this->denominador * r2.denominador));
}

Racional Racional::division(Racional r2) {
	return Racional((this->numerador * r2.denominador), (this->denominador * r2.numerador));
}

Racional Racional::potencia(int exponente)
{
	return Racional(pow(this->numerador, exponente), pow(this->denominador,exponente));
}

void Racional::simplificar() {
	int mayor = numerador > denominador ? numerador : denominador;

	for (int i = 2; i < mayor; i++) {
		if (numerador % i == 0 && denominador % i == 0) {
			numerador = numerador / 2;
			denominador = denominador / 2;

			i = 1;
		}
	}
}
