#pragma once
#ifndef CUENTA_H
#define CUENTA_H

class Cuenta {
public:
	Cuenta(double);

	void Abonar(double); 
	bool Cargar(double); 
	double obtenerSaldo(); 
	void actualizarSaldo(double);

private:
	double saldo;
};

#endif // !CUENTA_H

