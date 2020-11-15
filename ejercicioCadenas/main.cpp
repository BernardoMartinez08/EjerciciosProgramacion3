#include <conio.h>
#include <string>
#include <iostream>
using namespace std;

int main() {
	string nombre;
	string apellidos;

	nombre = "Teodoro";
	apellidos = "Rivas Lopez";

	string nombreCompleto = nombre + ' ' + apellidos;

	cout << "Nombre: " << nombreCompleto << "\n";
	cout << "Longitud de la cadena: " << nombreCompleto.size() << "\n";


	//Forma de crear cadenas en C

	//Arreglo fijo de caracteres
	char nombreEmpleado[20];
	char apellidosEmpleado[20];

	cout << "Ingrese Nombre: ";
	cin >> nombreEmpleado;

	cout << "Ingrese sus Apellidos: ";
	cin >> apellidosEmpleado;

	char NombreCompletoC[40];
	strcpy_s(NombreCompletoC,strlen(nombreEmpleado) + 1,nombreEmpleado);
	strcat_s(NombreCompletoC, strlen(nombreEmpleado) + strlen(apellidosEmpleado) + 1, apellidosEmpleado);

	cout << "Empleado Ingresado: " << NombreCompletoC << "\n" ;

	//Areglo dinamico de caracteres
	char* nombreCompletoC2;

	nombreCompletoC2 = new char[strlen(nombreEmpleado) + strlen(apellidosEmpleado) + 1];
	strcpy_s(nombreCompletoC2, strlen(nombreEmpleado) + 1, nombreEmpleado);
	strcat_s(nombreCompletoC2, strlen(nombreCompletoC2) + 2, " ");
	strcat_s(nombreCompletoC2, strlen(nombreCompletoC2) + strlen(apellidosEmpleado) + 1, apellidosEmpleado);

	cout << "Nombre Concatenado: " << nombreCompletoC2 << "\n";
	cout << "Longitud de la cadena: " << strlen(nombreCompletoC2) << "\n";

	_getch();
}