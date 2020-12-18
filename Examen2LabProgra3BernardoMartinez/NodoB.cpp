#include "NodoB.h"
#include <iostream>

using namespace std;

NodoB::NodoB() : siguiente(nullptr), anterior(nullptr) {

}

NodoB::NodoB(NodoB* _sig, NodoB* _ant) : siguiente(_sig), anterior(_ant) {
	
}

void NodoB::setSiguiente(NodoB* _sig) {
	this->siguiente = _sig;
}

void NodoB::setAnterior(NodoB* _ant) {
	this->anterior = _ant;
}

NodoB* NodoB::getSiguiente() {
	return this->siguiente;
}

NodoB* NodoB::getAnterior() {
	return this->anterior;
}
