#pragma once
#ifndef CUENTA_CHEQUES_H
#define	CUENTA_CHEQUES_H

#include "Cuenta.h"
#include <string>
#include <iostream>
using namespace std;

/*Al igual que cuentaAhorros, CuentaCheques hereda de su padre cuenta los atributos
y funciones del mismo haciendo impementacion tambien de sus propias funciones*/
class CuentaCheques : public Cuenta {
public:
	//Prototipo de constructor con parametros.
	CuentaCheques(string,double, double);
	//Propotipo de funciones abonar y cargar heredadas del padre.
	void abonar(double);
	bool cargar(double);

	TipoCuenta getTipo();
private:
	//Atributo que almacena la cuota de transaccion
	double cuotaTransaccion;
	//Prototipo de funcion que carga la cunta por transacciones.
	void cargarCuotaTransaccion();
};
#endif // !CUENTA_CHEQUES_H
