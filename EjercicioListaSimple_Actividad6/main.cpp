#include <conio.h>
#include <iostream>
#include "SeccionLista.h"
using namespace std;

int main() {

	/*Para probar las funciones de la lista enlazada utilice un menu para hacer el ingreso de nuevos alumnos, y visualizar
	tanto la lista como la cantidad de aprobados.*/
	int opcion;
	SeccionLista ListaAlumnos;
	do {
		//Opciones disponibles en el menu.
		cout << "\n\n***SISTEMA DE ALUMNOS***\n\n";
		cout << "1. Agregar Alumnos.\n"
			 << "2. Lista de Alumnos.\n"
			 << "3. Cantidad De Aprobados.\n"
			 << "4. Salir.\n\nSelecciona una de las opciones:";
		cin >> opcion;

		//Acciones de cada opcion que el usuario elije.
		switch (opcion) {
		case 1: {
			/*En la opcion uno de ingreso de alumnos, pedimos al usuario el nombre del mismo y su nota
			los cuales son usados para enviarlos como parametros a la funcion agregarAlumno de la lista.*/
			cout << "\n\n1. Agregar Alumnos.\n";

			char _nombre[10];
			float _nota;

			cout << "Ingresa el Nombre del Alumno: ";
			cin >> _nombre;

			cout << "\nIngresa su Nota: ";
			cin >> _nota;
			
			ListaAlumnos.agregarAlumno(_nombre,_nota);
			break;
		}

		case 2: {
			/*Para imprimir la lista unicamenta llamamos a la funcion de la lista ListarSeccion();*/
			cout << "\n\n2. Lista de Alumnos.\n";

			ListaAlumnos.listarSeccion();
			break;
		}

		case 3: {
			/*Para imprimir los AProbados unicamente lo hacemos en una salida de pantalla haciendo uso
			de la funcion de la lista cantidadAprobados.*/
			cout << "\n\n3. Cantidad De Aprobados.\n";

			cout << "EL TOTAL DE ALUMNOS APROBADOS ES DE: " << ListaAlumnos.cantidadAprobados();
			break;
		}

		case 4: {
			/*Para indicar cuando salio del Sistema de lista.*/
			cout << "SALIENDO..................";
			break;
		}

		default: {
			//En caso de seleccionar una opcion no valida.
			cout << "UPS OPCION NO VALIDA!!\n\n";
			break;
		}
		}
	} while (opcion != 4);


	_getch();
}