#include <iostream>
#include <conio.h>

using namespace std;

class Numero {
private:
	int valor;

public:
	Numero(void) : valor(0) {
	}

	Numero(int _valor) : valor(_valor) {
	}

	void setValor(int _valor) {
		valor = _valor;
	}

	int getValor() {
		return valor;
	}

	bool esPar() {
		return (valor % 2) == 0 ? true : false;
	}

	bool esMultiplo(Numero valor2) {
		int mayor = valor > valor2.getValor() ? valor : valor2.getValor();
		int menor = valor < valor2.getValor() ? valor : valor2.getValor();
		
		int residuo = mayor % menor;

		return residuo == 0;
	}

	bool esPrimo() {
		int cantidadDivisible = 0;

		for (int i = 1; i <= valor; i++) {
			if (valor % i == true)
				cantidadDivisible++;
		}

		return cantidadDivisible == 2;
	}

	bool esCapicuo{
		/*int digitos[5];

		digitos[0] = valor / 10000;
		digitos[1] = (valor % 10000) / 1000;
		digitos[2] = ((valor % 10000) % 1000) / 100;
		digitos[3] = (((valor % 10000) % 1000) % 100) / 10;
		digitos[4] = ((((valor % 10000) % 1000) % 100) % 10) / 1;


		if (digitos[0] == digitos[4]) {
			if (digitos[1] == digitos[3]) {
				if (digitos[2] == digitos[2]) {
					cout << "\nEl numero: " << valor << " es un PALNDROMO, sus digitos\n";
				}
			}
		}
		else {
			cout << "\nEl numero: " << valor << " NO es un PALNDROMO, sus digitos\n";
		}*/
	
};

int main() {
	Numero n1;
	Numero n2(10);

	n1.setValor(13);

	cout << "n1 es: " << (n1.esPar() ? " PAR" : " IMPAR") << "\n";
	cout << "n1 : " << (n1.esMultiplo(n2) ? " es Multiplo de n2" : " es Multiplo de n2") << "\n";
	cout << "n1 : " << (n1.esPrimo() ? " es Primo" : " no es Primo") << "\n";

	_getch();
}