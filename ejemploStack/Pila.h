#pragma once
#ifndef  PILA_H
#define PILA_H

#include "NodoPila.h"
class Pila {
public:
	Pila();

	bool isEmpty();
	void push(int);
	void pop();
	int size();
	int top();
private:
	//Primer elemento de la lista
	NodoPila* _top;
};


#endif // ! PILA_H
