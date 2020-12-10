#include "ArbolBinario.h"
#include <iostream>

using std::cout;

ArbolBinario::ArbolBinario() : raiz(nullptr)
{}

void ArbolBinario::agregarNodo(int _valor)
{
	//llamada a funcion recursiva de insertar
	raiz = agregarNodoRec(raiz, _valor);
}

NodoArbol* ArbolBinario::agregarNodoRec(NodoArbol* _raizTmp, int _valor)
{
	//caso base

	if (_raizTmp == nullptr)
	{
		NodoArbol* nuevo = new NodoArbol(_valor, nullptr, nullptr);
		_raizTmp = nuevo;
	}
	else if (_valor > _raizTmp->getValor()) //enviar el nodo a la derecha
	{
		_raizTmp->setHijoDerecho(agregarNodoRec(_raizTmp->getHijoDerecho(), _valor));
	}
	else if (_valor < _raizTmp->getValor()) //enviar el nodo a la izquierda
	{
		_raizTmp->setHijoIzquierdo(agregarNodoRec(_raizTmp->getHijoIzquierdo(), _valor));
	}

	return _raizTmp;
}

void ArbolBinario::imprimirArbol()
{
	imprimirRec(raiz);
	cout << "\n";
}

//preorden
void ArbolBinario::imprimirRec(NodoArbol* _raizTmp)
{
	if (_raizTmp == nullptr)
		return;

	cout << "[ " << _raizTmp->getValor() << " ] ";
	imprimirRec(_raizTmp->getHijoIzquierdo());
	imprimirRec(_raizTmp->getHijoDerecho());

}

int ArbolBinario::cantidadNodos() {
	return cantidadNodosRec(raiz);
}

int ArbolBinario::cantidadNodosRec(NodoArbol* _raizTmp) {
	if (_raizTmp == nullptr)
		return 0;

	return 1 + cantidadNodosRec(_raizTmp->getHijoIzquierdo()) + cantidadNodosRec(_raizTmp->getHijoDerecho());
}

int ArbolBinario::sumatoriaNodos() {
	return sumatoriaNodossRec(raiz);
}

/*Funcion recursiva de suma de salarios que tiene como caso base cuando la raiz temporal sea == nullptr, de lo contario va a retornar el resultado
de la suma del salario de todos los empleados recorriendo cada rama, derecha e izquierda del arbol.*/
int ArbolBinario::sumatoriaNodossRec(NodoArbol* _raizTmp) {
	if (_raizTmp == nullptr)
		return 0;

	return _raizTmp->getValor() + sumatoriaNodossRec(_raizTmp->getHijoIzquierdo()) + sumatoriaNodossRec(_raizTmp->getHijoDerecho());;
}