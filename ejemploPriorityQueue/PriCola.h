#pragma once
#ifndef  PRI_COLA_H
#define PRI_COLA_H

#include "NodoPCola.h"
class PriCola {
public:
	PriCola();

	bool isEmpty();
	void push(int);
	void pop();
	int size();
	int front();
	int back();
private:
	NodoPCola* _front;
	NodoPCola* _back;
};


#endif // ! PRI_COLA_H