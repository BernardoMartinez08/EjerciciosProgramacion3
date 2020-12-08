#include "ArbolEmpleados.h"
#include <iostream>
using namespace std;
//Constructor de la clase sin parametros que inicializa la raiz del arbol en nullptr.
ArbolEmpleados::ArbolEmpleados() : raiz(nullptr) {

}

/*Funcion agregar empleado que recibe como parametros los atributos de codigo, nombre y salario para enviarlos de 
parametro a la funcion recursiva que agrega el empleado al arbol.*/
void ArbolEmpleados::agregarEmpleados(int _codigo,const char* _nombre,float _salario) {
	raiz = agregarEmpleadosRec(raiz, _codigo,_nombre,_salario);
}

/*Funcion Recursiva Agregar Empleados que recube como parametro la raiz temporal y los atrubutos de un nodoEmpleado para usarlos para
crear el mismo haciendo el recorrido por todas las "ramas" del arbol hasta encontar su lugar correspondiente ya sea a la derecha o 
izquierda de la raiz y a su ves de las ramas ya existentes.*/
NodoArbolE* ArbolEmpleados::agregarEmpleadosRec(NodoArbolE* _raizTmp, int _codigo, const char* _nombre, float _salario) {
	//Caso Base
	if (_raizTmp == nullptr) {
		NodoArbolE* nuevo = new NodoArbolE(_codigo,_nombre,_salario, nullptr, nullptr);
		_raizTmp = nuevo;
	}
	else if (_salario > _raizTmp->getSalario()) { //Enviar nodo a la Derecha
		_raizTmp->setHijoDerecho(agregarEmpleadosRec(_raizTmp->getHijoDerecho(),_codigo,_nombre,_salario));
	}
	else if (_salario < _raizTmp->getSalario()) { //Enviar nodo a la Derecha
		_raizTmp->setHijoIzquierdo(agregarEmpleadosRec(_raizTmp->getHijoIzquierdo(), _codigo, _nombre, _salario));
	}

	return _raizTmp;
}

//Funcion ImprimirArbol que llama a la funcion recursiva de la misma enviando la raiz como parametro.
void ArbolEmpleados::imprimirArbol() {
	imprimirArbolRec(raiz);
	cout << "\n\n";
}

/*Funcion de imprimir Arbol en PreOrden el cual recorre el arbol en arbol por ambos lados izquierda y derecha e imprime el contenido de la misma
* el caso base seria cuando la raiz temporal es igual a nullptr.*/
void ArbolEmpleados::imprimirArbolRec(NodoArbolE* _raizTmp) {
	if (_raizTmp == nullptr)
		return;

	cout << "[ Codigo: " << _raizTmp->getCodigo() << " Nombre: " << _raizTmp->getNombre() << " Salario: " << _raizTmp->getSalario() << " ]\n";
	imprimirArbolRec(_raizTmp->getHijoIzquierdo());
	imprimirArbolRec(_raizTmp->getHijoDerecho());
}

/*Funcion sumatoria de Salarios que llama a su recursiva enviando la raiz como parametro.*/
float ArbolEmpleados::sumatoriaSalarios() {
	return sumatoriaSalariosRec(raiz);
}

/*Funcion recursiva de suma de salarios que tiene como caso base cuando la raiz temporal sea == nullptr, de lo contario va a retornar el resultado
de la suma del salario de todos los empleados recorriendo cada rama, derecha e izquierda del arbol.*/
float ArbolEmpleados::sumatoriaSalariosRec(NodoArbolE* _raizTmp) {
	if (_raizTmp == nullptr)
		return 0;

	return _raizTmp->getSalario() + sumatoriaSalariosRec(_raizTmp->getHijoIzquierdo()) + sumatoriaSalariosRec(_raizTmp->getHijoDerecho());;
}

/*Funcion cantidadEmplados que llama a su recursiva para calcular la cantidad de empleados enviando como parametro la raiz.*/
int ArbolEmpleados::cantidadEmpleados() {
	return cantidadEmpleadosRec(raiz);
}

/*Funcion Recursiva CantidadEmpleados que tiene como caso base cuando la raiz temporal es igual a nullptr, y que suma 1 cada ves que ejecuta
la recursividad, recorriendo tanto las ramas derecha como ezquierda de la raiz y de las misma ramas.*/
int ArbolEmpleados::cantidadEmpleadosRec(NodoArbolE* _raizTmp) {
	if (_raizTmp == nullptr)
		return 0;

	return 1 + cantidadEmpleadosRec(_raizTmp->getHijoIzquierdo()) + cantidadEmpleadosRec(_raizTmp->getHijoDerecho());
}

/*Funcion de Promedio de Salarios que divide la sumatorioa de salarios entre la cantidad de los mismo haciendo uso de las funciones anteriormente
definidad*/
float ArbolEmpleados::promedioSalarios() {
	return (sumatoriaSalarios() / cantidadEmpleados());
}

/*Funcion que llama a su recursiva buscar empleados que manda como parametro el codigo del mismo y la raiz del arbol.*/
void ArbolEmpleados::buscarEmpleado(int _codigo) {
	buscarEmpleadoRec(raiz,_codigo);
	cout << "\n\n";
}

/*Funcion Recursiva que busca Empleados a traves de su codigo determina si el codigo de la rama que esta analizando es igual a nullptr ese seria 
el caso base, si no verifica el codigo y si es igual lo imprime, recorre todo el arbol.*/
void ArbolEmpleados::buscarEmpleadoRec(NodoArbolE* _raizTmp, int _codigo) {
	if (_raizTmp == nullptr)
		return;
	if (_raizTmp->getCodigo() == _codigo) {
		cout << "[ Codigo: " << _raizTmp->getCodigo() << " Nombre: " << _raizTmp->getNombre() << " Salario: " << _raizTmp->getSalario() << " ] ";
		return;
	}

	buscarEmpleadoRec(_raizTmp->getHijoIzquierdo(),_codigo);
	buscarEmpleadoRec(_raizTmp->getHijoDerecho(),_codigo);
}
