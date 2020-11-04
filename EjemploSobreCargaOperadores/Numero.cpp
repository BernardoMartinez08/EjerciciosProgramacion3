#include "Numero.h"
#include <iostream>
using namespace std;

Numero::Numero() : valor(0) {
}

Numero::Numero(int _valor) : valor(_valor) {
}

std::ostream& operator<<(std::ostream& cout, const Numero& a) {
	cout << a.valor;

	return cout;
}

std::istream& operator>>(std::istream& cin, Numero& a) {
	cin >> a.valor;

	return cin;
}

Numero& operator+(const Numero& a, const Numero& b) {
	Numero resultado;
	resultado.valor = a.valor + b.valor;

	return resultado;
}

Numero& operator^(const Numero& base, const int& expo) {
	Numero resultado;
	resultado.valor = 1;

	for (int i = 0; i < expo; i++) {
		resultado.valor *= base.valor;
	}

	return resultado;
}

//Preincremento
Numero& Numero::operator++() {
	this->valor = this->valor + 1;

	return *this;
}

//Posincremneo
Numero& Numero::operator++(int) {
	Numero resultado = *this;

	this->valor = this->valor + 1;

	return resultado;
}

bool Numero::operator>(const Numero& b){
	return this->valor > b.valor ? true : false;
}