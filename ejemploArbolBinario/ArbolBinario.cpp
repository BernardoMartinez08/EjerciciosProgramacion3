#include "ArbolBinario.h"
#include <iostream>
using namespace std;
ArbolBinario::ArbolBinario() : raiz(nullptr) {

}

void ArbolBinario::agregarNodo(int _valor) {
	raiz = agregarNodoRec(raiz,_valor);
}

NodoArbol* ArbolBinario::agregarNodoRec(NodoArbol* _raizTmp,int _valor) {
	//Caso Base
	if (_raizTmp == nullptr) {
		NodoArbol* nuevo = new NodoArbol(_valor, nullptr, nullptr);
		_raizTmp = nuevo;
	}
	else if (_valor > _raizTmp->getValor()) { //Enviar nodo a la Derecha
		_raizTmp->setHijoDerecho(agregarNodoRec(_raizTmp->getHijoDerecho(),_valor));
	}
	else if (_valor < _raizTmp->getValor()) { //Enviar nodo a la Derecha
		_raizTmp->setHijoIzquierdo(agregarNodoRec(_raizTmp->getHijoIzquierdo(), _valor));
	}

	return _raizTmp;
}

void ArbolBinario::imprimirArbol() {
	imprimirArbolRec(raiz);
	cout << "\n\n";
}

//PreOrden
void ArbolBinario::imprimirArbolRec(NodoArbol* _raizTmp) {
	if (_raizTmp == nullptr)
		return;

	cout << "[ " << _raizTmp->getValor() << " ] ";
	imprimirArbolRec(_raizTmp->getHijoIzquierdo());
	imprimirArbolRec(_raizTmp->getHijoDerecho());
}

int ArbolBinario::sumatoriaNodos() {
	return sumatoriaNodosRec(raiz);
}

int ArbolBinario::sumatoriaNodosRec(NodoArbol* _raizTmp) {
	if (_raizTmp == nullptr)
		return 0;

	return _raizTmp->getValor() + sumatoriaNodosRec(_raizTmp->getHijoIzquierdo()) + sumatoriaNodosRec(_raizTmp->getHijoDerecho());;
}

int ArbolBinario::cantidadNodos() {
	return cantidadNodosRec(raiz);
}

int ArbolBinario::cantidadNodosRec(NodoArbol* _raizTmp) {
	if (_raizTmp == nullptr)
		return 0;

	return 1 + cantidadNodosRec(_raizTmp->getHijoIzquierdo()) + cantidadNodosRec(_raizTmp->getHijoDerecho());
}
