#include "NodoCaracter.h"
#include <iostream>

using namespace std;

NodoCaracter::NodoCaracter() : valor(' ') {

}

NodoCaracter::NodoCaracter(char _valor, NodoB* _sig, NodoB* _ant) : valor(_valor) {
	this->setSiguiente(nullptr);
	this->setAnterior(nullptr);
}

void NodoCaracter::setValor(char _valor) {
	this->valor = valor;
}

char NodoCaracter::getValor() {
	return this->valor;
}