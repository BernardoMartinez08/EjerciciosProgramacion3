#pragma once
#ifndef ALUMNO_NODO_H
#define ALUMNO_NODO_H

class AlumnoNodo {
public:
	//Constructores con y sin parametros
	AlumnoNodo();
	AlumnoNodo(const char*, float, AlumnoNodo*);

	//Prototipos de Funciones
	//Funciones set para los atributos de clase.
	void setNombre(char*);
	void setNota(float);
	void setSiguiente(AlumnoNodo*);

	//Funcines get para los atributos de clase.
	char* getNombre();
	float getNota();
	AlumnoNodo* getSiguiente();
private:
	//Un char* que contiene el nombre del alumno.
	char* nombre;
	//Un float de nota que contiene la nota del alumno.
	float nota;
	//Un AlumnoNodo* que es al apuntador que enlaza la lista.
	AlumnoNodo* siguiente;

};

#endif // !ALUMNO_NODO_H