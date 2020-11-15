#pragma once
#ifndef CUENTA_AHORROS_H
#define	CUENTA_AHORROS_H

#include "Cuenta.h"
#include <string>
#include <iostream>
using namespace std;

/*La clase CuentaAhorros hereda de la clase Cuenta sus atributos y funciones
y demas define sus funciones propias.*/
class CuentaAhorros : public Cuenta{
public:
	//Prototipo de construcor con parametros.
	CuentaAhorros(string,double, double);

	//Prototipo de Funcion calcular Interes.
	double calcularInteres();
	TipoCuenta getTipo();

private:
	//Atributo de tipo double que almacena el interes.
	double tasaInteres;
};

#endif // !CUENTAAHORROS_H

