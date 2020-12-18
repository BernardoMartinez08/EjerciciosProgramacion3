#include "ListaCircularD.h"
#include <iostream>

using namespace std;

ListaCircularD::ListaCircularD() : primero(nullptr), ultimo(nullptr) {
}

bool ListaCircularD::estaVacia() {
	return primero == nullptr;
}

void ListaCircularD::agregarNodo(const char* _valor) {
	NodoCadena* nuevo = new NodoCadena(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Nodo Cadena agregado!\n";
}

void ListaCircularD::agregarNodo(char _valor) {
	NodoCaracter* nuevo = new NodoCaracter(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Nodo Caracter agregado!\n";
}

void ListaCircularD::agregarNodo(int _valor) {
	NodoEntero* nuevo = new NodoEntero(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Nodo Entero agregado!\n";
}

void ListaCircularD::agregarNodo(double _valor) {
	NodoDecimal* nuevo = new NodoDecimal(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Nodo Decimal agregado!\n";
}

void ListaCircularD::imprimirLista() {
	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	NodoB* actual = primero;
	cout << "\n";
	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << std::endl;
}

void ListaCircularD::obtenerCantidadObjetos() {
	int enteros = 0, cadenas = 0, caracteres = 0, decimales = 0;

	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	NodoB* actual = primero;
	cout << "\n";
	do {
		if (actual->getTipo() == TipoNodo::tCaracter)
			caracteres++;
		else if(actual->getTipo() == TipoNodo::tCadena)
			cadenas++;
		else if (actual->getTipo() == TipoNodo::tDecimal)
			decimales++;
		else if (actual->getTipo() == TipoNodo::tEntero)
			enteros++;

		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << "\nEnteros: " << enteros << "\nDecimales: " << decimales << "\nCadenas: " << cadenas << "Caracteres: " << caracteres << "\n\n";
}


void ListaCircularD::eliminarNodo(int posicion) {
	if (estaVacia()) {
		cout << "\nLista esta vacia!\n";
		return;
	}

	NodoB* actual = primero;
	int auxPos = 0;
	do {
		if (posicion == auxPos) {
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
		auxPos++;
	} while (actual != primero);
}