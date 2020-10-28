#include <iostream>
#include <conio.h>
#include "Numero.h"

using namespace std;



int main() {
	Numero a(11);
	Numero b(3);
	Numero c;


	cout << "Valor de a: " << a << "\n";
	cout << "Valor de b: " << b << "\n";
	cout << "Valor de c: " << c << "\n";

	c = a + b;
	cout << "Valor de c: " << c << "\n";

	Numero d;
	d = c ^ 3;

	cout << "Valor de d: " << d << "\n";
	_getch();
}