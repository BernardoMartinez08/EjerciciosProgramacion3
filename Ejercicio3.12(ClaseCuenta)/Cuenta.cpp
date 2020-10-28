#include "Cuenta.h"

#include <iostream>
using std::cout;

Cuenta::Cuenta() : saldo(0){
	//En este contructor inicializamos ese valor del saldo en 0
}

Cuenta::Cuenta(int _saldo) {
	/*En este constructor recibimos como parametro un entero para incializar el saldo
	  pero para ello antes hay que verificar que sea un monto igual o mayor a cero de
	  serlo asi le damos ese valor al saldo de lo contraio le damos el valor de 0 y
	  adicionalmente mostramos un mensaje que indique que el monto increado fue invalido.*/

	if (_saldo >= 0) {
		this->saldo = _saldo;
	}
	else {
		this->saldo = 0;
		cout << "EL saldo ingresado: " << _saldo << " es INVALIDO\n\n";
	}
}

void Cuenta::Abonar(int _monto){
	/*En esta funcion abonar recibimos un monto que sera adicionado al saldo actual y
	  mostramos en pantalla la confirmacion del ingreso.*/

	this->saldo += _monto;
	cout << "Monto Abonado\n\n";
}

void Cuenta::Cargar(int _monto) {
	/*Esta funcion Cargar nos permite retirar de la cuenta un monto el cual debe ser menor
	  o igual al saldo actual de serlo asi se sustrae del saldo y se imprime una confirmacion
	  de lo contrario el saldo permanse y se indica que excede el saldo actual.*/

	if (_monto <= saldo) {
		saldo -= _monto;
		cout << "Monto Cargado\n\n";
	}
	else {
		cout << "El monto a Cargar excede el saldo de la cuenta\n\n";
	}
}

int Cuenta::obtenerSaldo(){
	//La funcion obtener saldo devuelve un entero que es el saldo.

	return saldo;
}