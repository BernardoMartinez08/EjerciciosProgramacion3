#include <conio.h>
#include <iostream>
#include "EntidadEducativa.h"
using namespace std;

int main() {
	//EntidadEducativa::agregarAlumnos(); 
	EntidadEducativa::consultarAlumnos();

	//EntidadEducativa::agregarMaterias();
	EntidadEducativa::consultarMaterias();


	cout << "\n\n ***** I N G R E S O  D E  N O T A S ***** \n\n";
	cout << "\nIndique el Numero de Cuenta del Alumno:";
	int ncuenta;
	cin >> ncuenta;

	cout << "Indique el Codigo de la Materia: ";
	int codigoclass;
	cin >> codigoclass;

	cout << "Indique la Nota Asignada:";
	float nota;
	cin >> nota;

	EntidadEducativa::agregarNotas(ncuenta,codigoclass,nota);
	EntidadEducativa::consultarNotas();

	_getch();
}