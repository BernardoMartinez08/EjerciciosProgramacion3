#include "NodoArbol.h"

NodoArbol::NodoArbol(int _valor, NodoArbol* _hijoDerecho, NodoArbol* _hijoIzquierdo) : altura(0), valor(_valor), hijoDerecho(_hijoDerecho), hijoIzquierdo(_hijoIzquierdo) {

}

void NodoArbol::setValor(int _valor) {
	this->valor = _valor;
}

void NodoArbol::setAltura(int _altura) {
	this->altura = _altura;
}

void NodoArbol::setHijoDerecho(NodoArbol* _hijoDerecho) {
	this->hijoDerecho = _hijoDerecho;
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hijoIzquierdo) {
	this->hijoIzquierdo = _hijoIzquierdo;
}

int NodoArbol::getValor() {
	return this->valor;
}

int NodoArbol::getAltura() {
	return this->altura;
}

NodoArbol* NodoArbol::getHijoDerecho() {
	return this->hijoDerecho;
}

NodoArbol* NodoArbol::getHijoIzquierdo() {
	return this->hijoIzquierdo;
}