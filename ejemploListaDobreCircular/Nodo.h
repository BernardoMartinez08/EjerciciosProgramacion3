#pragma once
#ifndef  NODO_H
#define Nodo_H

class Nodo {
public:
	Nodo();
	Nodo(const char*, Nodo*, Nodo*);

	void setValor(const char*);
	void setSiguiente(Nodo*);
	void setAnterior(Nodo*);

	char* getValor();
	Nodo* getSiguiente();
	Nodo* getAnterior();


private:
	char* valor;
	Nodo* siguiente;
	Nodo* anterior;
};
#endif // ! NODO_H
