#include "Cola.h"

#include <iostream>
using namespace std;

//Constructor que crea nuestra cola.
Cola::Cola() : _front(nullptr), _back(nullptr) {
}

//Funcion para verificas si dicha cola esta vacia;
bool Cola::isEmpty() {
	return _front == nullptr;
}

//Funcion que agrega elementos a nuestra cola en el ultimo elemento de la Cola
void Cola::push(int _valor) {
	NodoCola* nuevo = new NodoCola(_valor, nullptr);

	if (isEmpty()) {
		_front = nuevo;
		_back = nuevo;
	}
	else {
		NodoCola* actual = _front;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
		_back = nuevo;
	}
}

//Funcion que elimina el primer elemento de nuestra cola
void Cola::pop() {
	if (isEmpty())
		return;

	NodoCola* aux = _front->getSiguiente();
	delete _front;
	_front = aux;

}

//Funcion que devuelve el priumer elemento de nuestra cola sin eliminarlo
int Cola::front() {
	return _front->getValor();
}

//Funcion que devuelve el elemento final de nuestra cola sin eliminarlo
int Cola::back() {
	return _back->getValor();
}

//Funcion que devuelve el tamano de la cola
int Cola::size() {
	if (isEmpty())
		return 0;

	int cantidad = 0;
	NodoCola* actual = _front;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}