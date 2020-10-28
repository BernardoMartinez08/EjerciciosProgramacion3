#include "Numero.h"

Numero::Numero() : valor(0) {
}

Numero::Numero(int _valor) : valor(_valor) {
}

std::ostream& operator<<(std::ostream& cout, const Numero& a) {
	cout << a.valor;

	return cout;
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