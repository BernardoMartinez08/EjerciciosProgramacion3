#pragma once
#ifndef  NODOB_H
#define NodoB_H

class NodoB {
public:
	NodoB();
	NodoB(NodoB*, NodoB*);

	void setSiguiente(NodoB*);
	void setAnterior(NodoB*);

	NodoB* getSiguiente();
	NodoB* getAnterior();

private:
	NodoB* siguiente;
	NodoB* anterior;
};
#endif // ! NODO_H