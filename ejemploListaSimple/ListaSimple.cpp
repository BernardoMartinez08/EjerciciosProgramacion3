#include "ListaSimple.h"
#include <iostream>
using namespace std;

ListaSimple::ListaSimple() : primero(nullptr) {
	cout << "Lista Creada!!\n";
}

bool ListaSimple::estaVacia() {
	return primero == nullptr;
}

void ListaSimple::agregarNodo(int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr);

	if (existeNodo(_valor))
		return;

	if (estaVacia()) {
		primero = nuevo;
	}
	else {
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) {
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);
	}

	cout << "Nodo Agregado!!\n";
}

void ListaSimple::eliminarNodo(int _valor) {
	if (estaVacia())
		return;

	Nodo* actual = primero;
	Nodo* anterior = nullptr;

	do {
		if (actual->getValor() == _valor) {
			if (actual == primero) {
				primero = actual->getSiguiente();
				delete actual;
			}
			else {
				anterior->setSiguiente(actual->getSiguiente());
				delete actual;
			}

			cout << "Nodo Eliminado!!\n";
			return;
		}

		anterior = actual;
		actual = actual->getSiguiente();

	} while (actual != nullptr);
}


void ListaSimple::imprimirLista() {
	cout << "\n***LISTA***\n";
	if (estaVacia())
		cout << "LISTA ESTA VACIA.\n";

	Nodo* actual = primero;
	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	}while (actual != nullptr);

	cout << "\n\n";
}

bool ListaSimple::existeNodo(int _valor) {
	if (estaVacia())
		return false;

	Nodo* actual = primero;
	do {
		if (actual->getValor() == _valor)
			return true;

		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return false;
}

void ListaSimple::ordenarArreglo() {
	int numero[] = { 5,-1,0,8,7,-4,0,-3,1,6 };
	
	cout << "\n\nORDENAMIENTO DE ARREGLO\n";
	for (int i = 0; i < 10; i++) {
		cout << "[ " << numero[i] << " ] ";
	}
	cout << "\n\n";

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			int numeroActual = numero[j];
			int numeroSiguiente = numero[j + 1];

			if (numeroActual > numeroSiguiente)
			{
				numero[j] = numeroSiguiente;
				numero[j + 1] = numeroActual;
			}

		}
	}
	
	for (int i = 0; i < 10; i++) {
		cout << "[ " << numero[i] << " ] ";
	}
	cout << "\n\n";
}

int ListaSimple::obtenerTamanio() {
	if (estaVacia())
		return 0;

	int cantidad = 0;
	Nodo* actual = primero;

	do {
		cantidad++;
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return cantidad;
}

Nodo* ListaSimple::obtenerPosNodo(int _posicion) {
	if (estaVacia())
		return nullptr;

	int posActual = 0;
	Nodo* actual = primero;

	do {
		if (posActual == _posicion)
			return actual;

		posActual++;
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return nullptr;
}

void ListaSimple::intercambio(Nodo* a, Nodo* b) {
	int temp = a->getValor();
	a->setValor(b->getValor());
	b->setValor(temp);
}

void ListaSimple::ordenarElementos() {
	int tamano = obtenerTamanio();

	for (int i = 0; i < tamano - 1; i++) {
		for (int j = 0; j < tamano - i - 1; j++) {
			Nodo* a = obtenerPosNodo(j);
			Nodo* b = obtenerPosNodo(j + 1);

			if (a->getValor() > b->getValor()) {
				intercambio(a, b);
			}
		}
	}
}