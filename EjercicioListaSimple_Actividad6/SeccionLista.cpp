#include "SeccionLista.h"
#include <iostream>
using namespace std;

//Constructor de la Lista.
SeccionLista::SeccionLista() : primero(nullptr) {
	cout << "Lista Creada!!\n";
}

/*Funcion estaVacia determina si la lista no posee ningun elemento verificando que el primer elemento sea
diferente de nullptr.*/
bool SeccionLista::estaVacia() {
	return primero == nullptr;
}

/*Funcion agregar que agrega un nuevo alumno a la lista en orden alfabetico, recibe como parametro el nombre
y nota del alumno a crear.*/
void SeccionLista::agregarAlumno(const char* _nombre, float _nota) {
	AlumnoNodo* NewAlumno = new AlumnoNodo(_nombre, _nota, nullptr);

	/*Evaluamos si la lista esta vacia sera el primer elemento a agregar y establecemos dicho primero igual a
	el nuevo alumno.*/
	if (estaVacia()) {
		primero = NewAlumno;
	}
	else {
		/*Si no es el primer tenemos que evaluar mas cosas que nos permiten ingresar nuestro Alumno en orden
		alfabetico.*/
		AlumnoNodo* actual = primero;
		AlumnoNodo* anterior = nullptr;

		/*Recorremos la lista evaluando con la funcion strcmp comparando el nombre del Alumno nuevo y el actual
		que utilizamos para el recorrido hasta que encuntre un lugar donde ese Nombre sea "menor" que el actual
		por menor me refiero a que es alfebeticamente menor.*/
		while (strcmp(NewAlumno->getNombre(), actual->getNombre()) != -1 && actual->getSiguiente() != nullptr) {
			anterior = actual;
			actual = actual->getSiguiente();
		}

		/*Luego de dicho recorido el actual sera igual al Alumno previo al nuevo a ingresar; si este actual es el
		primer todo en la lista entonce sel nuevo sera el nuevo primero y el anterior primero pasara a ser el segundo.*/
		if (actual == primero) {
			NewAlumno->setSiguiente(actual);
			primero = NewAlumno;
		}
		/*Si no es el primero entonces utilizando el anterior que tambien guardamos en el recorrido a la lista hacemos
		el enlace entre los Alumnos e insertamos el nuevo entre el anterior y el actual.*/
		else {
			anterior->setSiguiente(NewAlumno);
			NewAlumno->setSiguiente(actual);
		}
	}
	cout << "Nodo Agregado!!\n";
}

/*Funcion ListaSeccion primero evalua si la lista no esta vacia, de estarlo lo indica, si no pasamos a recorrer
la lista de alumnos e imprimiendo cada uno de ellos en pantalla.*/
void SeccionLista::listarSeccion() {
	cout << "\n***LISTA DE ALUMNOS***\n";
	if (estaVacia()) {
		cout << "LISTA ESTA VACIA.\n";
		return;
	}

	AlumnoNodo* actual = primero;
	do {
		cout << "{ Nombre: " << actual->getNombre() << ", Nota: " << actual->getNota()  << " }\n";
		actual = actual->getSiguiente();
	} while (actual != nullptr);

	cout << "\n\n";
}

/*Funcion CantidadAprobados primero evalua si la lista no esta vacia, de estarlo lo indica, si no pasamos a recorrer
la lista de alumnos y determianndo en ese recorrido cuantos alumnos tiene una nota mayor o igual a 70 y ese total de
aprobados sera lo que retorne la funcion.*/
int SeccionLista::cantidadAprobados() {
	cout << "\n***LISTA APROBADOS***\n";
	if (estaVacia()) {
		cout << "LISTA ESTA VACIA.\n";
		return 0;
	}

	AlumnoNodo* actual = primero;
	int totalAprobados = 0;
	do {
		if (actual->getNota() >= 70)
			totalAprobados++;

		actual = actual->getSiguiente();
	} while (actual != nullptr);

	return totalAprobados;
}