#include "NodoCola.h"

NodoCola::NodoCola(int _valor, NodoCola* _siguiente) : valor(_valor), siguiente(_siguiente) {

}

void NodoCola::setValor(int _valor) {
	this->valor = _valor;
}

void NodoCola::setSiguiente(NodoCola* _siguiente) {
	this->siguiente = _siguiente;
}

int NodoCola::getValor() {
	return this->valor;
}

NodoCola* NodoCola::getSiguiente() {
	return this->siguiente;
}