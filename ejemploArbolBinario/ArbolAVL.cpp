#include "ArbolAVL.h"
#include <iostream>
using namespace std;
ArbolAVL::ArbolAVL() : raiz(nullptr) {

}

void ArbolAVL::agregarNodo(int _valor) {
	NodoArbol* nuevo = new NodoArbol(_valor,nullptr,nullptr);
	if (raiz == nullptr) {
		raiz = nuevo;

	}
	else {

		raiz = insertaravl(nuevo, raiz);
	}
}

NodoArbol* ArbolAVL::insertaravl(NodoArbol* nuevo, NodoArbol* subarbol) {

	NodoArbol* nuevoPadre = subarbol;

	if (nuevo->getValor() < subarbol->getValor()) {
		if (subarbol->getHijoIzquierdo() == nullptr) {
			subarbol->setHijoIzquierdo(nuevo);
		}
		else {
			subarbol->setHijoIzquierdo(insertaravl(nuevo, subarbol->getHijoIzquierdo()));
			if ((obtenerAltura(subarbol->getHijoIzquierdo()) - obtenerAltura(subarbol->getHijoDerecho()) == 2)) {
				if (nuevo->getValor() < subarbol->getHijoIzquierdo()->getValor()) {
					nuevoPadre = rotacionizquierda(subarbol);
				}
				else {
					nuevoPadre = rotaciondobleizq(subarbol);

				}

			}
		}
	}
	else if (nuevo->getValor() > subarbol->getValor()) {
		if (subarbol->getHijoDerecho() == nullptr) {
			subarbol->setHijoDerecho(nuevo);
		}
		else {
			subarbol->setHijoDerecho(insertaravl(nuevo, subarbol->getHijoDerecho()));
			if ((obtenerAltura(subarbol->getHijoDerecho()) - obtenerAltura(subarbol->getHijoIzquierdo()) == 2)) {

				if (nuevo->getValor() > subarbol->getHijoDerecho()->getValor()) {
					nuevoPadre = rotacionderecha(subarbol);

				}
				else {

					nuevoPadre = rotaciondobleder(subarbol);
				}

			}

		}


	}
	else {
		cout << "Nodo Duplicado" << endl;
	}

	if ((subarbol->getHijoIzquierdo() == nullptr) && (subarbol->getHijoDerecho() != nullptr)) {

		subarbol->setAltura(subarbol->getHijoDerecho()->getAltura() + 1);
	}
	else {

		if ((subarbol->getHijoDerecho() == nullptr) && (subarbol->getHijoIzquierdo() != nullptr)) {

			subarbol->setAltura(subarbol->getHijoIzquierdo()->getAltura() + 1);


		}
		else {
			int maximovalor;

			if (obtenerAltura(subarbol->getHijoIzquierdo()) > obtenerAltura(subarbol->getHijoDerecho())) {
				maximovalor = obtenerAltura(subarbol->getHijoIzquierdo());

			}
			else {
				maximovalor = obtenerAltura(subarbol->getHijoDerecho());
			}
			subarbol->setAltura(maximovalor + 1);

		}

	}

	return nuevoPadre;
}


NodoArbol* ArbolAVL::buscar(int _valor, NodoArbol* _raizTmp) {

	if (_raizTmp == nullptr) {
		return nullptr;
	}
	if (_raizTmp->getValor() == _valor) {
		return _raizTmp;

	}

	if (_raizTmp->getValor() < _valor) {
		buscar(_valor, _raizTmp->getHijoDerecho());
	}
	else {
		buscar(_valor, _raizTmp->getHijoIzquierdo());
	}
}

int ArbolAVL::obtenerAltura(NodoArbol* _raizTmp) {

	if (_raizTmp == nullptr) {

		return -1;
	}
	else {
		return _raizTmp->getAltura();
	}
}

NodoArbol* ArbolAVL::rotacionizquierda(NodoArbol* _raizTmp) {

	NodoArbol* aux = _raizTmp->getHijoIzquierdo();
	_raizTmp->setHijoIzquierdo(aux->getHijoDerecho());
	aux->setHijoDerecho(_raizTmp);
	int maximovalor_raizTmp;
	int maximovaloraux;

	if (obtenerAltura(_raizTmp->getHijoIzquierdo()) > obtenerAltura(_raizTmp->getHijoDerecho())) {
		maximovalor_raizTmp = obtenerAltura(_raizTmp->getHijoIzquierdo()) + 1;

	}
	else {
		maximovalor_raizTmp = obtenerAltura(_raizTmp->getHijoDerecho()) + 1;
	}

	_raizTmp->setAltura(maximovalor_raizTmp);


	if (obtenerAltura(aux->getHijoIzquierdo()) > obtenerAltura(aux->getHijoDerecho())) {
		maximovaloraux = obtenerAltura(aux->getHijoIzquierdo()) + 1;

	}
	else {
		maximovaloraux = obtenerAltura(aux->getHijoDerecho()) + 1;
	}

	aux->setAltura(maximovaloraux);

	return aux;

}

NodoArbol* ArbolAVL::rotacionderecha(NodoArbol* _raizTmp) {

	NodoArbol* aux = _raizTmp->getHijoDerecho();
	_raizTmp->setHijoDerecho(aux->getHijoIzquierdo());
	aux->setHijoIzquierdo(_raizTmp);
	int maximovalorc;
	int maximovaloraux;

	if (obtenerAltura(_raizTmp->getHijoIzquierdo()) > obtenerAltura(_raizTmp->getHijoDerecho())) {
		maximovalorc = obtenerAltura(_raizTmp->getHijoIzquierdo());

	}
	else {
		maximovalorc = obtenerAltura(_raizTmp->getHijoDerecho());
	}

	_raizTmp->setAltura(maximovalorc + 1);


	if (obtenerAltura(aux->getHijoIzquierdo()) > obtenerAltura(aux->getHijoDerecho())) {
		maximovaloraux = obtenerAltura(aux->getHijoIzquierdo());

	}
	else {
		maximovaloraux = obtenerAltura(aux->getHijoDerecho());
	}

	aux->setAltura(maximovaloraux + 1);

	return aux;
}

NodoArbol* ArbolAVL::rotaciondobleizq(NodoArbol* _raizTmp) {

	NodoArbol* temp;
	_raizTmp->setHijoIzquierdo(rotacionderecha(_raizTmp->getHijoIzquierdo()));
	temp = rotacionizquierda(_raizTmp);
	return temp;
}


NodoArbol* ArbolAVL::rotaciondobleder(NodoArbol* _raizTmp) {
	NodoArbol* temp;
	_raizTmp->setHijoDerecho(rotacionizquierda(_raizTmp->getHijoDerecho()));
	temp = rotacionderecha(_raizTmp);
	return temp;
}


int ArbolAVL::cantidadNodos() {
	return cantidadNodosRec(raiz);
}

int ArbolAVL::cantidadNodosRec(NodoArbol* _raizTmp) {
	if (_raizTmp == nullptr)
		return 0;

	return 1 + cantidadNodosRec(_raizTmp->getHijoIzquierdo()) + cantidadNodosRec(_raizTmp->getHijoDerecho());
}
