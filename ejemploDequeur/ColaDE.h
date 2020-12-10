#pragma once
#ifndef  PRI_COLA_H
#define PRI_COLA_H

#include "NodoColaDE.h"
class ColaDE {
public:
	ColaDE();

	bool isEmpty();
	void push_back(int);
	void pop_back();
	void push_front(int);
	void pop_front();
	int size();
	int front();
	int back();
private:
	NodoColaDE* _front;
	NodoColaDE* _back;
};


#endif // ! COLA_DE_H