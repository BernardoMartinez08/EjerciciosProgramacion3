#include "NodoArbolE.h"
#include <iostream>

using namespace std;

/*Constructor NodoArbolE que recibe como parametro el codido, nombre y salario, ademas de su hijo derecho e izquierdo*/
NodoArbolE::NodoArbolE(int _codigo,const char* _nombre,float _salario, NodoArbolE* _hijoDerecho, NodoArbolE* _hijoIzquierdo) :
	codigo(_codigo),salario(_salario), hijoDerecho(_hijoDerecho), hijoIzquierdo(_hijoIzquierdo) {
	//El nombre es setado usando las funciones de cadenas strcpy_s y strlen
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

//Funcion setCodigo que establece el codigo a traves de un parametro recibido.
void NodoArbolE::setCodigo(int _codigo) {
	this->codigo = _codigo;
}

//Funcion setCodigo que establece el Nombre a traves de un parametro recibido utilizando las funciones de las cadenas strcpy_s, y strlen.
void NodoArbolE::setNombre(const char* _nombre) {
	if (nombre != nullptr)
		delete nombre;

	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

//Funcion setSalario que establece el salario a traves de un parametro recibido.
void NodoArbolE::setSalario(float _salario) {
	this->salario= _salario;
}

//Funcion setHijoDerecho que establece el hijoDerecho a traves de un parametro recibido.
void NodoArbolE::setHijoDerecho(NodoArbolE* _hijoDerecho) {
	this->hijoDerecho = _hijoDerecho;
}

//Funcion setHijoDerecho que establece el hijoDerecho a traves de un parametro recibido.
void NodoArbolE::setHijoIzquierdo(NodoArbolE* _hijoIzquierdo) {
	this->hijoIzquierdo = _hijoIzquierdo;
}

//Funcion getCodigo que retorna el Codigo del Empleado
int NodoArbolE::getCodigo() {
	return this->codigo;
}

//Funcion getNombre que retorna el Nombre del Empleado
char* NodoArbolE::getNombre() {
	return this->nombre;
}

//Funcion getSalario que retorna el Salario del Empleado
float NodoArbolE::getSalario() {
	return this->salario;
}

//Funcion getHijoDerecho que retorna el HijoDerecho del Empleado
NodoArbolE* NodoArbolE::getHijoDerecho() {
	return this->hijoDerecho;
}

//Funcion getHijoIzquierdo que retorna el HijoIzquierdo del Empleado
NodoArbolE* NodoArbolE::getHijoIzquierdo() {
	return this->hijoIzquierdo;
}