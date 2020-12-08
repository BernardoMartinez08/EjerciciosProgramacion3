#pragma once
#ifndef EMPRESA_H
#define EMPRESA_H
#include "ArbolEmpleados.h"
class Empresa {
public:
	/*Clase Empresa con las funciones de agregarEmpleados e Imprimirlos, ademas de la funcion para
	crear el arbol.*/
	static void agregarEmpleados();
	static void imprimirEmpleados();

	static ArbolEmpleados crearArbol();
private:

};
#endif // !EMPRESA_H
