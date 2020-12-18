#include <conio.h>
#include <iostream>
#include "ListaCircularD.h"

using namespace std;

int main() {
	ListaCircularD ListaObjetos;

	int opc = 0;

	while (opc != 7) {
		cout << "\n\n***M E N U***";

		cout << "\n\n1. Agregar Cadena.";
		cout << "\n2. Agregar Entero.";
		cout << "\n3. Agregar Decimal.";
		cout << "\n4. Agregar Caracter.";
		cout << "\n5. Imprimir totol elementos por tipo.";
		cout << "\n6. imprimir Lista.";
		cout << "\n7. Salir.";

		cout << "\nIngrese la opcion: ";
		cin >> opc;

		switch (opc) {
		case 1:
			cout << "\n\nIngresa la Cadena: ";
			char cadena[20];
			cin >> cadena;

			ListaObjetos.agregarNodo(cadena);
			break;

		case 2:
			cout << "\n\nIngresa el Entero positivo: ";
			int entero;
			cin >> entero;

			ListaObjetos.agregarNodo(entero);
			break;


		case 3:
			cout << "\n\nIngresa el Decimal positivo: ";
			double decimal;
			cin >> decimal;

			ListaObjetos.agregarNodo(decimal);
			break;

		case 4:
			cout << "\n\nIngresa el Caracter: ";
			char caracter;
			cin >> caracter;

			ListaObjetos.agregarNodo(caracter);
			break;

		case 5:
			cout << "\n\n*** R E G I S T R O S***\n";
			ListaObjetos.obtenerCantidadObjetos();
			break;

		case 6:
			cout << "\n\n*** L I S T A***\n";
			ListaObjetos.imprimirLista();
			break;
		}
	}

	_getch();
}