#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

int main(){
	cout << "Ingrese un numero de 5 digitos: ";
	int numero = 0;
	cin >> numero;

	//Solucion 1
	int digito1 = numero / 10000;
	int digito2 = (numero % 10000) / 1000;
	int digito3 = ((numero % 10000) % 1000) / 100;
	int digito4 = (((numero % 10000) % 1000) % 100) / 10;
	int digito5 = ((((numero % 10000) % 1000) % 100) % 10) / 1;

	cout << "Los digitos son: { " << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5 << " }\n";


	//Solucion 2
	int divisor = 10000;
	int temp = numero;

	cout << "Los digitos son: { ";

	for (int i = 0; i < 5; i++) {
		temp = numero / divisor;
		cout << temp << "   ";
		numero = numero % divisor;
		divisor = divisor / 10;

		if (i == 4) {
			cout << "}\n";
		}
	}

	_getch();
}