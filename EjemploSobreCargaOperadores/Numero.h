#pragma once
#ifndef NUMERO_H
#define NUMERO_H
#include <iostream>

class Numero {
	friend std::ostream& operator<<(std::ostream&,const Numero&);
	friend Numero& operator+(const Numero&, const Numero&);
	friend Numero& operator^(const Numero&, const int&);

public:
	Numero();
	Numero(int);

private:
	int valor;
};


#endif // !NUMERO_H

