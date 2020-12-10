#include "NodoArbol1.h"

NodoArbol::NodoArbol(int _valor, NodoArbol* _hijoDerecho, NodoArbol* _hijoIzquierdo) :
	valor(_valor), hijoDerecho(_hijoDerecho), hijoIzquierdo(_hijoIzquierdo)
{}

void NodoArbol::setValor(int _valor)
{
	this->valor = _valor;
}

void NodoArbol::setHijoDerecho(NodoArbol* _hijoDerecho)
{
	this->hijoDerecho = _hijoDerecho;
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hijoIzquierdo)
{
	this->hijoIzquierdo = _hijoIzquierdo;
}

int NodoArbol::getValor()
{
	return valor;
}

NodoArbol* NodoArbol::getHijoDerecho()
{
	return hijoDerecho;
}

NodoArbol* NodoArbol::getHijoIzquierdo()
{
	return hijoIzquierdo;
}