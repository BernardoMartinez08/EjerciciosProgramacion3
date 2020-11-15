#pragma once
#ifndef CUENTA_H
#define CUENTA_H

#include <string>
#include <iostream>
using namespace std;

/*Prototipo de la clase padre Cuenta de la que van a heredar las clases
cuentaAhorro, y cuentaCheques que tendran ademas de los atributos y funciones
del padre implementacion de funciones propias
*/
enum TipoCuenta {
	tNormal,
	tAhorros,
	tCheques
};


class Cuenta {
public:
	//Prototipo Constructor que inicializa el saldo.
	Cuenta(string,double);

	//Prototipo de funcion cargar,abonar,obtenerSaldo,y actualizarSaldo.
	void Abonar(double); 
	bool Cargar(double); 
	double obtenerSaldo(); 
	void actualizarSaldo(double);

	void setNumCuenta(string);
	string getNumCuenta();
	TipoCuenta getTipo();

private:
	//atributo de tipo double que almacena el saldo.
	string numeroCuenta;
	double saldo;
};

#endif // !CUENTA_H

