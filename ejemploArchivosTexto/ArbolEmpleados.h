#pragma once
#ifndef ARBOL_EMPLEADOS_H
#define ARBOL_EMPLEADOS_H

#include "NodoArbolE.h"
class ArbolEmpleados {
public:
	//Constructor de la clase sin parametros
	ArbolEmpleados();

	//Funciones agregarEmpleados que reciben los parametros para inicializar un nodoArbol.
	void agregarEmpleados(int,const char*,float);
	//Funcion Imprimir arbol.
	void imprimirArbol();

	//Funciones de suma de salarios, cantidad de empleados, y promedio de salarios.
	float sumatoriaSalarios();
	int cantidadEmpleados();
	float promedioSalarios();

	//Funcion de busqueda de empleados.
	void buscarEmpleado(int);
private:
	//Raiz del arbol de empleados.
	NodoArbolE* raiz;

	//Funciones Privadas y recursivas de suma de salarios, cantidad de empleados,buscar empleados, y agregar empleados e Imprimir el arbol.
	NodoArbolE* agregarEmpleadosRec(NodoArbolE*,int,const char*, float);
	void imprimirArbolRec(NodoArbolE*);
	float sumatoriaSalariosRec(NodoArbolE*);
	int cantidadEmpleadosRec(NodoArbolE*);

	void buscarEmpleadoRec(NodoArbolE*, int);
};

#endif // !ARBOL_BINARIO_H
