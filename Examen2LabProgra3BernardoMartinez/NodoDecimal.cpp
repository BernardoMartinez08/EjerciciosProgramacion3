#include "NodoDecimal.h"
#include <iostream>

using namespace std;

NodoDecimal::NodoDecimal() : valor(0) {
	this->setSiguiente(nullptr);
	this->setAnterior(nullptr);
}

NodoDecimal::NodoDecimal(double _valor, NodoB* _sig, NodoB* _ant) : valor(_valor) {
	this->setSiguiente(_sig);
	this->setAnterior(_ant);
}

void NodoDecimal::setValor(double _valor) {
	this->valor = valor;
}

double NodoDecimal::getValor() {
	return this->valor;
}

TipoNodo NodoDecimal::getTipo() {
	return TipoNodo::tDecimal;
}