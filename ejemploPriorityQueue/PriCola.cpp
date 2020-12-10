#include "PriCola.h"

#include <iostream>
using namespace std;

//Constructor que crea nuestra cola.
PriCola::PriCola() : _front(nullptr), _back(nullptr) {
}

//Funcion para verificas si dicha cola esta vacia;
bool PriCola::isEmpty() {
	return _front == nullptr;
}

//Funcion que agrega elementos a nuestra cola tomando en cuenta la prioridad en este caso
//en este caso del manor al mayor
void PriCola::push(int _valor) {
	NodoPCola* nuevo = new NodoPCola(_valor, nullptr);

	if (isEmpty()) {
		_front = nuevo;
		_back = nuevo;
	}
	else {
		NodoPCola* actual = _front;

		while (actual->getSiguiente() != nullptr) {
			if(actual->getValor() < _valor)
				actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
		
		actual = _front;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		_back = actual;
	}
}

//Funcion que elimina el primer elemento de nuestra cola
void PriCola::pop() {
	if (isEmpty())
		return;

	NodoPCola* aux = _front->getSiguiente();
	delete _front;
	_front = aux;

}

//Funcion que devuelve el priumer elemento de nuestra cola sin eliminarlo
int PriCola::front() {
	return _front->getValor();
}

//Funcion que devuelve el elemento final de nuestra cola sin eliminarlo
int PriCola::back() {
	return _back->getValor();
}

//Funcion que devuelve el tamano de la cola
int PriCola::size() {
	if (isEmpty())
		return 0;

	int cantidad = 0;
	NodoPCola* actual = _front;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}
