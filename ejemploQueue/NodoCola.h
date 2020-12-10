#pragma once
#ifndef NODO_COLA_H
#define NODO_COLA_H

class NodoCola {
public:
	NodoCola(int, NodoCola*);

	void setValor(int);
	void setSiguiente(NodoCola*);

	int getValor();
	NodoCola* getSiguiente();
private:
	int valor;
	NodoCola* siguiente;

};

#endif // !NODO_COLA_H