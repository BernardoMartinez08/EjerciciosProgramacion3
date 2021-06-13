#pragma once
#ifndef  NodO_CARACTER_H
#define NodoB_CARACTER_H
#include "NodoB.h"

class NodoCampo {
public:
	NodoCampo();
	NodoCampo(const char*, NodoCampo*, NodoCampo*);

	void setValor(const char*);
	char getValor();

	//Funciones para que tenga lista simple
	void agregarNodo(int);
	void agregarNodo(double);
	void agregarNodo(char);
	void agregarNodo(bool);
	void agregarNodo(const char*);

	void imprimirLista();
	void obtenerCantidadObjetos();
private:
	const char* valor;
	NodoB* primero;

	bool estaVacia();
};
#endif // ! NODO_CARACTER_H