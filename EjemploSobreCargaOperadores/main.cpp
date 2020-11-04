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

	Numero e;
	cout << "Ingrese un valor: ";
	cin >> e;

	cout << "Valor de e: " << e << "\n";

	Numero f = e + a;

	cout << "Valor de f: " << f << "\n"; //15
	cout << "Valor de f PreAumentado: " << ++f << "\n";//16
	f++;// 16 + 1
	cout << "Valor de f PosAumentado: " << f << "\n";//17

	cout << ((a > b) ? "A es mayor que B" : "B es mayor que A") << "\n";
	cout << ((c > d) ? "C es mayor que D" : "D es mayor que C") << "\n";

	_getch();
}