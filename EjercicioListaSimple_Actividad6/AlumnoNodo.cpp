#include "AlumnoNodo.h"
#include <iostream>

using namespace std;
/*Constructor que inicializa los valores de nombre y de siguiente en nulo ademas de la nota en 0*/
AlumnoNodo::AlumnoNodo() : nombre(nullptr),nota(0), siguiente(nullptr) {

}

/*COnstructor que recibe como parametro con constante char* para inicializar el nombre del alumno, ademas un float
que nos permite inicializar la nota y el nodo siguiente que va a apuntar a nullptr*/
AlumnoNodo::AlumnoNodo(const char* _nombre, float _nota, AlumnoNodo* _siguiente) : nota(_nota), siguiente(_siguiente) {
	/*Al ser un char* debemos usar la funcion strcpy para darle el nombre al alumno.*/
	nombre = new char[strlen(_nombre)];
	strcpy_s(nombre, strlen(_nombre) + 1, _nombre);
}

/*Funcion setNombre recibe como parametro un char* para poder establecer el nombre del alumno.*/
void AlumnoNodo::setNombre(char* _nombre) {
	this->nombre = _nombre;
}

/*Funcion setNota recibe como parametro un float para poder establecer la Nota del alumno.*/
void AlumnoNodo::setNota(float _nota) {
	this->nota = _nota;
}

/*Funcion setSiguiente qu enos permite establecer el enlace entre Alumnos de la lista estableciendo el siguiente
alumno en la lista luego de el.*/
void AlumnoNodo::setSiguiente(AlumnoNodo* _siguiente) {
	this->siguiente = _siguiente;
}

/*Funcion getNombre que nos permite extraer el nombre del alumno retorna un char* con el mismo*/
char* AlumnoNodo::getNombre() {
	return this->nombre;
}

/*Funcion getNota que nos permite extraer la Nota del alumno retorna un float con la mismo*/
float AlumnoNodo::getNota() {
	return this->nota;
}

/*Funcion getSiguiente que nos permite extraer el siguienete Alumno en la lista de alumnos retorna un 
AlumnoNodo con el mismo*/
AlumnoNodo* AlumnoNodo::getSiguiente() {
	return this->siguiente;
}