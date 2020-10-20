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