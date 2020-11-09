#pragma once
#ifndef CUENTA_H
#define CUENTA_H

/*Prototipo de la clase padre Cuenta de la que van a heredar las clases
cuentaAhorro, y cuentaCheques que tendran ademas de los atributos y funciones
del padre implementacion de funciones propias
*/
class Cuenta {
public:
	//Prototipo Constructor que inicializa el saldo.
	Cuenta(double);

	//Prototipo de funcion cargar,abonar,obtenerSaldo,y actualizarSaldo.
	void Abonar(double); 
	bool Cargar(double); 
	double obtenerSaldo(); 
	void actualizarSaldo(double);

private:
	//atributo de tipo double que almacena el saldo.
	double saldo;
};

#endif // !CUENTA_H

