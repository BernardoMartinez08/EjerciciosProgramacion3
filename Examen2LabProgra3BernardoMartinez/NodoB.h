#pragma once
#ifndef  NODOB_H
#define NodoB_H

enum TipoNodo {
	tEntero,
	tDecimal,
	tCadena,
	tCaracter
};

class NodoB {
public:
	NodoB();
	NodoB(NodoB*, NodoB*);

	void setSiguiente(NodoB*);
	void setAnterior(NodoB*);

	NodoB* getSiguiente();
	NodoB* getAnterior();

	virtual TipoNodo getTipo() = 0;

private:
	NodoB* siguiente;
	NodoB* anterior;
};
#endif // ! NODO_H