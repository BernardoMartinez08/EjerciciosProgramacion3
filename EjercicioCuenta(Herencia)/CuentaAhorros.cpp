#include "CuentaAhorros.h"
#include <iostream>

using namespace std;

CuentaAhorros::CuentaAhorros(double _saldoInicial, double _tasaInteres) : Cuenta(_saldoInicial), tasaInteres(_tasaInteres){
	if (_tasaInteres >= 0) {
		tasaInteres = _tasaInteres;
	}else
		throw invalid_argument("Tasa Ingresada no es valida, La taza de Interes debe ser >= a 0");
}

double CuentaAhorros::calcularInteres() {
	return (obtenerSaldo() * tasaInteres);
}