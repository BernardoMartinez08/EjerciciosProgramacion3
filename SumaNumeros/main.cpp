
#include <iostream>
#include <conio.h>

/*
* Este programa suma dos numeros enteros
*/
int main() {
	int numero1 = 0, numero2{0}, suma = 0;

	std::cout << "Ingrese Numero 1: ";
	std::cin >> numero1;

	std::cout << "Ingrese Numero 2: ";
	std::cin >> numero2;

	suma = numero1 + numero2;

	std::cout << "La suma es: " << suma << std::endl;

	_getch();
}