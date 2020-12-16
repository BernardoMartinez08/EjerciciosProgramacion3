#include "ListaCircular.h"
#include <iostream>

using namespace std;

ListaCircular::ListaCircular() : primero(nullptr), ultimo(nullptr) {
}

bool ListaCircular::estaVacia() {
	return primero == nullptr;
}

void ListaCircular::agregarNodo(const char* _valor) {
	Nodo* nuevo = new Nodo(_valor,nullptr,nullptr);

	if (estaVacia()) {
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else {
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}
}

void ListaCircular::imprimirLista() {
	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	Nodo* actual = primero;
	cout << "\n";
	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << std::endl;
}

void ListaCircular::imprimirListaReversa() {
	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	Nodo* actual = ultimo;
	cout << "\n";
	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();
	} while (actual != ultimo);

	cout << std::endl;
}

void ListaCircular::eliminarNodo(const char* _valor) {
	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	Nodo* actual = primero;
	do {
		if(strcmp(actual->getValor(),_valor)==0){
			if (actual == primero) {
				primero = actual->getSiguiente();
				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);

			}
			else if (actual == ultimo) {
				ultimo = ultimo->getAnterior();
				ultimo->setSiguiente(primero);
				primero->setAnterior(ultimo);
			}
			else {
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
			}

			delete actual;
			return;
		}
		actual = actual->getSiguiente();
	} while (actual != primero);
}