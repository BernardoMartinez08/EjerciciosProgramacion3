#include "CuentaAhorros.h"
#include <iostream>

using namespace std;

/*Esta cuenta al heredar de Cuenta tiene todas la funciones de dicha clase y si no desea modificarla
las puede implemetar tan cual estan plantiadas por el padre.
Tambien incluye su funcion propia CalculasInteres.*/

/*Constructor de la clase que recibe como parametro el valor double del saldo de la cuenta, pero adicional
se necesita el valor double de la taza de interes que es propia de la clase hijo.*/
CuentaAhorros::CuentaAhorros(string _NumCuenta,double _saldoInicial, double _tasaInteres) : Cuenta(_NumCuenta,_saldoInicial), tasaInteres(_tasaInteres){
	/*Verificamos que dicho valor recibido sea mayor o igual a 0 ya que no existe
	una taza de interes negativa de serlo se procede, si es un interes negativo se 
	indica error.*/
	if (_tasaInteres >= 0) {
		tasaInteres = _tasaInteres;
	}else
		throw invalid_argument("Tasa Ingresada no es valida, La taza de Interes debe ser >= a 0");
}

/*La funcion propia de la clase hija que es calcularInteres que con el uso de la funcion
padre obtener saldo, hace el calculo de los intereses correspondientes al saldo actual
multiplicado por la taza dada de interes.*/
double CuentaAhorros::calcularInteres() {
	return (obtenerSaldo() * tasaInteres);
}

//Devuelve el tipo de Cuenta
TipoCuenta CuentaAhorros::getTipo() {
	return TipoCuenta::tAhorros;
}