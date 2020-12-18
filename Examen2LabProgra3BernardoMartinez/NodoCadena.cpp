#include "NodoCadena.h"
#include <iostream>

using namespace std;

NodoCadena::NodoCadena() : valor(nullptr) {

}

NodoCadena::NodoCadena(const char* _valor, NodoB* _sig, NodoB* _ant) {
	valor = new char[strlen(_valor)];
	strcpy_s(valor, strlen(_valor) + 1, _valor);
	this->setSiguiente(nullptr);
	this->setAnterior(nullptr);
}

void NodoCadena::setValor(const char* _valor) {
	this->valor = valor;
}

char* NodoCadena::getValor() {
	return this->valor;
}