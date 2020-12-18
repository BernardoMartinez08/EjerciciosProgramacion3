#include "NodoEntero.h"
#include <iostream>

using namespace std;

NodoEntero::NodoEntero() : valor(0) {
	this->setSiguiente(nullptr);
	this->setAnterior(nullptr);
}

NodoEntero::NodoEntero(int _valor,NodoB* _sig, NodoB* _ant) : valor(_valor) {
	this->setSiguiente(_sig);
	this->setAnterior(_ant);
}

void NodoEntero::setValor(int _valor) {
	this->valor = valor;
}

int NodoEntero::getValor() {
	return this->valor;
}