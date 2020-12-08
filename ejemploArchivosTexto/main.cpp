#include <conio.h>
#include <iostream>
#include "Empresa.h"
using namespace std;

int main() {
	Empresa::agregarEmpleados();

	Empresa::imprimirEmpleados();
	cout << "\n\n";

	ArbolEmpleados newArbol = Empresa::crearArbol();
	newArbol.imprimirArbol();
	
	cout << "\n\nEl total de Salarios es de: " << newArbol.sumatoriaSalarios() << "\n";
	cout << "El total de Empleados es de: " << newArbol.cantidadEmpleados() << "\n";
	cout << "\n\n El Promedio de Salario es de: " << newArbol.promedioSalarios() << "\n";

	newArbol.buscarEmpleado(1001);

	cout << "FIN DE EJECUCION!\n\n";
	_getch();
}