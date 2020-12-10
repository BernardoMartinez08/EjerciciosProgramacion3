#include "NodoPCola.h"

NodoPCola::NodoPCola(int _valor, NodoPCola* _siguiente) : valor(_valor), siguiente(_siguiente) {

}

void NodoPCola::setValor(int _valor) {
	this->valor = _valor;
}

void NodoPCola::setSiguiente(NodoPCola* _siguiente) {
	this->siguiente = _siguiente;
}

int NodoPCola::getValor() {
	return this->valor;
}

NodoPCola* NodoPCola::getSiguiente() {
	return this->siguiente;
}