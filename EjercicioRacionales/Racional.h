#pragma once
#ifndef RACIONAL_H
#define RACIONAL_H

class Racional {
public:
	Racional();
	Racional(int, int);

	void imprimirRacional(); //17/6
	void imprimirDecimal(); //2.8333

	Racional suma(Racional r1);
	Racional resta(Racional r2);
	Racional multiplicacion(Racional r2);
	Racional division(Racional r2);
	Racional potencia(int potencia);
private:
	int numerador, denominador;
	void simplificar();
};

#endif