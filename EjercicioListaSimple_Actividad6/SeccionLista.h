#pragma once
#ifndef SECCION_LISTA_H
#define SECCION_LISTA_H
#include "AlumnoNodo.h"

class SeccionLista {
public:
	//Constructor de la lista enlazada.
	SeccionLista();

	//Prototipos de Funciones.
	//Funcion que nos devuelve si la lista no tiene elementos.
	bool estaVacia();
	//Funcion que nos permite Agregar alumnos a lista.
	void agregarAlumno(const char*,float);

	//Funcion para listar alumnos de la lista
	void listarSeccion();
	//Funcion para calcular los aprobados de la lista.
	int cantidadAprobados();
private:
	//Primer elemento de la lista
	AlumnoNodo* primero;
};

#endif // !SECCION_LISTA_H