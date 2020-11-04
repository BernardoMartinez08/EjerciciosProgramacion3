#pragma once
#ifndef RACIONALSC_H
#define RACIONALSC_H
#include <iostream>

class RacionalSC {
	//Prototipo de operadores sobrecargados de imput y output
	friend std::ostream& operator<<(std::ostream&, const RacionalSC&);
	friend std::istream& operator>>(std::istream&, RacionalSC&);

	//Prototipo de operadores matematicos sobrecargados 
	friend RacionalSC& operator+(const RacionalSC&, const RacionalSC&);
	friend RacionalSC& operator-(const RacionalSC&, const RacionalSC&);
	friend RacionalSC& operator*(const RacionalSC&, const RacionalSC&);
	friend RacionalSC& operator/(const RacionalSC&, const RacionalSC&);

	friend RacionalSC& operator^(const RacionalSC&, const int&);

public:
	//Prototipos de constructores
	RacionalSC();
	RacionalSC(int,int);

	//Prototipo de funcion para devolver el decimal del RacionalSC
	float getDecimal(); //2.8333

	//Definiciones de operadores sobrecargados con funciones miembros
	//Prototipos de Operadores de Comparacion Sobrecargados
	bool operator>( RacionalSC&);
	bool operator>=(RacionalSC&);
	bool operator<(RacionalSC&);
	bool operator<=(RacionalSC&);
	bool operator==(const RacionalSC&);
	bool operator!=(const RacionalSC&);
private:
	//Definiciones de atributos privados
	int numerador;
	int denominador;
	//Prototipo Funcion simplificar
	void simplificar();
};


#endif // !RACIONALSC_H

