#pragma once
#ifndef NUMERO_H
#define NUMERO_H
#include <iostream>

class Numero {
	friend std::ostream& operator<<(std::ostream&,const Numero&);
	friend std::istream& operator>>(std::istream&, Numero&);
	friend Numero& operator+(const Numero&, const Numero&);
	friend Numero& operator^(const Numero&, const int&);

public:
	Numero();
	Numero(int);

	//Definiciones de operadores sobrecargados con funciones miembros
	Numero& operator++(); //preincremento
	Numero& operator++(int); //Posincremento
	bool operator>(const Numero&);
private:
	int valor;
};


#endif // !NUMERO_H

