#include "ColaDE.h"

#include <iostream>
using namespace std;

//Constructor que crea nuestra cola.
ColaDE::ColaDE() : _front(nullptr), _back(nullptr) {
}

//Funcion para verificas si dicha cola esta vacia;
bool ColaDE::isEmpty() {
	return _front == nullptr;
}

//Funcion que agrega elementos a nuestra cola en el ultimo elemento de la cola
void ColaDE::push_back(int _valor) {
	NodoColaDE* nuevo = new NodoColaDE(_valor, nullptr);

	if (isEmpty()) {
		_front = nuevo;
		_back = nuevo;
	}
	else {
		NodoColaDE* actual = _front;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
		_back = nuevo;
	}
}

//Funcion que elimina el ultimo elemento de nuestra cola
void ColaDE::pop_back() {
	if (isEmpty())
		return;

	NodoColaDE* actual = _front;

	while (actual->getSiguiente() != _back) {
		actual = actual->getSiguiente();
	}

	delete _back;
	_back = actual;

}

//Funcion que agrega elementos a nuestra cola en el primero lugar de la cola
void ColaDE::push_front(int _valor) {
	NodoColaDE* nuevo = new NodoColaDE(_valor, nullptr);

	if (isEmpty()) {
		_front = nuevo;
		_back = nuevo;
	}
	else {
		nuevo->setSiguiente(_front);
		_front = nuevo;
	}
}

//Funcion que elimina el primer elemento de nuestra cola
void ColaDE::pop_front() {
	if (isEmpty())
		return;

	NodoColaDE* aux = _front->getSiguiente();
	delete _front;
	_front = aux;

}

//Funcion que devuelve el priumer elemento de nuestra cola sin eliminarlo
int ColaDE::front() {
	return _front->getValor();
}

//Funcion que devuelve el elemento final de nuestra cola sin eliminarlo
int ColaDE::back() {
	return _back->getValor();
}

//Funcion que devuelve el tamano de la cola
int ColaDE::size() {
	if (isEmpty())
		return 0;

	int cantidad = 0;
	NodoColaDE* actual = _front;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}