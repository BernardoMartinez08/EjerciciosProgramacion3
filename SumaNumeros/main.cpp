
#include <iostream>
#include <conio.h>

//using std::cout;
//using std::cin;
//using std::endl;
using namespace std;

/*
* Este programa suma dos numeros enteros
*/
int main() {
	int numero1 = 0, numero2{0}, suma = 0;

	cout << "Ingrese Numero 1: ";
	cin >> numero1;

	cout << "Ingrese Numero 2: ";
	cin >> numero2;

	suma = numero1 + numero2;

	cout << "La suma es: " << suma << endl;

	_getch();
}