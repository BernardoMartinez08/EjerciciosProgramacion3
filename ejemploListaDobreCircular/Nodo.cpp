#include "Nodo.h"
#include <iostream>

using namespace std;

Nodo::Nodo() : valor(nullptr), siguiente(nullptr), anterior(nullptr) {

}

Nodo::Nodo(const char* _valor, Nodo* _sig, Nodo* _ant) : siguiente(_sig), anterior(_ant) {
	valor = new char[strlen(_valor)];
	strcpy_s(valor, strlen(_valor) + 1, _valor);
}

void Nodo::setValor(const char* _valor) {
	if (valor != nullptr)
		delete valor;

	valor = new char[strlen(_valor)];
	strcpy_s(valor, strlen(_valor) + 1, _valor);
}

void Nodo::setSiguiente(Nodo* _sig) {
	this->siguiente = _sig;
}

void Nodo::setAnterior(Nodo* _ant) {
	this->anterior = _ant;
}

char* Nodo::getValor() {
	return this->valor;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
}

Nodo* Nodo::getAnterior() {
	return this->anterior;
}