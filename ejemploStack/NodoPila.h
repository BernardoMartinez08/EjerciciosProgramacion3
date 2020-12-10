#pragma once
#ifndef NODO_PILA_H
#define NODO_PILA_H

class NodoPila {
public:
	NodoPila(int, NodoPila*);

	void setValor(int);
	void setSiguiente(NodoPila*);

	int getValor();
	NodoPila* getSiguiente();
private:
	int valor;
	NodoPila* siguiente;

};

#endif // !NODO_PILA_H