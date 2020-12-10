#pragma once
#ifndef NODO_P_COLA_H
#define NODO_P_COLA_H

class NodoPCola {
public:
	NodoPCola(int, NodoPCola*);

	void setValor(int);
	void setSiguiente(NodoPCola*);

	int getValor();
	NodoPCola* getSiguiente();
private:
	int valor;
	NodoPCola* siguiente;

};

#endif // !NODO_P_COLA_H