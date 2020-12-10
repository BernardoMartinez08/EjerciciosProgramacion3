#include "NodoPila.h"

NodoPila::NodoPila(int _valor, NodoPila* _siguiente) : valor(_valor), siguiente(_siguiente) {

}

void NodoPila::setValor(int _valor) {
	this->valor = _valor;
}

void NodoPila::setSiguiente(NodoPila* _siguiente) {
	this->siguiente = _siguiente;
}

int NodoPila::getValor() {
	return this->valor;
}

NodoPila* NodoPila::getSiguiente() {
	return this->siguiente;
}