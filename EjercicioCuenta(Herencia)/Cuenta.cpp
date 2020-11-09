#include "Cuenta.h"
#include <iostream>

using namespace std;

/*En el constructor de esta clase pedimos un valor de tipo double que nos
permite incializar el valor del saldo de la cuenta con un valor diferente de 0*/
Cuenta::Cuenta(double _saldoInicial) : saldo(0) {
	/*Verificamos que dicho valor recibido sea mayor o igual a 0 ya que no existe
	saldo negativo de serlo se procede si es un saldo negativo se indica error.*/
	if (_saldoInicial >= 0)
		saldo = _saldoInicial;
	else
		throw invalid_argument("Saldo Inicial no puede ser negativo");
}

/*Funcion abonar que suma un valor double recibido de parametro al saldo actual de
la cuenta.*/
void Cuenta::Abonar(double _cantidad) {
	this->saldo += _cantidad;
}

/*Funcion que carga a la cuenta un valor restandilo del saldo siempre y cuando dicho
valor sea menor o igual al saldo actual de la cuenta, de no cumplirse esta condicion
se le indica con un mensaje de error.*/
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

//Funcion que devuelve un double con el saldo de la cuenta.
double Cuenta::obtenerSaldo() {
	return saldo;
}

//Funcion que con un parametro recibido tip double actualiza el saldo de la cuenta.
void Cuenta::actualizarSaldo(double _saldoActualizado) {
	saldo = _saldoActualizado;
}