#include "Cuenta.h"
#include <iostream>

using namespace std;

Cuenta::Cuenta(double _saldoInicial) : saldo(0) {
	if (_saldoInicial >= 0)
		saldo = _saldoInicial;
	else
		throw invalid_argument("Saldo Inicial no puede ser negativo");
}

void Cuenta::Abonar(double _cantidad) {
	this->saldo += _cantidad;
}

bool Cuenta::Cargar(double _cantidad) {
	if (_cantidad <= saldo) {
		saldo -= _cantidad;
		return true;
	}
	else {
		cout << "El monto a Cargar excede el saldo de la cuenta.\n\n";
		return false;
	}
}

double Cuenta::obtenerSaldo() {
	return saldo;
}

void Cuenta::actualizarSaldo(double _saldoActualizado) {
	saldo = _saldoActualizado;
}