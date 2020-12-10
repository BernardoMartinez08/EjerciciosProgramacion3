#include "NodoColaDE.h"

NodoColaDE::NodoColaDE(int _valor, NodoColaDE* _siguiente) : valor(_valor), siguiente(_siguiente) {

}

void NodoColaDE::setValor(int _valor) {
	this->valor = _valor;
}

void NodoColaDE::setSiguiente(NodoColaDE* _siguiente) {
	this->siguiente = _siguiente;
}

int NodoColaDE::getValor() {
	return this->valor;
}

NodoColaDE* NodoColaDE::getSiguiente() {
	return this->siguiente;
}