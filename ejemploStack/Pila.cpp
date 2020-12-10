#include "Pila.h"

#include <iostream>
using namespace std;

//Constructor que crea nuestra pila.
Pila::Pila() : _top(nullptr) {
}

//Funcion para verificas si dicha pila esta vacia;
bool Pila::isEmpty() {
	return top == nullptr;
}

//Funcion que agrega elementos a nuestra pila en el top de la Pila
void Pila::push(int _valor) {
	NodoPila* nuevo = new NodoPila(_valor, nullptr);

	if (isEmpty()) {
		_top = nuevo;
	}
	else {
		_top->setSiguiente(_top);
		_top = nuevo;
	}
}

//Funcion que elimina el top de nuestra Pila
void Pila::pop() {
	if (isEmpty())
		return;

	NodoPila* aux = _top->getSiguiente();
	delete _top;
	_top = aux;

}

//Funcion que devuelve el top de nuestra pila sin eliminarlo
int Pila::top() {
	return _top->getValor();
}

//Funcion que devuelve el tamano de la pila
int Pila::size() {
	if (isEmpty())
		return 0;

	int cantidad = 0;
	NodoPila* actual = _top;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}
